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
		pAux->getInfo->Desenha(window);
		pAux = pAux->getProx();
	}
}

void ListaEntidade::InicializaLista()
{

}

void ListaEntidade::Incluir(Entidade* ent)
{
	//Lista<Entidade*>::ElementoEnt* pEl = new Lista<Entidade*>::ElementoEnt; 
	objLEnt.incluir(ent);
}

void ListaEntidade::testaColisao(Jogador* jog)
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	Vector2f direção; //verificcar se cria aqui ou nos atributos

	while (pAux != NULL)
	{
		if (pAux->getInfo->getColisão().Colidiu(jog->getColisão(), direção, 1.0f))
		{
			jog->EmColisão(direção);
		}
		pAux = pAux->getProx();
	}
}

