#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){

		int a, b;
		cin>>a>>b;

		if(a < b) cout<< b-a<<endl;
		else if (a%b == 0) cout<<"0\n";
		else{
			int i = b - (a % b);
            cout << i << endl;
		}
	}
	return 0;
}