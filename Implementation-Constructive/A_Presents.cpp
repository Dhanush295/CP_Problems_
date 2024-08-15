#include<iostream>
#include<vector>

using namespace std;

int main(){
	long long n;
	cin>>n;
	vector<long long> a(n);
	vector<long long> result(n);

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		
		result[a[i]-1] = i+1;
	}

	for(int i=0; i<n; i++){
		cout<<result[i]<<" ";
	}



	return 0;
}