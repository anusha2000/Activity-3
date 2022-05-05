
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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