#include<iostream>

using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		long long a,b,c,shop1, shop2;
		cin>>a>>b>>c;
		shop1 = -1;
		shop2 = -1;

		if(a<c) shop1 = 1;
		if(b*a> c) {
			cout<< b*a<<endl;
			cout<<c;
			shop2 = b;
		}
		cout<<shop1<<" "<<shop2<<endl;;
	}
	

	return 0;
}