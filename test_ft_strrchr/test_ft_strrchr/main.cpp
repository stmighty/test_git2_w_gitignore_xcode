#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    const char str[] = "https.ghfusk.fdkhxj";
    int ch = '.';
    char *ret;
    ret = (char *)memchr(str,ch,strlen(str));
    cout<<ret<<endl;
    //cout<<*ret<<endl;
    
    return (0);
}
