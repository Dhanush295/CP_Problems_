#include<iostream>

using namespace std;

int get_index(int arr[], int low, int high){


    // select a pivot
    int pivot =  arr[low];

    int i = low;
    int j = high;

    // if  arr of low is less than pivot keep moving and if arr of high is greater than pivot keep moving

    while(i < j){

        while( i < j &&  arr[i] <= pivot) i++;

        while(arr[j] > pivot) j--;

        if(i < j) swap(arr[i], arr[j]);    
    }

    // now swap the pivot at the high place
    swap(arr[j], arr[low]);

    // return the high index val; 
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low >= high) return;

    int partion_index = get_index(arr, low, high);

    quick_sort(arr, low, partion_index-1);
    quick_sort(arr, partion_index+1, high);

}


int main() {
    int arr[] = {5, 9, 2, 10, 20, 4, 15};
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    quick_sort(arr, 0, size - 1); 

    for(int i=0; i<size; i++){
    	cout<<arr[i]<<" ";
    }

    return 0;
}
