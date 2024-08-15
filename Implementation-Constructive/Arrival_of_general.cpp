#include<iostream>
#include<vector>

using namespace std;


int main(){

	int n;
	cin>>n;
	vector<int> a(n);

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int min_num = a[0];
	int max_num = a[0];

	int min_index = 0;
	int max_index = 0;

	for(int i=0; i<n; i++){
		if(a[i] <= min_num){
			min_num = a[i];
			min_index = i;
		}
		if (a[i]> max_num){
			max_num = a[i];
			max_index = i;
			
		}
	}

	if(max_index > min_index){
		cout<<(max_index + (n - 1 - min_index)) - 1<<"\n";
	}
	else cout << (max_index + (n - 1 - min_index)) <<"\n";



	return 0;
}