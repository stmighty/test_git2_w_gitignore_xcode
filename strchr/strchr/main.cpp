//#include<unistd.h>
#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *s, int c)
{
    /*
    int i;
    i = 0;
    while (true)
    {
        if(s[i] == c)
        {
            return (char *)s;
        }
        if(s[i]=='\0')
        {
            return NULL;
        }
        i++;
    }
    */
    
    
    while (true)
    {
        if( (*s) == c)
        {
            return ((char *)s);
        }
        if((*s) == '\0')
        {
            return NULL;
        }
        s++;
    }
     
}


int main(void)
{
    printf("%s\n",ft_strchr("hello",'l'));
    printf("%s\n", strchr("hello",'l'));
    
    printf("%s\n", ft_strchr("hello",'a'));
    printf("%s\n", strchr("hello",'a'));
    return (0);
}
