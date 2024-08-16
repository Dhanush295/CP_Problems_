#include<iostream>
#include<vector>

using namespace std;


int main(){

	int t;
	cin>>t;

	

	while(t--){

		int n,m;
		cin>>n>>m;

		int count =0;

		vector<vector<char>> matrix(n, vector<char> (m));

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>matrix[i][j];
			}
		}

		if (n == 1 && m == 1) {
            cout << 0 << "\n";
            continue;
        }

        if (n == 1) { 
            for (int j = 0; j < m; j++) {
                if (matrix[0][j] == 'D') {
                    count++;
                }
            }
        } else {
            for (int j = 0; j < m; j++) {
                if (matrix[n-1][j] == 'D') {
                    count++;
                }
            }
        }

        if (m == 1) { 
            for (int i = 0; i < n; i++) {
                if (matrix[i][0] == 'R') {
                    count++;
                }
            }
        } else { 
            for (int i = 0; i < n; i++) {
                if (matrix[i][m-1] == 'R') {
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}