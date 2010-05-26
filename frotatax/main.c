#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double a;
    double g;
    double ra;
    double rg;
    double soma1;
    double soma2;
        
    scanf("%lf", &a);
    scanf("%lf", &g);
    scanf("%lf", &ra);
    scanf("%lf", &rg);
    
    soma1 = a / ra;
    soma2 = g / rg;
    
        if(soma1 >= soma2){
            printf("G\n");
            printf("\n");    
        }else{
            printf("A\n");
            printf("\n");    
        }
            
     return 0;
} 
