#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int len,i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    len = strlen(s);

   for ( i = 0; i < len; i++)
   {
      if (s[i]==' ')
      {
         printf("\n");
      }
      else{
         printf("%c",(s[i]));
      }
      
   }
    free(s);
    return 0;
}