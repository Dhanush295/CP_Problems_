#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n,m,k;

    cin>>n>>m>>k;

    vector<long long> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(), a.end());
	
	long long times = m/(k+1);

	long long cost = k * a[n-1] + a[n-2];
	
	cost = cost*times;

	cost += m%(k+1) * a[n-1];

	cout<<cost<<endl;


    return 0;
}
