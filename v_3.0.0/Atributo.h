#pragma once

class Atributo
{
protected:
	float valor;
	RectangleShape barra1;
	Text nome;
	Font fonte;
	Vector2f tamanho;

public:
	Atributo();
	~Atributo();
	void Desenha(RenderWindow& window);
	void operator-(float v);
	void operator=(float v);
	float getValor() const { return valor; }
};
