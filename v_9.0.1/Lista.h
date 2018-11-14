#pragma once
#include "Entidade.h"

template <class TIPO>
class Lista
{
public:
	template <class TIPO>
	class Elemento {
	private:
		Elemento<TIPO>* pProx;
		TIPO* pInfo; //Faz ponteiro???
	public:
		Elemento() { }
		~Elemento() { }
		Elemento<TIPO>* getProx() { return pProx; }
		void setProx(Elemento<TIPO>* pElem) { pProx = pElem; }
		void setInfo(TIPO* info) { pInfo = info;  }
		TIPO* getInfo() { return pInfo; }
	};

private:
	Elemento<TIPO>* pPrim;
	Elemento<TIPO>* pAtual;
public:
	Lista();
	~Lista() { }
	void incluir(TIPO* pTipo);
	Elemento<TIPO>* getPrim();
};

template <class TIPO>
Lista<TIPO>::Lista()
{
	pPrim = NULL;
	pAtual = NULL;
}
template <class TIPO>
Lista<TIPO>::~Lista()
{
	Elemento<TIPO>* pAux = pPrim;

	while (pAux != NULL)
	{
		pPrim = pPrim->getProx();
		delete pAux;
		pAux = pPrim;
	}

}
template<class TIPO>
void Lista<TIPO>::incluir(TIPO* pTipo)
{
	Elemento<TIPO>* pAux = NULL;

	pAux = new Elemento<TIPO>;
	pAux->setInfo(pTipo); //Trocar tipo por entidade

	if (pPrim == NULL)
	{
		pPrim = pAux;
		pAtual = pAux;
	}
	else
	{
		pAtual->setProx(pAux);
		pAtual = pAux;
	}
}

template<class TIPO>
Lista<TIPO>::Elemento<TIPO>* Lista<TIPO>::getPrim()
{
	return pPrim;
}
