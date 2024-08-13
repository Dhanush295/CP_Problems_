#include<iostream>


using namespace std;


int main(){

	string s;
	cin>>s;

	int first_digit = s[0] -'0';

	if(first_digit == 9){
		s[0] == '9';
	}
	else if(first_digit > 4){
		s[0] = ((9-first_digit)) + '0';
	}

	for(int i=1; i<s.length(); i++){
		int a = s[i] -'0';

		if(a > 4){
			s[i] = ((9-a)) + '0';
		}
	}

	cout<<s;

	return 0;
}