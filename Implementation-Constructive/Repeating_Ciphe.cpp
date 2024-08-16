#include<iostream>
#include<string>

using namespace std;

int main(){

	int n;
	cin>>n;

	string s;
	cin>>s;
	string result;

	if(n==1){
		cout<<s;
		return 0;
	}
	
	for(int i = 0; i < n; i++){
		int index = i * (i + 1) / 2;
		if(index < s.length()){
			result += s[index];
		} else {
			break;
		}
	}

	cout<<result;

	return 0;
}