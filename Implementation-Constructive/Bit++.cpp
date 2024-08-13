#include<iostream>


using namespace std;


int main(){

	int test_cases;
	cin>>test_cases;

	int x=0;

	for(int i=0; i<test_cases; i++){
		string s;
		cin>>s;

		if(s =="++X" || s=="X++"){
			x ++;
		}
		else{
			x--;
		}
	}

	cout<<x;
	return 0;
}