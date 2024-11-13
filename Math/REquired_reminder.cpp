#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t, x, y, n;
	cin>>t;

	while(t--){
		cin>>x>>y>>n;

		int rem = n%x;
		int change = (rem - y + x)%x;

		

		cout<<n - change<<endl;

	}

	return 0;
}

