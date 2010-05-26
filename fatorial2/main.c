#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int num;
    int n = 1;
       
    printf("");
    scanf("%d", &num);
    if(num >= 0 && num <= 12){
        for(i = 0; i < num && !feof(stdin); i++){
            n = n*(num-i);
        }
    printf("%d\n", n);
    }
  return 0;
}
