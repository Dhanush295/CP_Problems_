#include<iostream>
#include<vector>

using namespace std;

int main(){

	string s;
	vector<string> a(5);
	cin>>s;

	char rank = s[0];
	char set = s[1];

	for(int i=0; i<5; i++){
		cin>>a[i];
	}

	for(const string card : a){
		if(card[0] == rank || card[1] == set){
			cout<<"YES";
			return 0;
		}
	}

	cout<<"NO";
	return 0;

}