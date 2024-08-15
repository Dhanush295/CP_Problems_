#include<iostream>
#include<vector>

using namespace std;


int main(){

	string n;
    cin >> n;  
    int lucky_num = 0;

    for(char digit : n){
        if(digit == '7' || digit == '4'){
            lucky_num++;
        }
    }
    

	if(lucky_num == 4 || lucky_num == 7){
		cout<<"YES";
	}
	else cout<<"NO";

	return 0;
}