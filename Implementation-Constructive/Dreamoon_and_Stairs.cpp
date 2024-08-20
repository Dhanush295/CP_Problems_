#include<iostream>

using namespace std;

int main(){

	int n, m;
    cin >> n >> m;

    
    int minMoves = (n + 1) / 2;

  
    while (minMoves % m != 0) {
        minMoves++;
    }

    if (minMoves <= n) {
        cout << minMoves;
    } else {
        cout << -1;
    }

    return 0;
}