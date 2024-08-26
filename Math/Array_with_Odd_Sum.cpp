#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int sum =0;
		int even_flag = 0;
		int odd_flag = 0 ;

		for(int i=0; i<n; i++){
			int x;
			cin>>x;

			sum+=x;

			if(x%2 == 0) even_flag =1;
			else odd_flag = 1;

		}

		if((sum %2 != 0) || (even_flag && odd_flag)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";

	}
	return 0;
}