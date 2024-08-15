#include<iostream>
#include<vector>

using namespace std;


int main(){

	int t;
	cin>>t;

	while(t--){
		int num;
	cin>>num;
	int pw = 1;
	vector<int> vec;

	while(num){

		if(num%10){
			vec.push_back((num%10)*pw);
		}
		num/=10;
		pw *=10;
	}

	cout<<vec.size()<<endl;
	for(auto number :vec) cout<<number<<" ";

	}
	

	return 0;
}