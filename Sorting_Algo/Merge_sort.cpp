#include <iostream>

using namespace std;

void merge_arr(int arr[], int low, int mid, int high){

// step 1 left arr size and right arr size
	int n1 = mid - low +1 ;
	int n2 = high - mid;

// enter values to leftarr and rightarr
	int leftArr[n1], rightArr[n2];

	for(int i=0; i<n1; i++){
		leftArr[i] = arr[low + i];
	}

	for(int j=0; j<n2; j++){
		rightArr[j] = arr[mid + 1 + j];
	}

// comapre left arr and right arr and swap values
	int i=0, j =0, k= low;
	while(i < n1 && j < n2){
		if(leftArr[i] <= rightArr[j]){
			arr[k] = leftArr[i];
			i++;
		}
		else{
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}


// add the leftover values from left and right arr

	while(i < n1){
		arr[k] = leftArr[i];
		i++;
		k++;
	}

	while(j < n2){
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}


void merge_sort(int arr[], int low, int high){

	if(low >= high) return;

	int mid = low + (high - low)/2;

	merge_sort(arr, low, mid);
	merge_sort(arr, mid+1, high);
	merge_arr(arr, low, mid, high);
}


int main() {
    int arr[] = {5, 9, 2, 10, 20, 4, 15};
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    merge_sort(arr, 0, size - 1); 

    for(int i=0; i<size; i++){
    	cout<<arr[i]<<" ";
    }

    return 0;
}


