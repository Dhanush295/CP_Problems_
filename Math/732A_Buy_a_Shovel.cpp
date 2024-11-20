#include<iostream>

using namespace std;

int main(){
	int k, r, p;
	cin>>k>>r;

	for(int i=1; i<=10; i++){
		p = k*i;

		if(p%10 == 0 || p%10 == r){
			cout<<i; 
			return 0;
		} 
	}

	return 0;
}