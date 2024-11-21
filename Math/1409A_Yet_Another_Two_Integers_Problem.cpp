#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int a, b;
		int count = 0;
		int sum = 0;

		cin>>a>>b;

		if(a == b) cout<<"0\n";

		else{

			int diff = abs(a - b);
            int steps = (diff + 9) / 10; 
            cout << steps << endl;
		}
	}


	return 0;
}