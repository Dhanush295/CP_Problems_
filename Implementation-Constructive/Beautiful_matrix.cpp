#include<iostream>
#include<vector>

using namespace std;


int main(){

	int row =5;
	int column =5;
    int value = 0;
	vector<vector<int>> matrix(row, vector<int>(column));

	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			cin>>matrix[i][j];
		}
	}

    // find the value 1
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			if(matrix[i][j] == 1){
                value = abs(i- 2) + abs(j- 2);
                break;
            }
		}
        if (value != 0) break;
	}

    cout<<value;



	return 0;
}