#include <SDL/SDL.h>
#include "Image.h"
#include <SDL/SDL_image.h>

/*void initPlayer(Image *A)
{
   
A->img = IMG_Load("logo.jpg");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=100;
 A->pos1.w=100;
 A->pos1.h=A->img->h;;

 A->pos2.x=193; 
 A->pos2.y=0;
 A->pos2.w=100;
 A->pos2.h=A->img->h;;



}*/ 
void initjouer(Image *A)
{
   
A->img = IMG_Load("play A.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}
void initoptions(Image *A)
{
   
A->img = IMG_Load("options.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}
void initexit(Image *A)
{
   
A->img = IMG_Load("exit.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=10;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}
void initlogo(Image *A)
{
   
A->img = IMG_Load("logo lion.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}


 void initBackground(Image *backg)
{
backg ->img=IMG_Load("bg solo.jpg");
      
             if(backg->img ==NULL)
              { 
                printf("unable to load bitmp:%s \n",SDL_GetError());
              return ;
              }

   
   backg->pos1.x=0;
   backg->pos1.y=0;
   backg->pos2.x=0;
   backg->pos2.y=0;
   backg->pos2.w=(SCREEN_W);
   backg->pos2.h=SCREEN_H;

 }

void initbarre(Image *A)
{
   
A->img = IMG_Load("barre.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}
void initbarre2(Image *A)
{
   
A->img = IMG_Load("barre.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=100;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}



void initbarre3(Image *A)
{
   
A->img = IMG_Load("barre.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=200;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}
 
void liberer (Image A)
{ 
           SDL_FreeSurface(A.img);
}

void afficher(Image p,SDL_Surface *screen)
{
SDL_BlitSurface(p.img,NULL,screen,&p.pos1);
//SDL_BlitSurface(p.img,&p.pos2,screen,&p.pos1);
}

void initoptionss(Image *A)
{
   
A->img = IMG_Load("optionss.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}


void init1(Image *A)
{
   
A->img = IMG_Load("barre1.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=400; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}

/*void initan(Image A[])
{
   
 A[1].img = IMG_Load("1.png");
 A[2].img = IMG_Load("2.png"); 
   

 A[1].pos1.x=0; 
 A[1].pos1.y=0;
 A[1].pos1.w=0;
 A[1].pos1.h=A->img->h;;

 A[2].pos1.x=0; 
 A[2].pos1.y=0;
 A[2].pos1.w=0;
 A[2].pos1.h=A->img->h;;

}*/

void init2(Image *A)
{
   
A->img = IMG_Load("barre2.png");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=400; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}


void initplay(Image *A)
{
   
A->img = IMG_Load("jeu1.jpg");
  
   if(A->img == NULL)
    {
      printf("cant load img\n");
      return;
    }

 A->pos1.x=0; 
 A->pos1.y=0;
 A->pos1.w=0;
 A->pos1.h=A->img->h;;

}



