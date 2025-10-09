#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

char *sen(char *str)
{
        int i = 0 ;
        int  a = 0 ;
        while (str[i] != '\0') 
        {
          if (str[i] == ' ')
          {
            str[i] = '\n';
          }
          i++;
        }
        return str;
}
int main() 
{
    char s[1000];
    scanf("%[^\n]",s);
    sen(s);
    printf("%s",s);
}