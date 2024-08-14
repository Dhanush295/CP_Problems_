#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	/*

	n - friends
	k- bottel
	l - mililiter
	c - lime
	d -no of lime slice
	p - salt gram

	nl - mililiter per person
	np - salt grams per person

	*/

	int n, k, l, c, d, p, nl, np;

	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int drink,tosts, ttl_lime, ttl_salt;
	 

	drink =(k * l) / nl;
	ttl_lime = c *d;
	ttl_salt = p/np;

	int max_tosts = min({drink,ttl_lime,ttl_salt})/n;

	cout<<max_tosts;

	return 0;
}