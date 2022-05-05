#include "main.c"
int sum_of_character(char *str)
{
    int sum=0;
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        sum=sum+str[i];
    }
    return sum;
}