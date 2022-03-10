#include <SDL/SDL.h>
#include "texte.h"
#include <SDL/SDL_image.h>
void initText1(Text *A)
{
A->position.x=877.61;
A->position.y=72;
A->textColor.r=233;
A->textColor.g=229;
A->textColor.b=213;
A->font =  TTF_OpenFont("BodoniMT.ttf",99);
}
void initText2(Text *A)
{
A->position.x=1088.72;
A->position.y=236.67;
A->textColor.r=233;
A->textColor.g=229;
A->textColor.b=213;
A->font =  TTF_OpenFont("BodoniMT.ttf",99);
}

void freeText(Text A)
{
SDL_FreeSurface(A.surfaceTexte);
}
void displayText1(Text t,SDL_Surface *screen)
{
t.surfaceTexte= TTF_RenderText_Solid(t.font, "ross",t.textColor);
SDL_BlitSurface(t.surfaceTexte, NULL, screen,&t.position);
} 																																																					 
void displayText2(Text t,SDL_Surface *screen)
{
t.surfaceTexte= TTF_RenderText_Solid(t.font, "rip",t.textColor);
SDL_BlitSurface(t.surfaceTexte, NULL, screen,&t.position);
} 																																																					 
