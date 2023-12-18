#include "menu.h"

void initMenu()
{
	background = sfSprite_create();
	playButton = sfSprite_create();
	quitButton = sfSprite_create();
	title = sfSprite_create();


	sfTexture* backgroundTexture = sfTexture_createFromFile("assets/background.png", NULL);
	sfTexture* playButtonTexture = sfTexture_createFromFile("assets/playButton.png", NULL);
	sfTexture* quitButtonTexture = sfTexture_createFromFile("assets/quitButton.png", NULL);
	sfTexture* titleTexture = sfTexture_createFromFile("assets/title.png", NULL);

	sfSprite_setTexture(background, backgroundTexture, sfTrue);
	sfSprite_setTexture(playButton, playButtonTexture, sfTrue);
	sfSprite_setTexture(quitButton, quitButtonTexture, sfTrue);
	sfSprite_setTexture(title, titleTexture, sfTrue);


}

void updateMenu()
{
}

void displayMenu(sfRenderWindow* window)
{
}
