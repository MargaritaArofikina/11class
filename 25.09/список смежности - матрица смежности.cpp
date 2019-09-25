// из списка смежности в матрицу смежности
    
#include <iostream>
#include <vector>
using namespace std;

void Ssm_to_Msm (vector<vector<int>> &M, vector<vector<int>> S, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < S[i].size(); j++) {
            M[i][S[i][j] - 1] = 1;
        }
    }
}

int main() {
    int x;
    int n;
    int c;
    cin >> n;  //количество вершин
    vector<vector<int>> Ssm(n);
    for (int i = 0; i < n; i++) {
        cin >> c;    //количество вершин, инцидентных данной
        for (int j = 0; j < c; j++) {
            cin >> x;    //номер вершины, индидентной данной
            Ssm[i].push_back(x);
        }
    }
    
    cout << endl;
    
    vector<vector<int>> Msm(n, vector<int>(n));
    Ssm_to_Msm(Msm, Ssm, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << Msm[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
