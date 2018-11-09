#include "Plataforma2.h"

Plataforma2::Plataforma2() :
    Plataforma()
{
    //ctor
}

Plataforma2::~Plataforma2()
{
    //dtor
}

void Plataforma2::Inicializa()
{
    RectangleShape base(Vector2f(1920.0f, 1080.0f));
    base.setPosition(960.0f, 1027.5f);
    getPlat().push_back(&base);

    //de cima para baixo
    RectangleShape p1(Vector2f(510.0f, 100.0f));
    p1.setPosition(255.0f, 200.0f);
    //p1.setFillColor();
    getPlat().push_back(&p1);

    RectangleShape p2(Vector2f(280.0f, 100.0f));
    p2.setPosition(755.0f, 455.0f);
    getPlat().push_back(&p2);

    RectangleShape p3(Vector2f(470.0f, 80.0f));
    p3.setPosition(235.0f, 625.0f);
    getPlat().push_back(&p3);

    RectangleShape p4(Vector2f(380.0f, 60.0f));
    p4.setPosition(735.0f, 775.0f);
    getPlat().push_back(&p4);

    //de baixo para cima

    int i;
    RectangleShape* tijolo = NULL;
    Vector2f tamanho(100.0f, 100.0f);
    Vector2f posicao(1415.0f, 770.0f);

    for (i = 0; i < 3; i++)
    {
        tijolo = new (RectangleShape);
        tijolo->setSize(tamanho);
        tijolo->setPosition(posicao);
        getPlat().push_back(tijolo);

        posicao.x += tamanho.x;
        posicao.y -= (tamanho.y - 30.0f);

        tijolo = NULL;


    }

    RectangleShape p5(Vector2f(235.0f, 90.0f));
    p5.setPosition(1802.5f, 505.0f);
    getPlat().push_back(&p5);

    RectangleShape p6 (Vector2f(260.0f, 100.0f));
    p6.setPosition(1450.0f, 415.0f);
    getPlat().push_back(&p6);

    RectangleShape p7(Vector2f(490.0f, 70.0f));
    p7.setPosition(1675.0f, 250.0f);
    getPlat().push_back(&p7);

    RectangleShape p8(Vector2f(150.0f, 50.0f));
    p8.setPosition(1220.0f, 200.0f);
    getPlat().push_back(&p8);


}
