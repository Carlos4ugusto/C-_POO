#include <iostream>
#include <vector>

bool existe( std::vector<int> vet ,int x ){
    for( int i =0; i < (int) vet.size(); i++ )
        if(vet[i] == x)
            return(true);
}

int main(){

    int x;
    
    std::cin >> x ;
    std::cout << existe({-1, -50, -99, 80, 70, 90, -4},x);
    
}