#ifndef texte_H
#define texte_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct{
		SDL_Rect position;
		TTF_Font *font;
		SDL_Surface * surfaceTexte;
		SDL_Color textColor;
		char texte[50];
}Text;
void initText1(Text *A);
void initText2(Text *A);
void freeText(Text A);
void displayText1(Text t,SDL_Surface *screen);
void displayText2(Text t,SDL_Surface *screen); 
  

#endif
																													 
