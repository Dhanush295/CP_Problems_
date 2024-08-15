#include<iostream>

using namespace std;


int main(){
	long long n;
	int k;
	cin>>n;
	cin>>k;

	for(int i=0; i<k; i++){
		int last_digit = n%10;
		if(last_digit == 0){
			n/=10;

		}
		else{
			n--;
		}
	}

	cout<<n;
	return 0;
}