#include "SFML"
#include <iostream>
using namespace std;

#include "Plataforma.h"

int main ()
{
    RenderWindow win(VideoMode(1920.0f, 1080.0f), "SFML Tutorial", Style::Resize | Style::Close);
    Plataforma ObjPlat;
    RectangleShape rectang(Vector2f(500.0f, 500.0f));

     while (win.isOpen())
    {
        Event evnt;
        while (win.pollEvent(evnt))
        {

            switch (evnt.type)
            {
                case Event::Closed:
                    win.close();
                    break;
            }
        }

        ObjPlat.Inicializa1();
        win.clear(Color(150, 150, 150));

        win.draw
        ObjPlat.Desenha(win);

        win.display();
    }

    return 0;
}

