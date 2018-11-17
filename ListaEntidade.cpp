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
	Vector2f dire��o; //verificar se cria aqui ou nos atributos

	while (pAux != NULL)
	{
		if (pAux->getInfo()->getColis�o().Colidiu(jog->getColis�o(), dire��o, 1.0f))
		{
			//if (pAux->getInfo()->getMorre() == true)
			jog->EmColis�o(dire��o);
			jog->afetaJog(pAux->getInfo()->getTempo(), pAux->getInfo()->getEnergia(), pAux->getInfo()->getDInheiro());
		}
		pAux = pAux->getProx();
	}
}

void ListaEntidade::limpa()
{
	objLEnt.limpa();
}