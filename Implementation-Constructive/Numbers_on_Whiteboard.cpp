#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		vector<int> board(n);

		for(int i=0; i<n; i++){
			board[i] = i+1;
		}

		
		vector<pair<int, int>> values;

		while(board.size()>1){
			int last_digit = board.back();
			board.pop_back();

			int second_last = board.back();
			board.pop_back();

			int sum = last_digit + second_last;
			values.push_back({last_digit, second_last});

			if(sum % 2 != 0) {
				board.push_back((sum / 2) + 1); 
			} else {
				board.push_back(sum / 2); 
			}
		}

		cout<<board.back()<<"\n";

		for(auto v: values){
			cout<<v.first<<" "<<v.second<<"\n";
		}


	}
	return 0;
}