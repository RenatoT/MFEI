#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num = 1;
    int k = 1;
    int j;
    int z;
    int i;
    int soma;
    int vetor[100];
    while(num =! 0){   
        scanf("%d", &num);
        
        if(num != 0){
            for(i = 0; i < num;  i++){
                scanf("%d", &j);
                scanf("%d", &z);
                if(i == 0){
                printf("Teste %d\n", k);
                    if(j > z){
                        soma = z -j;
                        printf("%d\n", soma);
                    }else{
                        soma = j - z;
                        printf("%d\n", soma);
                    }
                }else{
                    if(j > z){
                        soma = j + soma - z;
                        printf("%d\n", soma);
                    }else{
                        soma = j + soma - z;
                        printf("%d\n", soma);
                    }
                }
            }      
            k++;
        }else{
            return 0;
        }      
        
    }    
            return 0;
} 
