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

void ListaEntidade::InicializaLista() //inicializar
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	while (pAux != NULL)
	{
		pAux->getInfo()->Inicializa();
		pAux = pAux->getProx();
	}
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
			}
				
			
			
		}
		pAux = pAux->getProx();
	}
}

void ListaEntidade::limpa()
{
	objLEnt.limpa();
}


void ListaEntidade::zeraQnt()
{
	Lista<Entidade>::Elemento<Entidade>* pAux = objLEnt.getPrim();
	while (pAux != NULL)
	{
		pAux->getInfo()->zeraQnt();
		pAux = pAux->getProx();
	}
}
