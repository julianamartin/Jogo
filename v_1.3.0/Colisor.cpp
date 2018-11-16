#include "pch.h"
#include "Colisor.h"

Colisor::Colisor(sf::RectangleShape& obj) :
obj(obj)
{

}
Colisor::~Colisor()
{
}
bool Colisor::Colidiu(Colisor outroObj, sf::Vector2f& direção, float desloc) 
{
	sf::Vector2f outraPos = outroObj.getPosição(); //Posição do outro Objeto
	sf::Vector2f outraMetade = outroObj.getMetade(); //Metade do tamanho do outro objeto 
	sf::Vector2f essaPos = getPosição(); //Posição do próprio Objeto
	sf::Vector2f essaMetade = getMetade(); //Metade do tamanho do próprio objeto 

	float deltaX = outraPos.x - essaPos.x;
	float deltaY = outraPos.y - essaPos.y;
	float intersecX = abs(deltaX) - (outraMetade.x + essaMetade.x);
	float intersecY = abs(deltaY) - (outraMetade.y + essaMetade.y);

	if (intersecX < 0.0f && intersecY < 0.0f)
	{
		desloc = std::min(std::max(desloc, 0.0f), 1.0f);

		if (abs(intersecX) < abs(intersecY))
		{
			if (deltaX > 0.0f)
			{
				Mover(intersecX * (1.0f - desloc), 0.0f);
				outroObj.Mover(-intersecX * desloc, 0.0f);

				direção.x = 1.0f;
				direção.y = 0.0f;
			}
			else
			{
				Mover(-intersecX * (1.0f - desloc), 0.0f);
				outroObj.Mover(intersecX * desloc, 0.0f);

				direção.x = -1.0f;
				direção.y = 0.0f;
			}
		}
		else
		{
			if (deltaY > 0.0f)
			{
				Mover(0.0f, intersecY * (1.0f - desloc));
				outroObj.Mover(0.0f , -intersecY * desloc);

				direção.x = 0.0f;
				direção.y = 1.0f;
			}
			else
			{
				Mover(0.0f , -intersecY * (1.0f - desloc));
				outroObj.Mover(0.0f, intersecY * desloc);

				direção.x = 0.0f;
				direção.y = -1.0f;
			}
		}
		return (true);
	}

	return (false);
}
sf::Vector2f Colisor::getPosição()
{
	return (obj.getPosition());
}
sf::Vector2f Colisor::getMetade()
{
	return (obj.getSize() / 2.0f);
}
void Colisor::Mover(float dx, float dy)
{
	obj.move(dx,dy);
}