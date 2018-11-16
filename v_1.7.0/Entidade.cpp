#include "Entidade.h"


Entidade::Entidade()
{
	morre = false;
}


Entidade::~Entidade()
{
}
void Entidade::Desenha(RenderWindow& window)
{
	window.draw(objP);
}


Colisor Entidade::getColisão()
{
	return(Colisor(objP));
} 

/*void Entidade::Inicializa(Texture textura, Vector2f posicao, Vector2f tamanho)
{
	this->textura = textura;
	this->posicao = posicao;
	this->tamanho = tamanho;
	objP.setSize(tamanho);
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao);
	objP.setTexture(&textura);
}*/

/* void Entidade::testaColisao(Entidade* pEnt, Vector2f& direção, float desloc)
{
	bool colidiu = false;
	
	Vector2f outraPos = objP.getPosition(); //Posição desse Objeto
	Vector2f outraMetade = objP.getSize()/2.0f; //Metade do tamanho desse objeto 
	Vector2f essaPos = pEnt->getObjP().getPosition(); //Posição do outro Objeto
	Vector2f essaMetade = pEnt->getObjP().getSize()/2.0f; //Metade do tamanho do outro objeto 

	float deltaX = outraPos.x - essaPos.x;
	float deltaY = outraPos.y - essaPos.y;
	float intersecX = abs(deltaX) - (outraMetade.x + essaMetade.x);
	float intersecY = abs(deltaY) - (outraMetade.y + essaMetade.y);

	if (intersecX < 0.0f && intersecY < 0.0f)
	{
		colidiu = true;
		desloc = std::min(std::max(desloc, 0.0f), 1.0f);

		if (abs(intersecX) < abs(intersecY))
		{
			if (deltaX > 0.0f)
			{
				pEnt->getObjP().move(intersecX * (1.0f - desloc), 0.0f);
				objP.move(-intersecX * desloc, 0.0f);

				direção.x = 1.0f;
				direção.y = 0.0f;
			}
			else
			{
				pEnt->getObjP().move(-intersecX * (1.0f - desloc), 0.0f);
				objP.move(intersecX * desloc, 0.0f);

				direção.x = -1.0f;
				direção.y = 0.0f;
			}
		}
		else
		{
			if (deltaY > 0.0f)
			{
				pEnt->getObjP().move(0.0f, intersecY * (1.0f - desloc));
				objP.move(0.0f, -intersecY * desloc);

				direção.x = 0.0f;
				direção.y = 1.0f;
			}
			else
			{
				pEnt->getObjP().move(0.0f, -intersecY * (1.0f - desloc));
				objP.move(0.0f, intersecY * desloc);

				direção.x = 0.0f;
				direção.y = -1.0f;
			}
		}
		//return (true);
	}

	//return (false);
	if (colidiu)
	{
		this->EmColisão(direção);
		this->afetaJog(pEnt->getTempo(), pEnt->getEnergia(), pEnt->getDInheiro());
	}
		
} */
