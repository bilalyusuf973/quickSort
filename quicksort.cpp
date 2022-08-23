#include <iostream>
using namespace std;
int partition(int *arr, int s, int e){

    int pivot = arr[e];
    int i = s-1;

    for(int j=s;j<e;j++){
        
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }

    i++;
    swap(arr[i],arr[e]);

    return i;

}
void quickSort(int *arr, int s, int e){
    if(s>=e)
       return;
    int pivotIndex = partition(arr, s, e);

    quickSort(arr, s, pivotIndex-1);
    quickSort(arr, pivotIndex+1, e);
}
int main()
{
    int arr[9] = {9,8,7,46,5,4,23,20,1};
    quickSort(arr, 0, 8);
    for(int i = 0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}