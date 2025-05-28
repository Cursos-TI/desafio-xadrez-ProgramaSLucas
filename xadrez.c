 int main() {
    // Mover o torre cinco casas para direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); //Imprime a direção do movimento
    }

    int i = 1; //Mover o bispo cinco casas para cima

    while (i <= 5) {
        printf("Cima\n"); i++; //Imprime a direção do movimento
    }
    
    
    int numero;  
    do {
        printf("Digite um numero par para movimentar a rainha à esquerda");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d esquerda!", numero);
        } else{
           printf("%d cima!", numero);
        }

    } while (numero % 2 != 0);
        printf("Você digitou um numero par, e moveu a rainha para esquerda");

    
    return 0;
    }