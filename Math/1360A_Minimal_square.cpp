#include<iostream>

using namespace std;

int main(){

	int t, a, b;
	cin>>t;

	while(t--){
		cin>>a>>b;

		if(a < b) a*=2;
		else b *=2;

		int area = max(a, b) * max(a,b);
		cout<<area<<endl;
	}


	return 0;
}