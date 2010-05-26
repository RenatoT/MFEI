#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k = 1;
    int i;
    int num = 1;
    int soma1;
    int soma2;
    int a;
    int b;
    while(num =! 0){
        soma1 = 0;
        soma2 = 0;
        scanf("%d", &num);
            for(i = 0; i < num; i++){
                scanf("%d", &a);
                scanf("%d", &b);
                soma1 = soma1 + a;
                soma2 = soma2 + b;           
            }
            if(soma1 != soma2){
                if(soma1 > soma2){
                    printf("Teste %d\n", k);
                    printf("Aldo\n");
                    printf("\n");
                    k++;    
                }else{
                    printf("Teste %d\n", k);
                    printf("Beto\n");
                    printf("\n");    
                    k++;
                }
            }else{
                return 0;
            }
    }    
            return 0;
} 
