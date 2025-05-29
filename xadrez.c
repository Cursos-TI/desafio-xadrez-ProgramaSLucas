 #include <stdio.h>
 
    void moverTorre(int casas) {
        if (casas > 0) {
            printf("Direita\n"); //imprime "Direita" uma vez
            moverTorre(casas - 1);
        
        }
    }
    void moverBispo(int casas) {
        if (casas > 0) {
            printf("Diagonal\n"); //imprime "Diagonal" uma vez
            moverBispo(casas - 1);
        }
    }

    void moverRainha(int casas) {
        if (casas > 0) {
            printf("Esquerda\n"); //imprime "Esquerda" uma vez
            moverRainha(casas - 1);
        }
    }

    void moverCavalo(int casas) {
        if (casas > 0) {
            printf("Cima e Direita\n"); //imprime "Cima e Direita" uma vez
            moverCavalo(casas - 1);
        }
    }
    int main() {
        moverTorre(5);
        moverBispo(5);
        moverRainha(8);
        moverCavalo(1);
    
    
    int numero;
    do {
        printf("Digite um numero par para movimentar a rainha para frente");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d Frente!", numero);
        } else{
           printf("%d baixo!", numero);
        }

    } while (numero % 2 != 0);
        printf("Você digitou um numero par, e moveu a rainha para frente\n");
         
        int movimentoCompleto = 1; //Flag para controlar o movimento em 'L'

    while (movimentoCompleto--)
      {
        for (int i = 0; i < 2; i++) {
         printf("Cima\n"); //Imprime "Cima" duas vezes
        }
        printf("Direita\n"); //Imprime "Direita" uma vez
    } 


    return 0;

    
    }