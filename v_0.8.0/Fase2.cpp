#include "pch.h"
#include "Fase2.h"


Fase2::Fase2():
Fase()
{
	this->window = window;
}
Fase2::~Fase2()
{
}

void Fase2::DesenhaElem()
{
	vector<Plataforma> plataformas;
	plataformas.push_back(Plataforma(nullptr, Vector2f(400.0f, 200.0f), Vector2f(500.0f, 200.0f)));
	plataformas.push_back(Plataforma(nullptr, Vector2f(400.0f, 200.0f), Vector2f(500.0f, 0.0f)));
	plataformas.push_back(Plataforma(nullptr, Vector2f(1000.0f, 200.0f), Vector2f(500.0f, 500.0f)));

	while (window->isOpen())
	{
		Vector2f direção;
		for (Plataforma& plataforma : plataformas) //DEPOIS DO ATUALIZAAAA
		{
			if (plataforma.getColisão().Colidiu(jog1.getColisão(), direção, 1.0f))
			{
				jog1.EmColisão(direção);
			}
		}
		for (Plataforma& plataforma : plataformas)
		{
			plataforma.Desenha(*window);
		}
	}
}

void Fase2::Executar()
{

}