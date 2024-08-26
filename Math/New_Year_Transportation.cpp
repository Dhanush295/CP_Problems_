#include<iostream>
#include<vector>

using namespace std;

int main(){

	long long n, t;
	cin>>n>>t;

	vector<int> a(n);
	

	for(int i=1; i<n; i++){
		cin>>a[i];
	}

	int pos = 1;
	int next_cell;

	while(pos < t){
		next_cell = pos + a[pos];
		pos = next_cell;
	}

	if(pos == t) cout<<"YES";
	else cout<<"NO";

	return 0;
}