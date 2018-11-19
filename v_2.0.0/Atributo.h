#pragma once

class Atributo
{
protected:
	float valor;
	RectangleShape barra1;
	//RectangleShape barra2;
	Text nome;
	Font fonte;
	Vector2f tamanho;

public:
	Atributo();
	~Atributo();
	void Desenha(RenderWindow& window);
	void operator-(float v);
	virtual void Atualiza() { }
	const float getValor() { return valor; }
	void setValor(float v) { valor = v; }
};
