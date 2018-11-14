#include "pch.h"
#include "Fase1.h"


Fase1::Fase1():
Fase()
{
	plat.Inicializa1();
}
Fase1::~Fase1()
{
}
void Fase1::Executar()
{
	float deltaTime = 0.0f;
	Clock clock;
	jog1.setPosicao1();
	if (multiplayer)
		jog2.setPosicao1();

	while (window->isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		if (deltaTime > 1.0f / 20.0f)
			deltaTime = 1.0f / 20.0f;

		Event evnt;
		while (window->pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window->close();
				break;
			}
		}

		jog1.Atualiza1(deltaTime);
		verificaColisao();
	
		window->clear(Color(150, 150, 150));
		jog1.Desenha(*window);
		if (multiplayer)
		{
			jog2.Atualiza2(deltaTime);
			jog2.Desenha(*window);
		}
		plat.Desenha(*window);
		window->display();

	}
}

