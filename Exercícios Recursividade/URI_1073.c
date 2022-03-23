#include <stdio.h>
#include <math.h>

void quadrado(int n ,int v){

    if ( v > n )
        return;
    
    printf("%d^2 = %d\n", v, v*v);
    quadrado(n, v+2);

}

int main(){

    int v = 0;
    int n;

    scanf("%d", &n);

    quadrado (n, v+2);

    return 0;
}
