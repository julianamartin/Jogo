#pragma once

template <class TIPO>
class Lista
{
public:
	template <class TIPO>
	class Elemento
	{
	private:
		Elemento<TIPO>* pProx;
		TIPO* P;
	public:
		Elemento<TIPO>(){}
		~Elemento<TIPO>(){}
		Elemento<TIPO>* getProx() { return pProx; }
		void setProx(Elemento<TIPO>* pElem) { pProx = pElem; }
	};

private:
	Elemento<TIPO>* pPrim;
	Elemento<TIPO>* pAtual;
public:
	Lista();
	~Lista();
	void incluir(Elemento<TIPO> *p);
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
void Lista<TIPO>::incluir(Lista<TIPO>::Elemento<TIPO>* p)
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

