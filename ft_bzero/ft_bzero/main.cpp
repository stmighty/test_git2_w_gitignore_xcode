#include <stdio.h>
#include <iostream>
#include <stdio.h>

void *ft_bzero(void *s, size_t n)
{
    if(n>0)
    {
        *(char *)s='\0';
    }
    return (0);
}


int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    bzero(str+3, 3*sizeof(char));
    printf("After bzero():  %s\n", str);
    
    char x[50] = "GeeksForGeeks is for programming geeks.";
    ft_bzero(x+3, 3*sizeof(char));
    printf("After bzero():  %s\n", x);
    return (0);
}
