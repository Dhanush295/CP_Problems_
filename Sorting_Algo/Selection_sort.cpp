#include<iostream>

using namespace std;

void selection_sort(int arr[], int n){
  for(int i = 0; i<n-1; i++){
    int minimum = i;
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[minimum]) minimum = j;
    }
    swap(arr[i], arr[minimum]);
  }
}

int main(){
  int arr[6] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    selection_sort(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

  return 0;
}
