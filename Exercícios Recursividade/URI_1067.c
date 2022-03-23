#include <stdio.h>
#include <math.h>

void impar(int n, int max){

    if ( n > max )
        return;

    printf("%d\n", n);
    impar(n+2, max);

}

int main(){
    
    int max;

    scanf("%d", &max);

    impar(1, max);

    return 0;
    
}