#include <iostream>
#include <vector>

//funções de busca
bool existe( std::vector<int> vet ,int x ){

    for( int i = 0; i < (int) vet.size(); i++ )
        if(vet[i] == x)
            return(true);
}

int contar( std::vector<int> vet, int x ){

    int cont = 0;
    for( int i = 0; i < (int) vet.size(); i++ )
        if( x == vet[i] )
            cont++;
    return cont;
} 

int procurar_valor( std::vector<int> vet, int x){

    for( int i = 0; i < (int) vet.size(); i++ )
        if( x == vet[i])
            return i;
        else   
            return -1;
    
}

int procurar_valor_apos( std::vector<int> vet, int x, int pos_incial){

    for( int i = pos_incial; i < (int) vet.size(); i++ )
        if( x == vet[i])
            return i;
        else 
            return -1;


}

//funções de melhor caso
int procurar_menor( std::vector<int> vet ){

    int min = vet[0];

    for( int i = 0; i < (int) vet.size(); i++ )
        if(vet[i] < min)
            min = vet[i];
    return min;
}

int procurar_maior( std::vector<int> vet ){

    int max = vet[0];

    for( int i = 0; i < (int) vet.size(); i++ )
        if(vet[i] > max)
            max = vet[i];
    return max;
    
}

int procurar_menor_poss( std::vector<int> vet ){

    int poss = 0;

    for( int i = 0; i < (int) vet.size(); i++ )
        if(vet[i] < vet[poss]){
            poss = i;
        }
    return poss;
}

int procurar_menor_poss_apos( std::vector<int> vet, int apos_inicial){

    int poss = 0;

    for( int i = apos_inicial; i < (int) vet.size(); i++ )
        if(vet[i] < vet[poss]){
            poss = i;
        }
    return poss;
}

int procurar_melhor_se( std::vector<int> vet ){

    int min = vet[0];
    int cont = 0;

    for( int i = 0; i < (int) vet.size(); i++ ){
        if(cont == 0 && vet[i] > 0){
            cont = 1;
            min = vet[i];
        }
        else{
            if(vet[i] < min && vet[i] > 0){
                min = vet[i];
            }
        }
    }

            
    return min;
}

int main(){

    int x {};
    int pos_inicial = 3;
    int p = 3;
    
    // Módulo de Busca
    std::cin >> x ;
    std::cout << existe({-1, -50, -99, 80, 70, 90, -4}, x ) << "\n" ;
    std::cout << contar({-1, -50, -99, 80, 70, 90, -4}, x ) << "\n" ;
    std::cout << procurar_valor({-1, -50, -99, 80, 70, 90, -4}, x ) << "\n" ;
    std::cout << procurar_valor_apos({-1, -50, -99, 80, 70, 90, -4}, x, pos_inicial ) << "\n" ;

    // Módulo de melhor caso
    std::cout << procurar_menor( {-1, -50, -99, 80, 70, 90, -4} ) << "\n" ;
    std::cout << procurar_maior( {-1, -50, -99, 80, 70, 90, -4} ) << "\n" ;
    std::cout << procurar_menor_poss( {-1, -50, -99, 80, 70, 90, -4} ) << "\n" ;
    std::cout << procurar_menor_poss_apos( {-1, -50, -99, 80, 70, 90, -4},p ) << "\n" ;
    std::cout << procurar_melhor_se( {-1, -50, -99, 80, 70, 90, -4} ) << "\n" ;




}