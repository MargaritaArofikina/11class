// из списка смежности в список ребер


#include <iostream>
#include <vector>
using namespace std;


void Ssm_to_Sreb (vector<vector<int>> &Sreb, vector<vector<int>> Ssm, int n) {
    int p = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < Ssm[i].size(); j++) {
                if ((Ssm[i][j] < i + 1)) {
                    Sreb[p][0] = Ssm[i][j];
                    Sreb[p][1] = i + 1;
                    p++;
                }
            }
        }
}


int main() {
    int n;
    int k;
    int p;
    int x;
    cin >> n >> k;    //количество вершин и ребер
    
    vector<vector<int>> Ssm(n);
    for (int i = 0; i < n; i++) {
        cin >> p;    //количество вершин, инцидентных данной
        for (int j = 0; j < p; j++) {
            cin >> x;     //номер вершины, инцидентной данной
            Ssm[i].push_back(x);
        }
    }
    
    vector<vector<int>> Sreb(k, vector<int> (2));
    
    Ssm_to_Sreb(Sreb, Ssm, n);
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Sreb[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
