#include<iostream>
#include<vector>

using namespace std;

int main(){
	int pages;
	cin>>pages;

	vector<int> days(7);

	for(int i=0; i<7;i++){
		cin>>days[i];
	}

	int sum=0;

	while(pages >= sum){

		for(int i=0; i<7; i++){
			sum+= days[i];
			if(sum >= pages){
			cout<<i+1;
			return 0;
		}
		}

	}

	return 0;
}