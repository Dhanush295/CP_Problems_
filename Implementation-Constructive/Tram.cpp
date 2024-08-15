#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n;
	int passanger = 0;
	int max_passanger = 0;
	int a, b;

	while(n--){
		cin>>a>>b;

		passanger = (passanger+b)-a;

		if(passanger > max_passanger ){
			max_passanger = passanger;
		}
	}

	cout<<max_passanger;


	return 0;
}