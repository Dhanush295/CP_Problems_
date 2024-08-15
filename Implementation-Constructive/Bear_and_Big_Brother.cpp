#include<iostream>


using namespace std;


int main(){
	int l, b;
	cin>>l>>b;

	int count =0;

	while(l <= b){
		b *= 2;
		l *= 3;
		count++;
	}

	cout<<count;
	return 0;
}