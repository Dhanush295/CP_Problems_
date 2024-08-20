#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int count = 0;

    while(n < m) {
        if(m % n == 0) {
            if((m / n) % 2 == 0) {
                n *= 2;
            } else if((m / n) % 3 == 0) {
                n *= 3;
            } else {
                break;
            }
            count++;
        } else {
            break;
        }
    }

    if(n == m) {
        cout << count;
    } else {
        cout << -1;
    }

    return 0;
}
