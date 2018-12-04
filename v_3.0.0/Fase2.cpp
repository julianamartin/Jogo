#include "pch.h"
#include "Fase2.h"


Fase2::Fase2() :
	Fase()
{
	fase = 2;
	
	srand((int)time(NULL));
	n_prova = (rand() % 3) + 5; //min = 5, max = 7
	srand((int)time(NULL));
	n_dp = (rand() % 3) + 5;
	srand((int)time(NULL));
	n_bebed = (rand() % 3) + 5;
	srand((int)time(NULL));
	n_cerveja = (rand() % 3) + 5;

	plat.Inicializa2(); //inicializa plataforma
}
Fase2::~Fase2()
{

}

void Fase2::criaElem() //cria obstáculos e inimigos
{
	int i;

	Porta* porta = new Porta;
	porta->Inicializa(2);
	listaEnt.Incluir(static_cast<Entidade*> (porta));

	DP* pD = NULL;
	for (i = 0; i < n_dp; i++)
	{
		pD = new DP; 
		//pD->Inicializa();
		pD->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pD));
		listaInim.Incluir(static_cast<Inimigo*> (pD));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_prova; i++)
	{
		pP = new Prova;
		//pP->Inicializa();
		pP->setPosicao2();
		listaEnt.Incluir(static_cast<Entidade*> (pP));
		listaInim.Incluir(static_cast<Inimigo*> (pP));
	}

	Bebedouro* pBe = NULL;
	for (i = 0; i < n_bebed; i++)
	{
		pBe = new Bebedouro;
		//pBe->Inicializa();
		pBe->setPosicao();
		listaEnt.Incluir(static_cast<Entidade*> (pBe));
	}

	Cerveja* pCe = NULL;
	for (i = 0; i < n_cerveja; i++)
	{
		pCe = new Cerveja;
		//pCe->Inicializa();
		pCe->setPosicao2();
		listaEnt.Incluir(static_cast<Entidade*> (pCe));
	} 

	listaEnt.InicializaLista();

	//setar posições dos jogadores
	jog1.setPosicao2(); 
	if (multiplayer)
		jog2.setPosicao2();
}
