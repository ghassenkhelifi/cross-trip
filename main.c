#include "texte.h"
#include "Image.h"
#include <SDL/SDL_mixer.h>
int main( int argc , char ** argv)
{
    TTF_Init();
    SDL_Init( SDL_INIT_VIDEO);
    SDL_Surface *screen;
    int done=0,f=0,i;
    SDL_Event event;
    Text c,t;
    atexit(SDL_Quit);
    Image options,optionss,exit,jouer,Backg,logo,barre,barre2,barre3,b1,b2,play;
    Mix_Music *music;
    Mix_Chunk *son;
    
    


    screen = SDL_SetVideoMode(1920,1080, 32 , SDL_HWSURFACE |SDL_DOUBLEBUF);//SCREEN_W,SCREEN_H 
    if (!screen)
    {
        printf("unable to set 600*300 video: %s\n", SDL_GetError());
        return 1;
    }
 

    if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
    {
      printf("%s",Mix_GetError());
      printf("can t load music");
    }

    // son continue
     music=Mix_LoadMUS("g.mp3");
     Mix_PlayMusic(music,-1);

   // son bref
     son=Mix_LoadWAV("s.wav");
     



   // IMG + BG + LOGO  load
    initoptionss(&optionss);
    initBackground(&Backg) ;
    initjouer(&jouer);
    initoptions(&options);
    initexit(&exit);
    initlogo(&logo); 
    initbarre(&barre);
    initbarre2(&barre2);
    initbarre3(&barre3);
    init1(&b1);
    init2(&b2);
    initplay(&play);
   // initan(an);
    
   // initPlayer(&Hazar);
   // TEXT logo
    initText1(&c);
    initText2(&t);
    Mix_PlayChannel(-1,son,0);
    
    while(!done)
    {
  
  // AFFICHAGE IMG
  afficher(Backg,screen);
  afficher(jouer,screen);
  afficher(options,screen);
  afficher(exit,screen);
  afficher(logo,screen);
  

 // afficher(optionss,screen);
  
   /*    while(! done)
    {

            if (i>2)
            {
            i=0;
            }
            afficher(an[i],screen);
           //SDL_BlitSurface(an[i],NULL,screen,&p.pos1);
            SDL_Flip(screen);
            i++;
        
    }*/

 











  
       // afficher(Hazar,screen);
       // AFFICHAGE TEXT 
       displayText1(c , screen);
       displayText2(t , screen);
    
   
   
   

 
        SDL_PollEvent(&event);
        switch (event.type)
        {
          // barre
            case SDL_KEYUP:
                      
                  
               if(event.key.keysym.sym==SDLK_o)
           {
                     while(event.key.keysym.sym !=SDLK_r)
					{
							afficher(optionss,screen);
                                                        afficher(b1,screen);
                                                        afficher(b2,screen);
							SDL_Flip(screen);
							SDL_PollEvent(&event);
                        				
                        				switch(event.type)
                       				 {
                       	


                                                       case SDL_KEYDOWN:
                       							 

                                              // barre 1

                                                                                if (event.key.keysym.sym ==SDLK_n)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                  
                                                                                       if(b1.pos1.x<800)
                                                                                     b1.pos1.x=b1.pos1.x+200  ; 
                                                                                    
                                                                              Mix_VolumeMusic(MIX_MAX_VOLUME);
    
                                                                                  }

                                                                                if (event.key.keysym.sym ==SDLK_b)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                 
                                                                                      Mix_VolumeMusic(MIX_MAX_VOLUME/8);
                                                                                       if(b1.pos1.x>0)
                                                                                       b1.pos1.x=b1.pos1.x-200  ;  }



                                               // barre 2


                                                                         if (event.key.keysym.sym ==SDLK_m)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                  
                                                                                       if(b2.pos1.x<800)
                                                                                     b2.pos1.x=b2.pos1.x+200  ; 
                                                                                    
                                                                              Mix_VolumeMusic(MIX_MAX_VOLUME);
    
                                                                                  }

                                                                                if (event.key.keysym.sym ==SDLK_l)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                 
                                                                                      Mix_VolumeMusic(MIX_MAX_VOLUME/8);
                                                                                       if(b2.pos1.x>0)
                                                                                       b2.pos1.x=b2.pos1.x-200  ;  }













                                                                                

                                                                           if (event.key.keysym.sym ==SDLK_r)

                                                                                   {afficher(Backg,screen);
                                                                                     afficher(jouer,screen);
                                                                                    afficher(options,screen);
                                                                                     afficher(exit,screen);
                                                                                   afficher(logo,screen);
                                                                                      displayText1(c , screen);
                                                                                    displayText2(t , screen);
                                                                                     Mix_PlayChannel(-1,son,0);
                                                                                     SDL_Flip(screen);
                                                                                     }

                                                                           break;
                                                  

                                               }


                                        }
               }
         



                         
             if(event.key.keysym.sym==SDLK_p)
           {
                     while(event.key.keysym.sym !=SDLK_r)
					{
							afficher(play,screen);
                                                        
							SDL_Flip(screen);
							SDL_PollEvent(&event);
                        				
                        				switch(event.type)
                       				 {
                       	


                                                       case SDL_KEYDOWN:
                       							 

                                                                                                                       

                                                                          if (event.key.keysym.sym ==SDLK_r)

                                                                                   {afficher(Backg,screen);
                                                                                     afficher(jouer,screen);
                                                                                    afficher(options,screen);
                                                                                     afficher(exit,screen);
                                                                                   afficher(logo,screen);
                                                                                      displayText1(c , screen);
                                                                                    displayText2(t , screen);
                                                                                     Mix_PlayChannel(-1,son,0);
                                                                                     SDL_Flip(screen);
                                                                                     }

                                                                           break;
                                                  

                                               }


                                        }
               }
         












                    







               
 
       break;


         SDL_Flip(screen);
             
    









                       switch(event.key.keysym.sym)
                         {   
                           case SDLK_p:
                             
                             
                             //afficher(barre,screen);
                             SDL_Flip(screen);
                             

                                          
                             done=0;
                             
                           continue;

                            case SDLK_o: 
                              
                             //afficher(barre2,screen);
                             afficher(optionss,screen);
                             SDL_Flip(screen);

                             
                             done=0;
                            
                            continue;
                    

                               case SDLK_e: 
                              
                             //afficher(barre3,screen);
                             SDL_Flip(screen);       
                             
                             done=0;
                            
                            continue;

                            case SDLK_ESCAPE:
                            done=1;
                            break;                      
                         
                         //  default:
                         // continue;

                         }
        // son bref 
             case SDL_KEYDOWN:
        
                           switch(event.key.keysym.sym)
                         {   
                           case SDLK_p:
                            afficher(barre,screen);
                            Mix_PlayChannel(-1,son,0);
                            break;

                            case SDLK_o:
                            afficher(barre2,screen);
                            Mix_PlayChannel(-1,son,0);
                            break;

                            case SDLK_e:
                            afficher(barre3,screen);
                            Mix_PlayChannel(-1,son,0);
                            done=1;
                            break;
                            
                           
                          

                         }              
         
                        
  
           case SDL_MOUSEMOTION:


                              
			       
                               if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=535 && event.motion.y<=535+78)
				{   
				    afficher(barre,screen);
				   // Mix_PlayChannel(-1,son,0);
                                    
                                
 				}

                            


                               
                                if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=635 && event.motion.y<=635+78)
				{
				    afficher(barre2,screen);
                                    f=1;
				   // Mix_PlayChannel(-1,son,0);
                                    
				}
                                
                               

                               
                               
                                else if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=735 && event.motion.y<=735+78)
				{
				    afficher(barre3,screen);
				   // Mix_PlayChannel(-1,son,0);
                                   
				}

        
                        
                             //  if(f==1)
                          // {afficher(optionss,screen);
                         //           Mix_PlayChannel(-1,son,0);
                        //   }
   




           
           break;
         
         case SDL_MOUSEBUTTONDOWN:
                                 if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=535 && event.motion.y<=535+78)
                              {Mix_PlayChannel(-1,son,0);}   
                              if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=635 && event.motion.y<=635+78)
                              {
                                   //afficher(optionss,screen);
                                   
                                   Mix_PlayChannel(-1,son,0);
                                   SDL_Flip(screen);
                                }


























  
                              


				if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=735 && event.motion.y<=735+78)
				{Mix_PlayChannel(-1,son,0);
				    done = 1;
				}
				
                                  
         break;
      
        

        case SDL_MOUSEBUTTONUP:

       

             
 if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=535 && event.motion.y<=535+78)






       

   {
                     while(event.key.keysym.sym !=SDLK_r)
					{
							afficher(play,screen);
                                                        
							SDL_Flip(screen);
							SDL_PollEvent(&event);
                        				
                        				switch(event.type)
                       				 {
                       	


                                                      case SDL_KEYDOWN:
                       							 

                                                                                                                       

                                                                          if (event.key.keysym.sym ==SDLK_r)

                                                                                   {afficher(Backg,screen);
                                                                                     afficher(jouer,screen);
                                                                                    afficher(options,screen);
                                                                                     afficher(exit,screen);
                                                                                   afficher(logo,screen);
                                                                                      displayText1(c , screen);
                                                                                    displayText2(t , screen);
                                                                                     Mix_PlayChannel(-1,son,0);
                                                                                     SDL_Flip(screen);
                                                                                     }
                                                                     
                                                         break;
                                                 
                                                   }
                                               


                                        }
                
                  }






               if(event.motion.x>=754 && event.motion.x<=762+406 && event.motion.y>=635 && event.motion.y<=635+78)
                              {
                                   //afficher(optionss,screen);
                                   
                                   Mix_PlayChannel(-1,son,0);
                                   SDL_Flip(screen);
                                
                              }



                       while(event.key.keysym.sym !=SDLK_r)
			    {
							afficher(optionss,screen);
                                                        afficher(b1,screen);
                                                        afficher(b2,screen);
							SDL_Flip(screen);
							SDL_PollEvent(&event);
                        				
                        				switch(event.type)
                       				 {
                       					case SDL_KEYDOWN:
                       							


                                               // barre 1

                                                                                 if (event.key.keysym.sym ==SDLK_n)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                  
                                                                                       if(b1.pos1.x<800)
                                                                                     b1.pos1.x=b1.pos1.x+200  ; 
                                                                                    
                                                                              Mix_VolumeMusic(MIX_MAX_VOLUME);
    
                                                                                  }

                                                                                if (event.key.keysym.sym ==SDLK_b)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                 
                                                                                      Mix_VolumeMusic(MIX_MAX_VOLUME/8);
                                                                                       if(b1.pos1.x>0)
                                                                                       b1.pos1.x=b1.pos1.x-200  ;  }



                                               // barre 2


                                                                         if (event.key.keysym.sym ==SDLK_m)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                  
                                                                                       if(b2.pos1.x<800)
                                                                                     b2.pos1.x=b2.pos1.x+200  ; 
                                                                                    
                                                                              Mix_VolumeMusic(MIX_MAX_VOLUME);
    
                                                                                  }

                                                                                if (event.key.keysym.sym ==SDLK_l)
                                                                               {  Mix_PlayChannel(-1,son,0);
                                                                                 
                                                                                      Mix_VolumeMusic(MIX_MAX_VOLUME/8);
                                                                                       if(b2.pos1.x>0)
                                                                                       b2.pos1.x=b2.pos1.x-200  ;  }



                                                                                 if (event.key.keysym.sym ==SDLK_r)




                                                                    
                                                                                   {afficher(Backg,screen);
                                                                                     afficher(jouer,screen);
                                                                                    afficher(options,screen);
                                                                                     afficher(exit,screen);
                                                                                   afficher(logo,screen);
                                                                                      displayText1(c , screen);
                                                                                    displayText2(t , screen);
                                                                                     Mix_PlayChannel(-1,son,0);
                                                                                     SDL_Flip(screen);
                                                                                   }

                                                                             
                                                        break; 
                                                  }
                                             
                      

                           } 


          
      
 










        break;























          case SDL_QUIT:
             done = 1;
    //         break;
  //default:
                         //continue; 
         SDL_Flip(screen);
        }
   
        SDL_Flip(screen);



 }







    liberer(b2);
    liberer(play);
    liberer(optionss);
    liberer(Backg);
    liberer(barre);
    liberer(barre3);
    liberer(barre2);
    liberer(jouer);
    liberer(exit);
    liberer(options);
    liberer(logo);
    freeText(t);
    Mix_FreeMusic(music);
    Mix_FreeChunk(son);
    TTF_CloseFont(t.font);
    TTF_Quit();
    return 0;
}

