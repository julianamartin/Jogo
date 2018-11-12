#ifndef _PLATAFORMA_H_
#define _PLATAFORMA_H_

#include <SFML/Graphics.hpp>
using namespace sf;

#include <iostream>
using namespace std;

class Plataforma
{
    public:
        Plataforma();
        ~Plataforma();
        void Inicializa1();
        void Inicializa2();
        RectangleShape* getTijolo(int i);
        vector<RectangleShape*> getPlat();
        int getTam();
        void Desenha(RenderWindow& window);
        void criaBase(Vector2f tamanho, Vector2f posicao);


    protected:
        vector<RectangleShape*> vPlat;

};

#endif // PLATAFORMA_H
