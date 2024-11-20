#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		int even = 2;
		int odd = 1;
		cin>>n;

		if( (n/2) %2 != 0) cout<<"NO\n";
		else{
			cout<<"YES\n";
			for(int i=0; i<n/2; i++){
				cout<<even<<" ";
				even += 2;
			}
			even = even -2;

			for(int i=1; i<n/2; i++){
				cout<<odd<<" ";
				odd +=2;   
			}
			cout<< even+(n/2) -1<<endl;
		}
		

			
	}
		
		
	
	return 0;
}