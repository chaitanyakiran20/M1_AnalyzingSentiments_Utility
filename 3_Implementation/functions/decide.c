/**
 * @author Chaitanya Kiran Anagani
 * @brief 
 * @version 1
 * @date 2022-02-09
 * 
 * 
 */
#include <stdio.h>
#include <string.h>

int decide()
{
char dec;
        deci:
        printf("\n\nPlayer-1 %s choose the X or 0:",char1);
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