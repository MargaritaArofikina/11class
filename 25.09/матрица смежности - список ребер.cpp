//из матрицы смежности в список ребер

#include <iostream>
using namespace std;


void Msm_to_Sreb(int** S, int** M, int n) {
        int p = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i < j) && M[i][j] == 1) {
                    S[p][0] = i + 1;
                    S[p][1] = j + 1;
                    p++;
                }
            }
        }
}


int main() {
    int n, k;  //количество вершин и ребер
    cin >> n >> k;
    int** Msm = new int*[n];
    
    for (int i = 0; i < n; i++) {
         Msm[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> Msm[i][j];
        }
    }
    
    int** Sreb = new int*[k];
    for (int i = 0; i < k; i++) {
        Sreb[i] = new int[2];
        for (int j = 0; j < 2; j++) {
            Sreb[i][j] = 0;
        }
    }
    
    Msm_to_Sreb(Sreb, Msm, n);
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Sreb[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
