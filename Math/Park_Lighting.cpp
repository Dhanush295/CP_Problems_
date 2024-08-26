#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;

		int cell = n*m;
		if(cell%2 == 0) cout<<cell/2<<endl;
		else cout<<(cell/2)+1<<endl;
	}
	return 0;
}