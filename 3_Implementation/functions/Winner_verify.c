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

int Winner_verify(int array)
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