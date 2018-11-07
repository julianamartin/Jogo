#pragma once

template <class TIPO>
class Lista
{
private:
	Elemento* pPrim;
	Elemento* pAnte;
public:
	class Elemento
	{
	private:
		Elemento* pProx;
	public:
		Elemento();
		~Elemento();
		Elemento getProx();
		void setProx(Elemento* pElem);
	};
	Lista();
	~Lista();
	void incluir(Elemento *p);
};


template <class TIPO>
Lista<TIPO>::Lista()
{

}
template <class TIPO>
Lista<TIPO>::~Lista()
{

}
template<class TIPO>
void Lista<TIPO>::incluir(Lista<TIPO>::Elemento* p)
{
}
template<class TIPO>
Lista<TIPO>::Elemento::Elemento()
{
}
template<class TIPO>
Lista<TIPO>::Elemento::~Elemento()
{
}
template<class TIPO>
Lista<TIPO>::Elemento Lista<TIPO>::Elemento::getProx()
{
}
template<class TIPO>
void Lista<TIPO>::Elemento::setProx(Elemento* pElem)
{
}
