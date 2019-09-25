//из списка ребер в список смежности

#include <iostream>
#include <vector>
using namespace std;


void Sreb_to_Ssm(vector<vector<int>> &Ssm, vector<vector<int>> Sreb, int k) {
    for (int i = 0; i < k; i++) {
            int p = 0;
            Ssm[Sreb[i][p] - 1].push_back(Sreb[i][p + 1]);
            Ssm[Sreb[i][p + 1] - 1].push_back(Sreb[i][p]);
        }
}


int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<vector<int>> Sreb(k, vector<int>(2));
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> Sreb[i][j];
            }
    }
    
    vector<vector<int>> Ssm(n);
    
    Sreb_to_Ssm(Ssm,Sreb,k);
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < Ssm[i].size(); j++) {
            cout << Ssm[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
