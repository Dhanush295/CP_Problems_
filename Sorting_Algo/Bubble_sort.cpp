#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped = false;
        for(int j=0; j< n - i -1; j++ ){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int main() {
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    bubble_sort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
