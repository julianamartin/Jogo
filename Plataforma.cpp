#include "Plataforma.h"

Plataforma::Plataforma()
{
    //ctor
}

Plataforma::~Plataforma()
{
    vPlat.clear(); //dtor
}

RectangleShape* Plataforma::getTijolo(int i)
{
    return vPlat[i];
}

vector<RectangleShape*> Plataforma::getPlat()
{
    return vPlat;
}

int Plataforma::getTam()
{
    return vPlat.size();
}

void Plataforma::Desenha(RenderWindow& window)
{
    vector<RectangleShape*>::iterator i;
    for(i = getPlat().begin(); i != getPlat().end(); i++)
    {
        window.draw(*(*i));
    }
}

