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

void Fase1::criaElem() //cria obstáculos e inimigos
{
	int i;

	porta.Inicializa(1);
	listaEnt.Incluir(static_cast<Entidade*> (&porta));

	Conta* pC = NULL;
	for (i = 0; i < n_conta; i++)
	{
		pC = new Conta; 
		//pC->Inicializa();
		pC->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pC));
		listaInim.Incluir(static_cast<Inimigo*> (pC));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_prova; i++)
	{
		pP = new Prova;
		//pP->Inicializa();
		pP->setPosicao1();
		listaEnt.Incluir(static_cast<Entidade*> (pP));
		listaInim.Incluir(static_cast<Inimigo*> (pP));
	}

	Alfajor* pAl = NULL;
	for (i = 0; i < n_alfajor; i++)
	{
		pAl = new Alfajor;
		//pAl->Inicializa();
		pAl->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pAl));
	}

	Cerveja* pCe = NULL;
	for (i = 0; i < n_cerveja; i++)
	{
		pCe = new Cerveja;
		//pCe->Inicializa();
		pCe->setPosicao1();
		listaEnt.Incluir(static_cast<Entidade*> (pCe));
	} 
	
	listaEnt.InicializaLista();

	//setar posições jogadores
	jog1.setPosicao1();
	if (multiplayer)
		jog2.setPosicao1();
}



