#ifndef Image_H
#define Image_H
#include <SDL/SDL.h>
#define SCREEN_W 800
#define SCREEN_H 400
struct Image {
SDL_Rect pos1;
SDL_Rect pos2;
SDL_Surface * img;
};
typedef struct Image Image ;
void initPlayer(Image *A);
void initBackground(Image *Backg);
void initjouer(Image *A);
void initoptions(Image *A);
void initexit(Image *A);
void initlogo(Image *A);
void initbarre(Image *A);
void initbarre2(Image *A);
void initbarre3(Image *A);
void initoptionss(Image *A);
void init1(Image *A);
void init2(Image *A);
void initplay(Image *A);
//void initan(Image A[]);//
void liberer(Image A);
void afficher (Image p,SDL_Surface *screen);
#endif
