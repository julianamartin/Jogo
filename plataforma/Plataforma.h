#ifndef PLATAFORMA_H
#define PLATAFORMA_H

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


    protected:
        vector<RectangleShape*> vPlat;

};

#endif // PLATAFORMA_H
