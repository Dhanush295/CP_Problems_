#include<iostream>

using namespace std;


int main(){

	int k, w;
	long long n;
	cin>>k>>n>>w;
	long long money_required =0;
	long long sum = 0;

	for(int i=1; i<=w; i++){
		sum += i*k;
	}

	money_required= sum - n;

	if(money_required <= 0){
        cout << 0;
    } else {
        cout << money_required;
    }


	return 0;
}