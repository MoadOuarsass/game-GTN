#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

    srand (time(NULL));
    int reponse , jouer ;        
    int random = (rand() % 101),score = 0,max=10,rslt;
        printf("si le nombre est identique vous avez gagner le jeux\n");


    while (score < 1)
{
        random = (rand() % 101);
  

        
    do
{
        printf("entrer nombre entre 0-100\n");
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
        printf(", {OMG} , vous  avez gagner , le nombre identique\n");
        score ++;
        printf("votre score est : %d \n",score);
    }       
    else if (random != reponse){
        printf(", alors est different\n");
        printf("recommencer une autre fois\n");
    }   
}
    

    

    return 0;
}
