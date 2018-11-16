#include "pch.h"
#include "Fase1.h"


Fase1::Fase1():
Fase()
{
	n_conta = (rand() % 3) + 5;//min = 5, max = 7
	n_prova = (rand() % 3) + 5;
	n_alfajor = (rand() % 3) + 5;
	n_cerveja = (rand() % 3) + 5;
	plat.Inicializa1();
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
		listaEnt.Desenhalista(*window);
		jog1.aTempo().Desenha(*window);
		window->display();
	}
}

void Fase1::criaElem()
{
	int i;
	
	Conta* pC = NULL;
	for (i = 0; i < n_conta; i++)
	{
		pC = new Conta; 
		pC->Inicializa();
		pC->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pC));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_prova; i++)
	{
		pP = new Prova;
		pP->Inicializa(1);
		//pP->setPosicao1();
		listaEnt.Incluir(static_cast<Entidade*> (pP));
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

}


