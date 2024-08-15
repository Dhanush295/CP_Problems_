#include<iostream>
#include<vector>

using namespace std;


int main(){

	int n;
	cin>>n;
	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}

	for(int i=0; i<n; i++){
		if(v[i] == 1){
			cout<<"HARD";
			return 0;
		}
	}
	cout<<"EASY";
	return 0;
}