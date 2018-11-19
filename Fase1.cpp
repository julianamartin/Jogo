#include "pch.h"
#include "Fase1.h"


Fase1::Fase1():
Fase()
{
	fase = 1;

	srand((int)time(NULL));
	n_conta = (rand() % 3) + 5; //min = 5, max = 7
	srand((int)time(NULL));
	n_prova = (rand() % 3) + 5;
	srand((int)time(NULL));
	n_alfajor = (rand() % 3) + 5;
	srand((int)time(NULL));
	n_cerveja = (rand() % 3) + 5;

	plat.Inicializa1(); //inicializa plataforma



}
Fase1::~Fase1()
{

} 
/* void Fase1::Executar()
{
	float deltaTime = 0.0f;
	Clock clock;



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
					pause = true;
					break;

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

			jog1.Atualiza1(deltaTime);
			jog1.Desenha(*window);

			if (multiplayer)
			{
				jog2.Atualiza2(deltaTime);
				jog2.Desenha(*window);
			}

			plat.Desenha(*window);

			listaEnt.Mover(deltaTime);
			listaEnt.Desenhalista(*window);

			window->display();
		}
	}
} */

void Fase1::criaElem() //cria obstáculos e inimigos
{
	int i;

	porta.Inicializa(1);
	listaEnt.Incluir(static_cast<Entidade*> (&porta));

	Conta* pC = NULL;
	for (i = 0; i < n_conta; i++)
	{
		pC = new Conta; 
		pC->Inicializa();
		pC->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pC));
		listaInim.Incluir(static_cast<Inimigo*> (pC));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_prova; i++)
	{
		pP = new Prova;
		pP->Inicializa();
		pP->setPosicao1();
		listaEnt.Incluir(static_cast<Entidade*> (pP));
		listaInim.Incluir(static_cast<Inimigo*> (pP));
	}

	Alfajor* pAl = NULL;
	for (i = 0; i < n_alfajor; i++)
	{
		pAl = new Alfajor;
		pAl->Inicializa();
		pAl->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pAl));
	}

	Cerveja* pCe = NULL;
	for (i = 0; i < n_cerveja; i++)
	{
		pCe = new Cerveja;
		pCe->Inicializa();
		pCe->setPosicao1();
		listaEnt.Incluir(static_cast<Entidade*> (pCe));
	} 
	
	//listaEnt.criaElem(n_alfajor, n_bebed, n_cerveja, n_conta, n_dp, n_prova, &listaInim);

	//setar posições jogadores
	jog1.setPosicao1();
	if (multiplayer)
		jog2.setPosicao1();
}



