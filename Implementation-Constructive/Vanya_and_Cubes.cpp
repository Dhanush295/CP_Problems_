#include<iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;

	long long height = 0;
	long long no_cube_used_in_each_level = 0;
	

	for(int i=1; ; ++i){
		long long no_cude_in_each_row = i * (i+1)/2;

		if( no_cube_used_in_each_level + no_cude_in_each_row > n){
			break;
		}

		no_cube_used_in_each_level += no_cude_in_each_row;
		++height;
	}

	cout<<height;
	return 0;
}