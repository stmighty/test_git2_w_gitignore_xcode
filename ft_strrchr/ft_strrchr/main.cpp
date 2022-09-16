#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <string>

char *ft_strrchr(char *s, int c)
{
    int i;
    i = 0;
    int result;
    result = 0;
    int check = 0;
    
    while (s[i] != '\0')
    {
        if(s[i] == c)
        {
            result = i;
        }
        i++;
    }
    if (result == 0)
    {
        return NULL;
    }
    else
    {
        while(check<result)
        {
            check ++;
            s++;
        }
        return (char *)s;
    }
}

int main(void)
{
    //printf("%s\n",ft_strchr("hello",'a'));
    //printf("%s\n", strchr("hel",'a'));
    //printf("%s\n", strchr("hello",'l'));
    printf("%s\n", strrchr("hello",'l'));
    printf("%s\n", strrchr("hello",'a'));
    printf("%s\n", strrchr("hello",100));
    printf("%s\n", ft_strrchr("hello",'l'));
    printf("%s\n", ft_strrchr("hello",'a'));
    printf("%s\n", ft_strrchr("hello",100));
    return (0);
}
