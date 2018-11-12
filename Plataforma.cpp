#include "Plataforma.h"

Plataforma::Plataforma()
{
    //ctor
}

Plataforma::~Plataforma()
{
    vector<RectangleShape*>::iterator i;
    for(i = vPlat.begin(); i != vPlat.end(); i++)
    {
        delete (*i);
    }

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
    RectangleShape* pRect;

    for(i = vPlat.begin(); i != vPlat.end(); i++)
    {
        pRect = *i;
        window.draw(*pRect);
    }
}

void Plataforma::Inicializa1()
{
    //4 plataformas
    float alt = 1080.0f, larg = 1920.0f;

    criaBase(Vector2f(1920.0f, 105.0f), Vector2f(larg/2.0f, alt-105.0f/2.0f));

    criaBase(Vector2f(560.0f, 105.0f), Vector2f(1640.0f, 522.5f));

    criaBase(Vector2f(400.0f, 105.0f), Vector2f(200.0f, 802.5f));

    criaBase(Vector2f(520.0f, 80.0f), Vector2f(260.0f, 330.0f));

    criaBase(Vector2f(780.0f, 90.0f), Vector2f(1920.0f - 390.0f, 200.0f));

    //3 escadas

    Vector2f tamanho(100.0f, 100.0f);
    Vector2f posicao(1110.0f, 830.0f);

    for (int i = 0; i < 3; i++)
    {
        criaBase(tamanho, posicao);

        posicao.x += tamanho.x;
        posicao.y -= 80.0f;
    }

    posicao.x = 880.0f;
    posicao.y = 670.0f;

    for (int i = 0; i < 4; i++)
    {
        criaBase(tamanho, posicao);

        posicao.x -= tamanho.x;
        posicao.y -= 40.0f;


    }

    posicao.x = 750.0f;
    posicao.y = 300.0f;

    for (int i = 0; i < 3; i++)
    {
        criaBase(tamanho, posicao);

        posicao.x += tamanho.x;
        posicao.y -= 10.0f;

    }

}

void Plataforma::Inicializa2()
{
    criaBase(Vector2f(1920.0f, 150.0f), Vector2f(960.0f, 1005.0f));


    //de cima para baixo
    criaBase(Vector2f(510.0f, 100.0f), Vector2f(255.0f, 200.0f));


    criaBase(Vector2f(280.0f, 100.0f), Vector2f(755.0f, 455.0f));


    criaBase(Vector2f(470.0f, 80.0f), Vector2f(235.0f, 625.0f));


    criaBase(Vector2f(380.0f, 60.0f), Vector2f(735.0f, 775.0f));


    //de baixo para cima

    int i;
    Vector2f tamanho(100.0f, 100.0f);
    Vector2f posicao(1415.0f, 770.0f);

    for (i = 0; i < 3; i++)
    {
        criaBase(tamanho, posicao);

        posicao.x += tamanho.x;
        posicao.y -= 40.0f;

    }

    criaBase(Vector2f(220.0f, 80.0f), Vector2f(1810.0f, 520.0f));

    criaBase(Vector2f(350.0f, 80.0f), Vector2f(1400.0f, 450.0f));

    criaBase(Vector2f(490.0f, 70.0f), Vector2f(1675.0f, 250.0f));

    criaBase(Vector2f(150.0f, 50.0f), Vector2f(1220.0f, 200.0f));

}

void Plataforma::criaBase(Vector2f tamanho, Vector2f posicao)
{
    RectangleShape* base = new RectangleShape(tamanho);
    base->setOrigin(base->getSize().x/2.0f, base->getSize().y/2.0f);
    base->setPosition(posicao);
    base->setFillColor (Color(0, 0, 0)); //pode colocar textura
    vPlat.push_back(base);
}
