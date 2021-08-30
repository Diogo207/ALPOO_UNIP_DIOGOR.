#include stdio.h
#include stdlib.h

int main() {

    int opc;
    
    printf (Digite a opcao 1 para A ou opcao 2 para B );
    scanf(%d, &opc);
    
    switch (opc) {
        
        case 1 
            printf( A opcao escolida foi A.);
            break;
        
        case 2 
            printf(A opacao escolhida foi B.);
            break;
        
        default 
            printf(A opcao escolhida não é valida.);
            break;
    }
    
    return 0;
}
