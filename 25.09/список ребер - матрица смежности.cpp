// из списка ребер в матрицу смежности

#include <iostream>
using namespace std;


void Sreb_to_Msm(int** M, int** S, int k) {
	for (int i = 0; i < k; i++) {
		int j = 0;
			M[S[i][j]-1][S[i][j + 1]-1] = M[S[i][j + 1]-1][S[i][j]-1] = 1;
	}
}


int main() {
	int n, k;
	cin >> n >> k;   // количество вершин и ребер
	int** Sreb = new int*[k];
	for (int i = 0; i < k; i++) {
		Sreb[i] = new int[2];
			for (int j = 0; j < 2; j++) {
				cin >> Sreb[i][j];
		}
	}
	
	int** Msm = new int*[n];
	for (int i = 0; i < n; i++) {
		Msm[i] = new int[n];
		for (int j = 0; j < n; j++) {
			Msm[i][j] = 0;
		}
	}
	
	cout << endl;
	
	Sreb_to_Msm(Msm, Sreb, k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << Msm[i][j] << " ";

		}
		cout << endl;
	}
	return 0;
}
