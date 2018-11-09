#include "Plataforma1.h"

Plataforma1::Plataforma1() :
    Plataforma()
{
    //ctor
}

Plataforma1::~Plataforma1()
{
    //dtor
}

void Plataforma1::Inicializa()
{
    //4 plataformas
    RectangleShape base(Vector2f(1920.0f, 105.0f));
    base.setPosition(960.0f, 1027.5f);
    base.setFillColor(Color(0, 0, 0));
    getPlat().push_back(&base);

    RectangleShape p1(Vector2f(560.0f, 105.0f));
    p1.setPosition(1640.0f, 522.5f);
    //p1.setFillColor();
    getPlat().push_back(&p1);

    RectangleShape p2(Vector2f(400.0f, 105.0f));
    p2.setPosition(200.0f, 802.5f);
    getPlat().push_back(&p2);

    RectangleShape p3(Vector2f(520.0f, 80.0f));
    p3.setPosition(260.0f, 330.0f);
    getPlat().push_back(&p3);

    RectangleShape p4(Vector2f(780.0f, 90.0f));
    p4.setPosition(1142.0f, 200.0f);
    getPlat().push_back(&p4);

    //3 escadas

    int i;
    Vector2f tamanho(100.0f, 100.0f);
    Vector2f posicao(1110.0f, 805.0f);
    RectangleShape* tijolo = NULL;

    for (i = 0; i < 3; i++)
    {
        tijolo = new (RectangleShape);
        tijolo->setSize(tamanho);
        tijolo->setPosition(posicao);
        getPlat().push_back(tijolo);

        posicao.x += tamanho.x;
        posicao.y += tamanho.y - 20.0f;

        tijolo = NULL;
    }

    posicao.x = 550.0f;
    posicao.y = 690.0f;

    for (i = 0; i < 4; i++)
    {
        tijolo = new (RectangleShape);
        tijolo->setSize(tamanho);
        tijolo->setPosition(posicao);
        getPlat().push_back(tijolo);


        posicao.x += tamanho.x;
        posicao.y += tamanho.y - 40.0f;

        tijolo = NULL;

    }

    posicao.x = 750.0f;
    posicao.y = 250.0f;

    for (i = 0; i < 3; i++)
    {
        tijolo = new (RectangleShape);
        tijolo->setSize(tamanho);
        tijolo->setPosition(posicao);
        getPlat().push_back(tijolo);


        posicao.x += tamanho.x;
        posicao.y += tamanho.y - 10.0f;

        tijolo = NULL;
    }

}


