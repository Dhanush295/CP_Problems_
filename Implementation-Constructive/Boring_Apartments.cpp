#include<iostream>
using namespace std;


int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int multiply = 1;
		int count = 0;

		while(n > 0){

			int last_digit = n%10;
			count += 1 *multiply;
			multiply++;
			if(n/10 == 0){
				count += (n-1)*10;
			}
			n = n/10;
		}

		cout<<count<<"\n";
	}
	return 0;
}
