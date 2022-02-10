/**
 * @file xo.c
 * @author chaitanyakiran20
 * @brief Create a 2 Dimensional XsOx Game
 * 
 * @return int 
 */

#include "xo.h"
char x,o;
char array[9]={'1','2','3','4','5','6','7','8','9'};
char char1[50],char2[50];

void matrix();
void info_display();
int Winner_verify();
int decide();

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

int Winner_verify()
{
    if(array[0]==array[1] && array[1]==array[2])
        return 1;
    else if(array[3]==array[4] && array[4]==array[5])
        return 1;
    else if(array[6]==array[7] && array[7]==array[8])
        return 1;
    else if(array[0]==array[3] && array[3]==array[6])
        return 1;
    else if(array[1]==array[4] && array[4]==array[7])
        return 1;
    else if(array[2]==array[5] && array[5]==array[8])
        return 1;
    else if(array[0]==array[4] && array[4]==array[8])
        return 1;
    else if(array[2]==array[4] && array[4]==array[6])
        return 1;
    else if(array[0]!='1' && array[1]!='2' && array[2]!='3' && array[3]!='4' && array[4]!='5' && array[5]!='6' && array[6]!='7' && array[7]!='8' && array[8]!='9')
        return 0;
    else
        return -1;
}

void matrix()
{
    int i;
    printf("\nXsOs\n\n");
        printf("\n\n");
        printf("%s:- (%c)\n%s:-  (%c)\n\n\n",char1,x,char2,o);
        printf("  %c |  %c | %c\n",array[0],array[1],array[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",array[3],array[4],array[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",array[6],array[7],array[8]);
        printf("    |    |    \n");
    }

void info_display()
{
    char link;
    printf("Xs0s\n");
    printf("Welcome to the World of 2Dimensional Games, Introducing X and O\n\n");
    printf("info_display:-\n");
    printf("\n1:Each player will be Allowed to place their own Character, either X or O in the desired position");
    printf("\n2:Player who gets a combination of 3 same characters of his own either diagonal or horizontally or \n  vertically will be declared as the winner");
    printf("\n\nEnjoy the Game!\n");
}

int decide()
{
    char dec;
        deci:
        printf("\n\nPlayer1 %s choose the X or 0:",char1);
        dec=getchar();
        scanf("%c",&dec);
        {
            if(dec=='X' || dec=='x')
            {
                x='X';
                o='0';
            }
            else if(dec=='0')
            {
                x='0';
                o='X';
            }
            else
            {
                printf("Please enter either X or 0 only \n\n");
                goto deci;
            }
        }
}