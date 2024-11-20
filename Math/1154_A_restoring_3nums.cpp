#include<iostream>
#include <algorithm>
using namespace std;


int main(){

	int a,b,c,d;

	cin>>a>>b>>c>>d;

	int max_value = max(max(a, b), max(c, d));
    
    if(max_value-a != 0) cout<<max_value-a<<" ";
    if(max_value-b != 0) cout<<max_value-b<<" ";
    if(max_value-c != 0) cout<<max_value-c<<" ";
    if(max_value-d != 0) cout<<max_value-d<<" "<<endl;





	return 0;
}