#include "pch.h"
#include "Colisor.h"

Colisor::Colisor(sf::RectangleShape& obj) :
obj(obj)
{

}
Colisor::~Colisor()
{
}
bool Colisor::Colidiu(Colisor outroObj, sf::Vector2f& dire��o, float desloc) 
{
	sf::Vector2f outraPos = outroObj.getPosi��o(); //Posi��o do outro Objeto
	sf::Vector2f outraMetade = outroObj.getMetade(); //Metade do tamanho do outro objeto 
	sf::Vector2f essaPos = getPosi��o(); //Posi��o do pr�prio Objeto
	sf::Vector2f essaMetade = getMetade(); //Metade do tamanho do pr�prio objeto 

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

				dire��o.x = 1.0f;
				dire��o.y = 0.0f;
			}
			else
			{
				Mover(-intersecX * (1.0f - desloc), 0.0f);
				outroObj.Mover(intersecX * desloc, 0.0f);

				dire��o.x = -1.0f;
				dire��o.y = 0.0f;
			}
		}
		else
		{
			if (deltaY > 0.0f)
			{
				Mover(0.0f, intersecY * (1.0f - desloc));
				outroObj.Mover(0.0f , -intersecY * desloc);

				dire��o.x = 0.0f;
				dire��o.y = 1.0f;
			}
			else
			{
				Mover(0.0f , -intersecY * (1.0f - desloc));
				outroObj.Mover(0.0f, intersecY * desloc);

				dire��o.x = 0.0f;
				dire��o.y = -1.0f;
			}
		}
		return (true);
	}

	return (false);
}
sf::Vector2f Colisor::getPosi��o()
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