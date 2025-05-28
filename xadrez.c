 #include <stdio.h>
 
 int main() {
         
    // Mover o torre cinco casas para direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); //Imprime a direção do movimento
    }

    int i = 1; //Mover o bispo cinco casas para esquerda

    while (i <= 5) {
        printf("Esquerda\n"); i++; //Imprime a direção do movimento
    }
    
    
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