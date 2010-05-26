#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int soma;
    int num;
    scanf("%d", &num);
    if(num <= 10000){
        soma = num * num;
    
        printf("%d\n", soma);
    }
  return 0;
}
