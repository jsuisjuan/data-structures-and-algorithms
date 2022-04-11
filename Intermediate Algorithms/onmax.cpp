/*
    Algoritimo Genético: Problema OneMax
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int tam_genes = 10;
int tam_pop = 50;
int tam_torneio = 20;
int geracoes = 100;
double prob_mut = 0.2;
double prob_cruz = 0.7;

vector< vector<int> > populacao;

void inicializaPopulacao() {
    for (int i = 0; i < tam_pop; i++) {
        vector<int> individuo;
        for (int j = 0; j < tam_genes; j++) {
            int num = rand() % 2;
            individuo.push_back(num);
        }
        populacao.push_back(individuo);
    }
}

void mostrarPopulacao() {
    for (int i = 0; i < tam_pop; i++) {
        for (int j = 0; j < tam_genes; j++)
            cout << populacao[i][j] << " ";
        cout << endl;
    }
}

int obterPontuacao(vector<int> individuo) {
    int soma = 0;
    for (int i = 0; i < tam_genes; i++)
        soma += individuo[i];
    return soma;
}

void mutacao(vector<int>& individuo) {
    // [0, tam_genes - 1]
    int genes = rand() % tam_genes;

    if (individuo[genes] == 0)
        individuo[genes] = 1;
    else
        individuo[genes] = 0;
}

void cruzamento(int indice_pai1, int indice_pai2, vector<int>& filho) {
    int ponto = rand() % tam_genes;

    for (int i = 0; i <= ponto; i++)
        filho.push_back(populacao[indice_pai1][i]);
    for (int i = ponto + 1; i < tam_genes; i++)
        filho.push_back(populacao[indice_pai2][i]);
}

int obterMelhor() {
    int indice_melhor = 0;
    int score_melhor = obterPontuacao(populacao[0]);

    for (int i = 1; i < tam_pop; i++) {
        int score = obterPontuacao(populacao[i]);
        if (score > score_melhor) {
            indice_melhor = i;
            score_melhor = score;
        }
    }

    return indice_melhor;
}

int main() {
    srand(time(NULL));
    inicializaPopulacao();

    for (int i = 0; i < geracoes; i++) {
        for (int j = 0; j < tam_torneio; j++) {
            double prob = ((double) rand() / ((double)RAND_MAX + 1));
            if (prob < prob_cruz) {
                int indice_pai1 = rand() % tam_pop;
                int indice_pai2;

                do {
                    indice_pai2 = rand() % tam_pop;
                } while (indice_pai1 == indice_pai2);

                vector<int> filho;
                cruzamento(indice_pai1, indice_pai2, filho);

                prob = ((double) rand() / ((double)RAND_MAX + 1));
                if (prob < prob_mut)
                    mutacao(filho);
                
                int score_pai = obterPontuacao(populacao[indice_pai1]);
                int score_filho = obterPontuacao(filho);

                if (score_filho > score_pai) {
                    for (int k = 0; k < tam_genes; k++)
                        populacao[indice_pai1][k] = filho[k];
                }
            }
        }

        cout << "Geracao " << i + 1 << endl;
        cout << "Melhor: ";

        int indice_melhor = obterMelhor();
        int score_melhor = obterPontuacao(populacao[indice_melhor]);

        for (int j = 0; j < tam_genes; j++)
            cout << populacao[indice_melhor][j] << " ";

        cout << "\nPontuacao: " << score_melhor << "\n\n";

        if (score_melhor == tam_genes)
            break;
    }
    
    return 0;
}