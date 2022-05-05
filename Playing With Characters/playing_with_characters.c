#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    char d[100];
    char f[100];
    scanf("%[^\n]%*c", &s);
    scanf("%[^\n]%*c", &d);
    scanf("%[^\n]%*c", &f);
    printf("%s\n",&s);
    printf("%s\n",&d);
    printf("%s",&f);
}