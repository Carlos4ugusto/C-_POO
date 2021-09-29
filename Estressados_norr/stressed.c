#include <stdio.h>
#include <stdbool.h>

bool existe(int vet[], int y){
    
    for( int i=0; i < sizeof(vet); i++)
        if( vet[i] == y )
            return("true");
    return("false");
    
}

int main(){

    int x;
    int result;
    int vet[7] = {-1, -50, -99, 80, 70, 90, -4};

    scanf("%d", &x);
    result = existe(vet,x);
    printf("%d",result);

    return (0);
}

