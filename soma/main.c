#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int soma = 0;
    int num;
    int i;
    int x;
    scanf("%d", &num);
        
        for(i = 0; i < num; i++){
            scanf("%d", &x);
                soma = soma + x;
        }
        printf("%d\n", soma);   
  return 0;
}
