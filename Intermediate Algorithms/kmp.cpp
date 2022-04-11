/*
    KMP: Knuth Morris Pratt
    Este programa foi forkado para fins de estudo
*/

#include <iostream>
#include <vector>
using namespace std;

void kmp(string texto, string padrao, vector<int> aux) {
	int idx_texto = 0, idx_padrao = 0;

	while((unsigned)idx_texto < texto.size()) {
		if(padrao[idx_padrao] == texto[idx_texto]) {
			idx_padrao++;
			idx_texto++;
		}

		if((unsigned)idx_padrao == padrao.size()) {
			cout << "Padrao encontrado na posicao: " << (idx_texto - idx_padrao) << endl;
			idx_padrao = aux[idx_padrao - 1];
		}

		if((unsigned)idx_texto < texto.size() &&
				padrao[idx_padrao] != texto[idx_texto]) {
			if(idx_padrao)
				idx_padrao = aux[idx_padrao - 1];
			else
				idx_texto++;
		}
	}
}

void prefix(string padrao, vector<int> & aux) {
	aux[0] = 0;
	int j = 0, i = 1;

	while((unsigned)i < padrao.size()) {
		if(padrao[i] == padrao[j]) {
			j++;
			aux[i] = j;
			i++;
		}
		else {
			if(j)
				j = aux[j - 1];
			else {
				aux[i] = 0;
				i++;
			}
		}
	}
}

int main() {
	string texto = "C++ eh mais do que legal, muito legal";
	string padrao = "legal";

	vector<int> aux(padrao.size());

	prefix(padrao, aux);
	kmp(texto, padrao, aux);

	return 0;
}