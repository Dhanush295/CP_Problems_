#include<iostream>

using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long a, b, c, n, sum_of_three;

		cin>>a>>b>>c>>n;

		sum_of_three = a+b+c+n;

		if(sum_of_three % 3 != 0) cout<<"NO\n";

		else{
			if(a> sum_of_three/3 || b > sum_of_three/3 || c > sum_of_three/3) cout<<"NO\n";
			else cout<<"YES\n";
		}

	}
	return 0;
}