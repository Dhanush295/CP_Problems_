#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s, new_string;
	cin>>s;

	for(int i=0; i<s.size(); i++ ){
		if(s[i] != '+'){
			new_string.push_back(s[i]);
		}
	}

	sort(new_string.begin(), new_string.end());


	cout<<new_string[0];
	for(int i=1; i<new_string.size(); i++){
		cout<<"+"<<new_string[i];
	}

	return 0;
}

