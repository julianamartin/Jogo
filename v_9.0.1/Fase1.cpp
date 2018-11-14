#include "pch.h"
#include "Fase1.h"


Fase1::Fase1() :
	Fase()
{
	n_conta = (rand() % 5) + 5;
	n_prova = (rand() % 5) + 5;
	n_alfajor = (rand() % 5) + 5;
	n_cerveja = (rand() % 5) + 5;
	plat.Inicializa1();
	criaElem();
}
Fase1::~Fase1()
{
}
void Fase1::Executar()
{
	float deltaTime = 0.0f;
	Clock clock;
	jog1.setPosicao1();
	if (multiplayer)
		jog2.setPosicao1();

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
			}
		}

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
		window->display();

	}
}

void Fase1::criaElem()
{
	int i;
	Conta* pC = NULL;
	for (i = 0; i < n_conta; i++)
	{
		pC = new Conta; //classe nao está bem definida
		listaEnt.Incluir(static_cast<Entidade*> (pC));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_prova; i++)
	{
		pP = new Prova;
		listaEnt.Incluir(static_cast<Entidade*> (pP));
	}

	Alfajor* pAl = NULL;
	for (i = 0; i < n_alfajor; i++)
	{
		pAl = new Alfajor;
		listaEnt.Incluir(static_cast<Entidade*> (pAl));
	}

	Cerveja* pCe = NULL;
	for (i = 0; i < n_cerveja; i++)
	{
		pCe = new Cerveja;
		listaEnt.Incluir(static_cast<Entidade*> (pCe));
	}

}
