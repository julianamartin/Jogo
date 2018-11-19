#include "pch.h"
#include "ListaEntidade.h"


ListaEntidade::ListaEntidade()
{

}


ListaEntidade::~ListaEntidade()
{
}

void ListaEntidade::Desenhalista(RenderWindow& window)
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	while (pAux != NULL)
	{
		pAux->getInfo()->Desenha(window);
		pAux = pAux->getProx();
	}
}

void ListaEntidade::InicializaLista()
{

}

void ListaEntidade::Incluir(Entidade* elemento)
{
	objLEnt.incluir(elemento);
}

void ListaEntidade::testaColisao(Jogador* jog)
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	Vector2f direção; //verificcar se cria aqui ou nos atributos

	while (pAux != NULL)
	{
		if (pAux->getInfo()->getColisão().Colidiu(jog->getColisão(), direção, 1.0f))
		{
			if (pAux->getInfo()->getPorta() == true)
				jog->chegouPorta();
			else
			{
				jog->EmColisão(direção);
				jog->afetaJog(pAux->getInfo()->getTempo(), pAux->getInfo()->getEnergia(), pAux->getInfo()->getDinheiro());
				//cout << "tempo: " << jog->aTempo()->getValor();
			}
				
			
			
		}
		pAux = pAux->getProx();
	}
}

void ListaEntidade::limpa()
{
	objLEnt.limpa();
}

/* void ListaEntidade::Mover(float deltaTime)
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	while (pAux != NULL)
	{
		pAux->getInfo()->Mover(deltaTime);
		pAux = pAux->getProx();
	}
} */

/* void ListaEntidade::gravarElementos(ofstream arquivo)
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	while (pAux != NULL)
	{
		pAux->getInfo()->gravarEntidade(arquivo);
		pAux = pAux->getProx();
	}
} */

/*void ListaEntidade::criaElem(int i)
{
	if (i == 1)
	{

	}
	else
	{
		if (i == 2)
		{
			Porta* porta = new Porta;
			porta->Inicializa(2);
			objLEnt.incluir(static_cast<Entidade*> (porta));

			DP* pD = NULL;
			for (i = 0; i < n_dp; i++)
			{
				pD = new DP;
				pD->Inicializa();
				pD->setPosicao();
				objLEnt.incluir(static_cast<Entidade*> (pD));
				fs->getListaInim().Incluir(static_cast<Inimigo*> (pD));
			}

			Prova* pP = NULL;
			for (i = 0; i < n_prova; i++)
			{
				pP = new Prova;
				pP->Inicializa();
				pP->setPosicao2();
				objLEnt.incluir(static_cast<Entidade*> (pP));
				listaInim.Incluir(static_cast<Inimigo*> (pP));
			}

			Bebedouro* pBe = NULL;
			for (i = 0; i < n_bebed; i++)
			{
				pBe = new Bebedouro;
				pBe->Inicializa();
				pBe->setPosicao();
				objLEnt.incluir(static_cast<Entidade*> (pBe));
			}

			Cerveja* pCe = NULL;
			for (i = 0; i < fs->getNCerveja; i++)
			{
				pCe = new Cerveja;
				pCe->Inicializa();
				pCe->setPosicao2();
				objLEnt.incluir(static_cast<Entidade*> (pCe));
			}

			//setar posições dos jogadores
			fs->getJog1()->setPosicao2();
			if (fs->getMultiplayer)
				fs->getJog2->setPosicao2();
		}
	}
} */

/* void ListaEntidade::criaElem(int n_al, int n_be, int n_ce, int n_co, int n_pr, int n_dp, ListaInimigos* lInim)
{
	int i;
	Conta* pC = NULL;
	for (i = 0; i < n_co; i++)
	{
		pC = new Conta;
		pC->Inicializa();
		pC->setPosicao();
		objLEnt.incluir(static_cast<Entidade*> (pC));
		lInim->Incluir(static_cast<Inimigo*> (pC));
	}

	Prova* pP = NULL;
	for (i = 0; i < n_pr; i++)
	{
		pP = new Prova;
		pP->Inicializa();
		pP->setPosicao1();
		objLEnt.incluir(static_cast<Entidade*> (pP));
		lInim->Incluir(static_cast<Inimigo*> (pP));
	}

	Alfajor* pAl = NULL;
	for (i = 0; i < n_al; i++)
	{
		pAl = new Alfajor;
		pAl->Inicializa();
		pAl->setPosicao();
		objLEnt.incluir(static_cast<Entidade*> (pAl));
	}

	Cerveja* pCe = NULL;
	for (i = 0; i < n_ce; i++)
	{
		pCe = new Cerveja;
		pCe->Inicializa();
		pCe->setPosicao1();
		objLEnt.incluir(static_cast<Entidade*> (pCe));
	}
	DP* pD = NULL;
	for (i = 0; i < n_dp; i++)
	{
		pD = new DP;
		pD->Inicializa();
		pD->setPosicao();
		objLEnt.incluir(static_cast<Entidade*> (pD));
		lInim->Incluir(static_cast<Inimigo*> (pD));
	}
	Bebedouro* pBe = NULL;
	for (i = 0; i < n_be; i++)
	{
		pBe = new Bebedouro;
		pBe->Inicializa();
		pBe->setPosicao();
		objLEnt.incluir(static_cast<Entidade*> (pBe));
	}
}

void ListaEntidade::destroiElem()
{
	Lista<Entidade>::Elemento<Entidade>* pEl = objLEnt.getPrim();
	Entidade* pAux = pEl->getInfo();

	while (pEl != NULL)
	{
		delete(pAux);
		pEl = pEl->getProx();
		if (pEl != NULL)
			pAux = pEl->getInfo();
	}
} */

void ListaEntidade::zeraQnt()
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	while (pAux != NULL)
	{
		pAux->getInfo()->zeraQnt();
		pAux = pAux->getProx();
	}
}
