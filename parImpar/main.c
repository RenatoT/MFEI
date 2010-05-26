#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int num;
    int i;
    int k = 1;
    int par;
    int impar;
    char nome1[10];
    char nome2[10];
    int vetor[1000];
    
    do{
        scanf("%d", &num);
        if(num != 0){
            scanf("%s", nome1);
            scanf("%s", nome2);

            for(i = 0; i < num && num != 0; i++){
                scanf("%d", &par);
                if(par <=5 && par >= 0){
                    scanf("%d", &impar);
                    if(impar <= 0 && impar >= 5){
                        if((par + impar) % 2 == 0){
                            vetor[i] = 0;
                        }else{
                            vetor[i] = 1;
                        }
                    }else{
                        return 0;
                    }
                }else{
                    return 0;
                }
            }
            printf("Teste %d\n", k);
            for(i = 0; i < num; i++){
                if(vetor[i] == 0){
                    printf("%s\n", nome1);
                }else{
                    printf("%s\n", nome2);
                }
            }
                k++;
         }
            }while(num != 0);
        return 0;
} 
