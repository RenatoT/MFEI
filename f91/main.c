#include <stdio.h>
#include <stdlib.h>


int F91(int num){
    if(num <= 100){
        num = F91(F91(num + 11));                         
    }else{
        num = num - 10;    
    }
    return num;
}

int main(int argc, char *argv[])
{
    int i;
    int num;
    int v[250000];
    
    for(i = 0; i <= 250000; i++){
        printf("");
        scanf("%d", &v[i]);
        
        if(v[i] == 0){
            int m;
            
            for(m = 0; m < i; m++){
                num = F91(v[m]);
                
                printf("f91(%d) = %d\n",v[m], num);
            }   
        }
    }
  return 0;
}


