/*
#include <stdio.h>

int main() {
  int nota;

  printf("Digite a sua nota: \n");
  scanf("%d", &nota);

  if (nota >= 90) {
    printf("Sua nota é A\n");
  } else if (nota >= 80) {
    printf("Sua nota é B\n");
  } else if (nota >= 70) {
    printf("Sua nota é C\n");
  } else if (nota >= 60) {
    printf("Sua nota é D\n");
  } else {
    printf("Sua nota é F\n");
  }

  return 0;

}
*/

/*
#include <stdio.h>

int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}

*/

/*
#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }

  return 0;
}

*/

/*
#include <stdio.h>

int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}
*/

/*
int main() {
    int numero;
 
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    if (numero == 1) {
      printf("Fulano 1\n");
    } else if (numero == 2) {
      printf("Fulano 2\n");
    } else if (numero == 3) {
      printf("Fulano 3\n");
    } else if (numero == 4) {
      printf("Fulano 4\n");
    } else if (numero == 5) {
      printf("Fulano 5\n");
    } else if (numero == 6) {
      printf("Fulano 6\n");
    } else if (numero == 7) {
      printf("Fulano 7\n");
    } else {
      printf("Número inválido\n");
    }
  
    return 0;
  }

  */

  /*
  #include <stdio.h>

  int main() {
    
    char variavel;
    
    printf("Didite uma valor ");
    scanf("%C", &variavel);

    switch (variavel) {
    case 'A':
      printf("Código a ser executado se variavel == A\n");
      break;
    case 'B':
      printf("Código a ser executado se variavel == B\n");
      break;
    // Você pode adicionar quantos casos forem necessários
    default:
      printf("Código a ser executado se nenhum dos casos acima for verdadeiro\n");
  
    }
}

*/

/*
#include <stdio.h>

int main() {
  int dia;

  printf("Digite um dia de 1 a 7: ");
  scanf("%d", &dia);

  switch (dia) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Dia inválido\n");
  }

  return 0;
}

*/

/*
#include <stdio.h>

int main() {
  int opcao;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Iniciando o jogo...\n");
      // Código para iniciar o jogo
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Regra 1\n");
      printf("2. Regra 2\n");
      printf("3. Regra 3\n");
      // Código para exibir as regras
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}

*/
 /*
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão
#include <time.h> // Inclui a biblioteca de tempo

int main() { // Função principal
  int opcao, regras; // Declara a variável opcao e regras
  int numeroSecreto, palpite; // Declara as variáveis numeroSecreto e palpite

  printf("Menu Principal\n"); // Exibe o menu principal
  printf("1. Iniciar Jogo\n"); // Exibe a opção 1
  printf("2. Ver Regras\n"); // Exibe a opção 2
  printf("3. Sair\n"); // Exibe a opção 3
  printf("Escolha uma opção: \n"); // Solicita ao usuário que escolha uma opção
  scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

  switch (opcao) { // Verifica a opção escolhida pelo usuário
    case 1: // Se a opção escolhida for 1
      srand(time(0)); // Inicializa o gerador de números aleatórios
      numeroSecreto = rand() % 10; // Gera um número aleatório entre 1 e 10
      printf("Adivinhe o número (entre 1 e 9): \n"); 
      scanf("%d", &palpite); // Lê o palpite do usuário

      if (palpite == numeroSecreto) { // Verifica se o palpite é igual ao número secreto
        printf("Parabéns! Você acertou!\n"); // Exibe a mensagem de acerto
      } else { // Se o palpite for diferente do número secreto
        printf("Você errou. O número era %d.\n", numeroSecreto); // Exibe a mensagem de erro
      }
      break; // Sai do switch
    case 2: // Se a opção escolhida for 2
      printf("Regras do Jogo:\n"); // Exibe as regras do jogo
      printf("1. Escolha uma opção no menu.\n"); // Exibe a regra 1
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n"); // Exibe a regra 2
      printf("3. O jogo termina quando você escolhe 'Sair'.\n"); // Exibe a regra 3
    case 3: // Se a opção escolhida for 3
      printf("Saindo...\n"); // Exibe a mensagem de saída
      break; // Sai do switch
    default: // Se a opção escolhida não for 1, 2 ou 3
      printf("Opção inválida. Tente novamente.\n"); // Exibe a mensagem de opção inválida
  } // Fim do switch

  return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

*/
/*

// Regra 1: Pedra > Tesoura, Tesoura > Papel, Papel > Pedra => VITÓRIA
// Regra 2: Pedra = Pedra, Tesoura = Tesoura, Papel = Papel => EMPATE

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão
#include <time.h> // Inclui a biblioteca de tempo

int main() {

  int escolhaJogador, escolhaComputador; // Declara as variáveis escolhaJogador e escolhaComputador
  srand(time(0)); // Inicializa o gerador de números aleatórios
  escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3 para a escolha do computador

  printf("Jogo Pedra, Papel e Tesoura\n"); // Exibe o título do jogo
  printf("Escolha uma opção:\n"); // Exibe as opções disponíveis
  printf("1. Pedra\n"); // Exibe a opção 1
  printf("2. Papel\n"); // Exibe a opção 2
  printf("3. Tesoura\n"); // Exibe a opção 3
  printf("Digite a sua escolha: "); // Solicita ao jogador que escolha uma opção
  scanf("%d", &escolhaJogador); // Lê a escolha do jogador

  switch (escolhaJogador) { // Verifica a escolha do jogador
    case 1: // Se o jogador escolher Pedra
      printf("Você escolheu Pedra.\n"); // Exibe a escolha do jogador
      printf("\n"); // Pula uma linha
      break; // Sai do switch
    case 2: // Se o jogador escolher Papel
      printf("Você escolheu Papel.\n"); // Exibe a escolha do jogador
      printf("\n"); // Pula uma linha
      break; // Sai do switch
    case 3: // Se o jogador escolher Tesoura
      printf("Você escolheu Tesoura.\n"); // Exibe a escolha do jogador
      printf("\n"); // Pula uma linha
      break; // Sai do switch
    default: // Se o jogador escolher uma opção inválida
      printf("Opção inválida. Tente novamente.\n"); // Exibe a mensagem de opção inválida
      printf("\n"); // Pula uma linha
      return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
      printf("\n"); // Pula uma linha
  } // Fim do switch

  switch (escolhaComputador) { // Verifica a escolha do computador
    case 1: // Se o computador escolher Pedra
      printf("O computador escolheu Pedra.\n"); // Exibe a escolha do computador
      printf("\n"); // Pula uma linha
      break; // Sai do switch
    case 2: // Se o computador escolher Papel
      printf("O computador escolheu Papel.\n"); // Exibe a escolha do computador
      printf("\n"); // Pula uma linha
      break; // Sai do switch
    case 3: // Se o computador escolher Tesoura
      printf("O computador escolheu Tesoura.\n"); // Exibe a escolha do computador
      printf("\n"); // Pula uma linha
      break; // Sai do switch
      printf("\n"); // Pula uma linha
  } // Fim do switch

  if (escolhaJogador == escolhaComputador) { // Se a escolha do jogador for igual à escolha do computador
    printf("### Jogo Empatou! ###\n"); // Exibe a mensagem de empate
    printf("\n"); // Pula uma linha
  } else if ((escolhaJogador == 1 && escolhaComputador == 3) || (escolhaJogador == 2 && escolhaComputador == 1) || (escolhaJogador == 3 && escolhaComputador == 2)) { // Se o jogador vencer
    printf("### Você venceu! ###\n"); // Exibe a mensagem de vitória
    printf("\n"); // Pula uma linha
  } else { // Se o computador vencer
    printf("### Você perdeu! ###\n"); // Exibe a mensagem de derrota
    printf("\n"); // Pula uma linha
  }

}
*/