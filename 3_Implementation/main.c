#include "xo.h"

int main()
{
    
    int player=1;
    int choice,score=-1;
    char symbol,re;
    char start,dec;
    int s;
    info_display();
    printf("\n\nType 1 to start the game:\n");
    scanf("%d",&s);
    if(s==1)
    {
    printf("\nEnter name of player1: ");
    scanf("%s",char1);
    printf("Enter name of player2: ");
    scanf("%s",char2);
    decide();
    matrix();
    do
    {
        player=((player%2)?1:2);
        if(player==1)
        printf("%s Select a position from 1-9 to fill your Character:- ",char1);
        else
            printf("%s Select a position from 1-9 to fill your Character:- ",char2);
        scanf("%d",&choice);
        symbol=((player==1)?x:o);
        if(choice==1 && array[0]=='1')
            array[0]=symbol;
        else if(choice==2 && array[1]=='2')
            array[1]=symbol;
        else if(choice==3 && array[2]=='3')
            array[2]=symbol;
        else if(choice==4 && array[3]=='4')
            array[3]=symbol;
        else if(choice==5 && array[4]=='5')
            array[4]=symbol;
        else if(choice==6 && array[5]=='6')
            array[5]=symbol;
        else if(choice==7 && array[6]=='7')
            array[6]=symbol;
        else if(choice==8 && array[7]=='8')
            array[7]=symbol;
        else if(choice==9 && array[8]=='9')
            array[8]=symbol;
        else
            {
        printf("Wrong Selection\n");player--;}
        score=Winner_verify();
        player++;
        matrix();
    }while(score == -1);

    if(score==1)
    {
        if(player==2)
        {printf("\n\nPlayer1 %s Wins!\n\n",char1);
       }
        else
            {
printf("\n\nPlayer2 %s Wins!\n\n",char2);      
            }
    }
    else
        printf("\n\nGame Draws!\n\n");
    }
    else
    {
        printf("\n\nShould have typed 1 to play the game!\nHope to see you back soon!\n\n");
    }
}