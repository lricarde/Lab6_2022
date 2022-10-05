// Lab6_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int main() {
	string background = "images/backgrounds/winter.png";
	string foreground = "images/characters/Rey_green_screen.png";

	Texture backgroundTex;
	if (!backgroundTex.loadFromFile(background)) {
		cout << "Couldn't Load Image" << endl;
		exit(1);
	}

	Texture foregroundTex;
	if (!foregroundTex.loadFromFile(foreground)) {
		cout << "Couldn't Load Image" << endl;
		exit(1);
	}

	Image backgroundImage;
	backgroundImage = backgroundTex.copyToImage();

	Image foregroundImage;
	foregroundImage = foregroundTex.copyToImage();
	Vector2u sz = backgroundImage.getSize();

	Sprite sprite1;
	Texture tex1;
	tex1.loadFromImage(foregroundImage);
	sprite1.setTexture(tex1);

	Sprite sprite2;
	Texture tex2;
	tex2.loadFromImage(backgroundImage);
	sprite2.setTexture(tex2);

	for (int y = 0; y < sz.y; y++) {
		for (int x = 0; x < sz.x; x++) {
			Color color = foregroundImage.getPixel(x, y);

			//void sf::image::createMaskFromColor ()
			//color.a = 0;
			//foregroundImage.setPixel(0, 0, color);
			//if the color of the pixel is green {then it changes to white
		}
	}

	RenderWindow window(VideoMode(1024, 768), "Here's the output");
	//tex1.update(pixels);
	window.clear();
	window.draw(sprite2);
	window.draw(sprite1);
	window.display();
	while (true);
}
	//should the top portion be coppied to show the other image as well to declare as a sprite?