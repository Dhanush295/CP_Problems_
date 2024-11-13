#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t, n;

	cin>>t;
	while(t--){
		cin>>n;
		if(n <= 2) cout<<"1"<<endl;
		else{
			cout<<(n-1)/2 + 1<<endl;
		}
	}
	return 0;
}