/**
 * @file sum_of_characters.c
 * @author Anusha Patil
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 **/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
int main()
{
    char *ptr;
    ptr = (char*)malloc(20*sizeof(char));
    printf("Enter the string\n");
    scanf("%[^\n]s",ptr);
    printf("%X\n",sum_of_character(ptr));
    free(ptr);
    return 0;
}