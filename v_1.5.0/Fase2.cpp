#include "pch.h"
#include "Fase2.h"


Fase2::Fase2():
Fase()
{
	/*srand(time(NULL));
	n_prova = (rand() % 3) + 5; //min = 5, max = 7
	srand(time(NULL));
	n_dp = (rand() % 3) + 5;
	srand(time(NULL));
	n_bebed = (rand() % 3) + 5;
	srand(time(NULL));
	n_cerveja = (rand() % 3) + 5;*/
	n_cerveja = 7;
	n_bebed = 7;
	n_dp = 7;
	n_prova = 7;
	plat.Inicializa2();
}
Fase2::~Fase2()
{
}

void Fase2::Executar()
{

	float deltaTime = 0.0f;
	Clock clock;

	jog1.setPosicao2();
	if (multiplayer)
		jog2.setPosicao2();

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
			jog1.Atualiza1(deltaTime);
			verificaColisao();

			window->clear(Color(150, 150, 150));
			jog1.Desenha(*window);
			if (multiplayer)
			{
				jog2.Atualiza2(deltaTime);
				jog2.Desenha(*window);
			}
			plat.Desenha(*window);
			listaEnt.Desenhalista(*window);
			window->display();
		}
	}
}

void Fase2::criaElem()
{
	int i;

	Porta* porta = new Porta;
	porta->Inicializa(2);
	listaEnt.Incluir(static_cast<Entidade*> (porta));

	DP* pD = NULL;
	for (i = 0; i < n_dp; i++)
	{
		pD = new DP; 
		pD->Inicializa();
		pD->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pD));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_prova; i++)
	{
		pP = new Prova;
		pP->Inicializa();
		pP->setPosicao2();
		listaEnt.Incluir(static_cast<Entidade*> (pP));
	}

	Bebedouro* pBe = NULL;
	for (i = 0; i < n_bebed; i++)
	{
		pBe = new Bebedouro;
		pBe->Inicializa();
		pBe->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pBe));
	}

	Cerveja* pCe = NULL;
	for (i = 0; i < n_cerveja; i++)
	{
		pCe = new Cerveja;
		pCe->Inicializa();
		pCe->setPosicao2();
		listaEnt.Incluir(static_cast<Entidade*> (pCe));
	}
}


