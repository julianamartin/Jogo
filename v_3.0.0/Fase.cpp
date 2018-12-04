#include "pch.h"
#include "Fase.h"

Fase::Fase()
{
	n_dp = 0;
	n_prova = 0;
	n_conta = 0;
	n_alfajor = 0;
	n_cerveja = 0;
	n_bebed = 0;
	pause = false;
}

Fase::~Fase()
{
	listaEnt.zeraQnt();
	destroiElem();
} 

void Fase::Inicializa(RenderWindow* window, float deltaTime, bool multiplayer, int i)
{
	this->window = window;
	this->deltaTime = deltaTime;
	this->multiplayer = multiplayer;
	jog1Texture.loadFromFile("kit_from_firefox.png");
	jog1.Inicializa(&jog1Texture, Vector2u(3, 9), 0.3f, 150.0f, 210.0f);
	jog1.aTempo()->Inicializa1();
	jog1.aDinheiro()->Inicializa1();
	jog1.aEnergia()->Inicializa1();

	if (multiplayer)
	{
		jog2Texture.loadFromFile("tux_from_linux.png");
		jog2.Inicializa(&jog2Texture, Vector2u(3, 9), 0.3f, 150.0f, 210.0f);
		jog2.aTempo()->Inicializa2();
		jog2.aDinheiro()->Inicializa2();
		jog2.aEnergia()->Inicializa2();
	}
	if (i == 1)
	{
		texturaFundo.loadFromFile("background_1.png");
		fundo.setSize(Vector2f(1920.0f, 1080.0f));
		fundo.setOrigin(fundo.getSize() / 2.0f);
		fundo.setPosition(1920.0 / 2.0, 1080.0 / 2.0);
		fundo.setTexture(&texturaFundo);
	}
	else
	{
		if (i == 2)
		{
			texturaFundo.loadFromFile("background_2.jpg");
			fundo.setSize(Vector2f(1920.0f, 1080.0f));
			fundo.setOrigin(fundo.getSize() / 2.0f);
			fundo.setPosition(1920.0 / 2.0, 1080.0 / 2.0);
			fundo.setTexture(&texturaFundo);
		}
	}

} 


void Fase::verificaColisao()
{
	//plataforma
	plat.verificaColisao(&jog1);
	if (multiplayer)
		plat.verificaColisao(&jog2);

	//inimigos e obstáculos (entidades)
	listaEnt.testaColisao(&jog1);
	if (multiplayer)
		listaEnt.testaColisao(&jog2);
}


void Fase::destroiElem()
{
	listaEnt.limpa();
}

void Fase::Executar()
{
	float deltaTime = 0.0f;
	Clock clock;

	destroiElem();
	criaElem();

	while (window->isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		if (deltaTime > 1.0f / 20.0f)
			deltaTime = 1.0f / 20.0f;

		Event evnt;
		while (window->pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window->close();
				break;
			case Event::KeyReleased:
				switch ((evnt).key.code)
				{
				case sf::Keyboard::Escape:
				{
					pause = true;
					case sf::Keyboard::F4:
					{
						salvarJogada();
						break;
					}
					break;
				}

				case sf::Keyboard::F5:
					pause = false;
					break;
				}
				break;

			}
		}

		if (!pause)
		{
			verificaColisao(); //testa as colisões (jog1 e jog2)

			//verifica se não colidiu com a porta ou se não se esgotaram os atributos
			if (multiplayer)
			{
				if ((jog1.getPorta() && jog2.getPorta()) || (jog1.esgotou() || jog2.esgotou())) //alterar se necessário
					break;
			}
			else
			{
				if (jog1.getPorta() || jog1.esgotou())
					break;

			}

			window->clear(Color(150, 150, 150));

			window->draw(fundo);

			jog1.Atualiza1(deltaTime);
			jog1.Desenha(*window);

			if (multiplayer)
			{
				jog2.Atualiza2(deltaTime);
				jog2.Desenha(*window);
			}

			plat.Desenha(*window);

			listaInim.Mover(deltaTime);
			listaEnt.Desenhalista(*window);

			window->display();
		}
	}
} 

void Fase::salvarJogada()
{
	ofstream gravacaoElementos("salvarjogada.txt", ios::out);
	if (!gravacaoElementos)
		cout << "Arquivo não pode ser aberto" << endl;
	else
	{
		gravacaoElementos.clear();
		gravacaoElementos << fase << ' ' << jog1.getPosicao().x << ' ' << jog1.getPosicao().y << ' ' << jog1.getEnergia() << ' ' 
		<< jog1.getTempo() << ' ' << jog1.getDinheiro() << ' ';

		if (multiplayer)
		{
			gravacaoElementos << 1 << ' ';
			gravacaoElementos << jog2.getPosicao().x << ' ' << jog2.getPosicao().y << ' ' << jog2.getEnergia() << ' '
				<< jog2.getTempo() << ' ' << jog2.getDinheiro() << ' ';
		}
		else
		{
			gravacaoElementos << 0 << ' ';
		}
		//gravar entidades
		Lista<Entidade>::Elemento<Entidade>* pAux = listaEnt.getPrim();
		while (pAux != NULL)
		{
			gravacaoElementos << pAux->getInfo()->getID() << ' ' << pAux->getInfo()->getPosicao().x << ' ' << pAux->getInfo()->getPosicao().y << ' ';
			pAux = pAux->getProx();
		}
	}
	gravacaoElementos.close();

}

void Fase::recuperarJogada()
{
	ifstream recuperacaoElementos("salvarjogada.txt", ios::in);
	if (!recuperacaoElementos)
		cout << "Arquivo não pode ser aberto";
	else
	{
		listaEnt.limpa();

		int f;
		bool mp;
		Vector2f pos;
		float energia, tempo, dinheiro;

		recuperacaoElementos >> f >> pos.x >> pos.y >> energia >> tempo >> dinheiro >> mp;

		fase = f;

		jog1.setPosicao(Vector2f(pos.x, pos.y));
		jog1.setEnergia(energia);
		jog1.setTempo(tempo);
		jog1.setDinheiro(dinheiro);
		multiplayer = mp;

		if (multiplayer)
		{
			recuperacaoElementos >> pos.x >> pos.y >> energia >> tempo >> dinheiro;

			jog2.setPosicao(Vector2f(pos.x, pos.y));
			jog2.setEnergia(energia);
			jog2.setTempo(tempo);
			jog2.setDinheiro(dinheiro);
		}

		int id;

		while (!recuperacaoElementos.eof())
		{
			recuperacaoElementos >> id >> pos.x >> pos.y;
			if (id == 1)
			{
				Alfajor* pAl = new Alfajor;
				pAl->Inicializa();
				static_cast<Entidade*>(pAl)->setPosicao(pos);
				listaEnt.Incluir(static_cast<Entidade*> (pAl));
				
			}
			if (id == 2)
			{
				Bebedouro* pBe = new Bebedouro;
				pBe->Inicializa();
				static_cast<Entidade*>(pBe)->setPosicao(pos);
				listaEnt.Incluir(static_cast<Entidade*> (pBe));
			}
			if (id == 3)
			{
				Cerveja* pCe = new Cerveja;
				pCe->Inicializa();
				pCe->setPosicao(pos);
				listaEnt.Incluir(static_cast<Entidade*> (pCe));
			}
			if (id == 4)
			{
				Conta* pC = new Conta;
				pC->Inicializa();
				static_cast<Entidade*>(pC)->setPosicao(pos);
				listaEnt.Incluir(static_cast<Entidade*> (pC));
				listaInim.Incluir(static_cast<Inimigo*> (pC));
			}
			if (id == 5)
			{
				DP* pD = new DP;
				pD->Inicializa();
				static_cast<Entidade*>(pD)->setPosicao(pos);
				listaEnt.Incluir(static_cast<Entidade*> (pD));
				listaInim.Incluir(static_cast<Inimigo*> (pD));
			}
			if (id == 6)
			{
				Prova* pP = new Prova;
				pP->Inicializa();
				pP->setPosicao(pos);
				listaEnt.Incluir(static_cast<Entidade*> (pP));
				listaInim.Incluir(static_cast<Inimigo*> (pP));
			}
		}
		recuperacaoElementos.close();
	}
}

void Fase::ExecutarRec(int i)
{
	float deltaTime = 0.0f;
	Clock clock;

	if (i == 1)
		porta.Inicializa(1);
	if (i == 2)
		porta.Inicializa(2);

	listaEnt.Incluir(static_cast<Entidade*> (&porta));

	while (window->isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		if (deltaTime > 1.0f / 20.0f)
			deltaTime = 1.0f / 20.0f;

		Event evnt;
		while (window->pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window->close();
				break;
			case Event::KeyReleased:
				switch ((evnt).key.code)
				{
				case sf::Keyboard::Escape:
				{
					pause = true;
				case sf::Keyboard::F4:
				{
					salvarJogada();
					break;
				}
				break;
				}

				case sf::Keyboard::F5:
					pause = false;
					break;
				}
				break;

			}
		}

		if (!pause)
		{
			verificaColisao(); //testa as colisões (jog1 e jog2)

			//verifica se não colidiu com a porta, se não se esgotaram os atributos e se não morreu 
			if (jog1.esgotou() == true)
				break;

			if (multiplayer)
			{
				if ((jog1.getPorta() && jog2.getPorta()) || jog2.esgotou()) 
					break;
			}
			else
			{
				if (jog1.getPorta())
					break;

			}

			window->clear(Color(150, 150, 150));

			jog1.Atualiza1(deltaTime);
			jog1.Desenha(*window);

			if (multiplayer)
			{
				jog2.Atualiza2(deltaTime);
				jog2.Desenha(*window);
			}

			plat.Desenha(*window);

			listaInim.Mover(deltaTime);
			listaEnt.Desenhalista(*window);

			window->display();
		}
	}
}