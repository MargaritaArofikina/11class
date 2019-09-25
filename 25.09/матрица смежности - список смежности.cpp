
    
    // перевод из матрицы смешности в список смежности

#include <iostream>
#include <vector>
using namespace std;

void Msm_to_Ssm (vector<vector<int>> &S, vector<vector<int>> M, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] == 1) {
                S[i].push_back(j + 1);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> Msm (n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Msm[i][j];
        }
    }
    
    cout << endl;
    
    vector<vector<int>> Ssm(n);
    Msm_to_Ssm(Ssm, Msm, n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < Ssm[i].size(); j++) {
            cout << Ssm[i][j];
        }
        cout << endl;
    }
    return 0;
}
