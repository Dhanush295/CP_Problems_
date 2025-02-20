#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        };
    }
}


int main() {
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    insertion_sort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
