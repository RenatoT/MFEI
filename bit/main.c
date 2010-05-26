#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c;
    int d;
    int k = 1;
    int ci;
    int num = 1;
    int soma = 0;
    while(num =! 0){
        c = 0;
        d = 0;
        ci = 0;        
        scanf("%d", &num);
        
        if(num != 0){
                soma = num;
                while(num >= 50){
                    num = num % 50;
                    soma = soma / 50;
                    c = soma;
                }
                soma =num;
                while(num >=10){
                    num = num % 10;
                    soma = soma / 10;
                    d = soma;    
                }
                soma = num;
                while(num >= 5){
                    num = num % 5;
                    soma = soma / 5;
                    ci = soma;
                }
        
            
            printf("Teste %d\n", k);
            printf("%d %d %d %d\n", c, d, ci, num);
            k++;      
        }else{
            return 0;
        }
    }    
            return 0;
} 
