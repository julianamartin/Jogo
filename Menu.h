#pragma once

#define N_elementos  7

class Menu
{
private:
	Text menu[N_elementos];
	int selectedItemIndex;
	Font font;
	Text pausar;
	Text continuar;
	Text salvar;
	Text recuperar;
	RectangleShape imagem;
	Texture texturaImg;

public:
	Menu();
	~Menu();
	void Desenha(RenderWindow& window);
	void MoveUp(); //selecionar o item de cima
	void MoveDown(); //selcionar o item de baixo
	int getPressedItem() { return selectedItemIndex; }
	void Inicializa(float largura, float altura);


};

