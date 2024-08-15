#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
	string s;
	cin>>s;

	unordered_set<char> u(s.begin(), s.end());

	if((u.size() % 2 )== 0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	return 0;
}