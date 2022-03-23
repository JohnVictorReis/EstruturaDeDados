#include <stdio.h>
#include <math.h>

void imprime(int n){

    if ( n > 100)
        return ;
    
    printf("%d\n", n);
    imprime(n+2);
  
}




int main(){
    imprime(2);
    
    return 0;
}