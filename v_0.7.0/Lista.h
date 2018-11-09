#pragma once

template <class TIPO>
class Lista
{
public:
	class Elemento
	{
	private:
		Elemento* pProx;
	public:
		Elemento();
		~Elemento();
		Elemento* getProx() { return pProx; }
		void setProx(Elemento* pElem) { pProx = pElem; }
	};

private:
	Elemento* pPrim;
	Elemento* pAtual;
public:
	Lista();
	~Lista();
	void incluir(Elemento *p);
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
	Elemento* pAux = pPrim;

	while (pAux != NULL)
	{
		pPrim = pPrim->getProx();
		delete pAux;
		pAux = pPrim;
	}

}
template<class TIPO>
void Lista<TIPO>::incluir(Lista<TIPO>::Elemento* p)
{
	Elemento* pAux = NULL;

	pAux = new Elemento(p);

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
Lista<TIPO>::Elemento::Elemento()
{
}
template<class TIPO>
Lista<TIPO>::Elemento::~Elemento()
{
}
