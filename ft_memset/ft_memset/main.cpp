#include <cmath>
#include <iostream>
#include <stdio.h>
#include <string.h>
//using namespace std;


void *ft_memset(void *b, int c, size_t len)
{
    int i = 0;
    while (sizeof(char)*i < len)
    {
        *(char *)b = c;
        b = (char *)b + 1;
        //b++;
        i++;
    }
    return (0);
}

/*
void *ft_memset2(void *s, int c, size_t n)    // mink
{
    while (*(char *)s != 0 && n > 0)
    {
        *(char *)s = c;
        s = (char*)s + 1;
        //s++;
        n--;
    }
    return (0);
}
*/


int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));
    printf("After memset():  %s\n", str);
    
    
    char x[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", x);
    ft_memset(x + 13, '.', 8*sizeof(char));
    printf("After memset():  %s\n", x);
    return (0);
}
