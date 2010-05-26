#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int num;
    int k =1;
   
   while(!feof(stdin)){
   int m = 0;
   int n = 1;
    printf("digite o fatorial: ");
    scanf("%d", &num);
        for(i = 0; i < num && !feof(stdin); i++){
            n = n*(num-i);
        }
        if(n < 1000){
            m = n;
        }else{
            while(m == 0){
                m = n % 10;
                n = n / 10;
            }
        
        }
        if(1000 < n < 1000000){
            m = n;
        }else{
            while(m == 0){
                m = n % 100;
                n = n / 100;
            }
        
        }
        if( n >= 1000000){
            m = n;
        }else{
            while(m == 0){
                m = n % 1000;
                n = n / 1000;
            }
        
        }
        if(!feof(stdin)){
            printf("Instancia %d\n", k);
            printf("%d\n", m);
            k++;
       }
    }
  return 0;
}
