#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

    srand (time(NULL));
    int reponse , jouer , rslt;        
    int random = (rand() % 101),score = 0,max=10, compteur = 0;
        printf("si le nombre est identique , vous avez gagner le jeux\n");


    while (score < 1)
{
        random = (rand() % 101);

        
    do
{
        printf("%d ) entrer un nombre entre 0-100\n",compteur);
        scanf("%d",&reponse);
       
}   while (reponse<0 || reponse>100);
    
    

    if (random<=10){   
        rslt = 1;
        printf("le nombre est : <=10");
    }
    else if (random>10&&random<=20){
        rslt = 2;
        printf("le nombre est : <=20");
    }
    else if (random>20&&random<=30){
        rslt = 3;
        printf("le nombre est : <=30");
    }
    else if (random>30&&random<=40){
        rslt = 4;
        printf("le nombre est : <=40");
    }
    else if (random>40&&random<=50){
        rslt = 5;
        printf("le nombre est : <=50");
    }
    else if (random>50&&random<=60){
        rslt = 6;
        printf("le nombre est : <=60");
    }
    else if (random>60&&random<=70){
        rslt = 7;
        printf("le nombre est : <=70");
    }
    else if (random>70&&random<=80){
        rslt = 8;
        printf("le nombre est : <=80");
    }
    else if (random>80&&random<=90){
        rslt = 9;
        printf("le nombre est : <=90");
    }
    else if (random>90&&random<=100){
        rslt = 10;
        printf("le nombre est : <=100");
    }



    if (random == reponse){
        printf("\nINCROYABLE !!! VOUS AVEZ GAGNE !\nVous avez trouve le nombre exact, ce qui est extremement rare.\nLa probabilite de gagner a ce jeu est seulement de 1 pour cent,\nce qui signifie que tres peu de joueurs reussissent cet exploit.\nFelicitations pour votre patience !\n");

        score ++;
    }       
    else if (random != reponse){
        printf(", alors est different\n");
        printf("recommencer une autre fois\n");
    }   
        compteur ++;
}
    

    

    return 0;
}
