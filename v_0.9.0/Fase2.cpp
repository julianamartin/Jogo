#include "pch.h"
#include "Fase2.h"


Fase2::Fase2():
Fase()
{
	plat.Inicializa2();
}
Fase2::~Fase2()
{
}

void Fase2::Executar()
{
	float deltaTime = 0.0f;
	Clock clock;

	jog1.setPosicao2();
	if (multiplayer)
		jog2.setPosicao2();

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
