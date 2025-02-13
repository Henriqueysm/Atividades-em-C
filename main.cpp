#include <stdio.h>

#define CADASTRO 50 // Definindo o n�mero de cadastros

int main() {
    char nomeProduto[CADASTRO][50]; // Array para armazenar nomes dos produtos
    int quantidadeEstoque[CADASTRO]; // Array para armazenar quantidades em estoque

    // Coletando os dados de 50 produtos

for (int i = 0; i < CADASTRO; i++) {
        printf("Produto %d\n", i + 1);
        
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", nomeProduto[i]); // L� uma linha inteira, incluindo espa�os
        
        printf("Digite a quantidade em estoque: ");
        scanf("%d", &quantidadeEstoque[i]);
        
        printf("\n");
    }

    // Exibindo os dados cadastrados
    printf("\nCadastro de produtos:\n");
    for (int i = 0; i < CADASTRO; i++) {
        printf("Produto: %s | Quantidade em estoque: %d\n", nomeProduto[i], quantidadeEstoque[i]);
    }

    return 0;
}


 


