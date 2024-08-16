#include<iostream>


using namespace std;

int main(){
	int t;
	cin>>t;

	int a;
	int b;
	int n;

	while(t--){
		cin>>a>>b>>n;
		int count = 0;

		while (a <= n && b <= n) {
        if (a < b) {
            a += b;
        } else {
            b += a;
        }
        count++;
    }

    cout << count << " ";

	}

	return 0;


}