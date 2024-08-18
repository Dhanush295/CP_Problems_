#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s;
	cin>>s;

	transform(s.begin(), s.end(), s.begin(), ::tolower);

	string vowels = "aoyeui";
	string result;

	for (char c : s) {
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }

	cout<<result;

	return 0;
}