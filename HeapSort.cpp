#include<iostream>
#include <vector>

using namespace std;

void PrintArr(vector<int> arr){
    cout<<"Array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

    void heapify(vector<int>& arr,int size,int pos) {
        int l = 2 * pos + 1;
        int r = 2 * pos + 2;
        int max = pos;
            if( size > l && arr[l] > arr[max]) max = l;
            if( size > r  && arr[r] > arr[max]) max = r;
        if(max != pos){
            swap(arr[max],arr[pos]);
            heapify(arr,size,max);
        }
    }
    void buildHeap(vector<int>& arr) {
        int size = arr.size();
        for (int i = size/2 - 1; i >= 0; i--) heapify(arr,size,i);     
    }

    void heapSort(vector<int>& arr){
        int size = arr.size();
        buildHeap(arr);
        for (int i = size - 1; i > 0; i--) {
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }

int main(){
    system("cls");
    vector<int> arr ={20,80,50,30,90,10};
    cout<<"Origin ";
    PrintArr(arr);
    heapSort(arr);
    cout<<"Sorted ";
    PrintArr(arr);
}