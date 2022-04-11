#include <stdio.h>
#define N 20

void getOrdenacao(int [], int, int);
void intercala(int [], int, int, int);
int  getVerificacao(int [], int, int, int);
void getListar(int [], int);

int main(){
    int i, escolha, num, verificacao, vetor_salvo[N];
    int vetor[N] = {15,29,68,75,9,23,32,98,70,14,42,5,73,13,18,50,64,19,30,25};

    for (i = 0; i < N; i++)
        vetor_salvo[i] = vetor[i];

    do {
        printf("\n\t\tBem-vindo a Questao 1\n\n");
        printf("0. Sair\n1. Ordenacao\n2. Verficacao\n3. Listar\n");
        scanf("%d" ,&escolha);

        switch(escolha){
            case 0:
                printf("Obrigado!\n");
                return 0;
            case 1:
                printf("Ordenacao\n\n");
                getOrdenacao(vetor, 0, N-1);
                for(i=0; i<N; i++) 
                    printf("%d " ,vetor[i]);
                printf("\n");
                break;
            case 2:
                printf("Verficacao\n");
                printf("Insira um elemento a ser buscado: ");
                getOrdenacao(vetor, 0, N-1);
                scanf("%d" ,&num);
                verificacao = getVerificacao(vetor, num, 0, N);
                if (verificacao == -1)
                    printf("O elemento nao foi encontrado! Por favor, insira outro elemento!\n");
                else
                    printf("O elemento foi encontrado na posicao: %d!\n" ,verificacao);
                printf("\n");
                break;
            case 3:
                printf("Listar\n\n");
                getListar(vetor_salvo, N);
                printf("\n");
                break;
        }
    }
    while(escolha != 0);
    return 0;
}

void getOrdenacao(int A[], int inicio, int fim){
    int meio;
    if (inicio < fim) {
        meio = (inicio+fim) / 2;
        getOrdenacao(A, inicio, meio);
        getOrdenacao(A, meio+1, fim);
        intercala(A, inicio, fim, meio);
    }
}

void intercala(int A[], int inicio, int fim, int meio){
    int i, aux[N];
    int posLivre = inicio;
    int inicioA1 = inicio;
    int inicioA2 = meio + 1;

    while (inicioA1 <= meio && inicioA2 <= fim)
    {
        if (A[inicioA1] > A[inicioA2]) {
            aux[posLivre] = A[inicioA2];
            inicioA2++;
        } else {
            aux[posLivre] = A[inicioA1];
            inicioA1++;
        }
        posLivre++;
    }

    for (i = inicioA1; i <= meio; i++) {
        aux[posLivre] = A[i];
        posLivre++;
    }
    for (i = inicioA2; i <= fim; i++) {
        aux[posLivre] = A[i];
        posLivre++;
    }
    for (i = inicio; i <= fim; i++)
        A[i] = aux[i];
}

int getVerificacao(int A[], int x, int inicio, int fim){
    if (fim >= inicio){
      int meio = inicio + (fim - inicio )/2;
      if (A[meio] == x)
         return meio;
      if (A[meio] > x)
         return getVerificacao(A, x, inicio, meio-1);
      return getVerificacao(A, x, meio+1, fim);
   }
   return -1;
}

void getListar(int A[], int qt){
    for (int i = 0; i < qt; i++)
        printf("%d " ,A[i]);
}