#include<iostream>

using namespace std;

int main(){

	long long t, l, r;
	cin>>t;
	while(t--){
		cin>>l>>r;
		if(l*2 <= r) cout<<l<<" "<<2*l<<endl;
		else cout<<-1<<" "<<-1<<endl;
	}
	return 0;
}