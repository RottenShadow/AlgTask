#include<iostream>
#include <vector>
#include<conio.h>
using namespace std;

void PrintArr(int arr[],int size){
    cout<<"Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
    void Merge(int num[],int start,int mid,int end) {
        int i=0,j=0,k=start;
        int leftSize=mid-start+1,rightSize=end-mid;
        int arrLeft[leftSize],arrRight[rightSize];

        for(int f = 0; f<leftSize ;f++) arrLeft[f]=num[start+f];
        for(int f = 0; f<rightSize;f++) arrRight[f]=num[f+mid+1];

        while( i< leftSize && j < rightSize){
            if(arrLeft[i] < arrRight[j]){
                num[k] = arrLeft[i];
                i++;
            }
            else{
                num[k]=arrRight[j];
                j++;
            }
            k++;
        }

        while (i< leftSize)
        {
            num[k] = arrLeft[i];
            i++;
            k++;
        }

         while (j< rightSize)
        {
            num[k] = arrRight[j];
            j++;
            k++;
        }
        

    }

    void Sort(int num[],int start,int end) {
        if (start >= end) return; // 1 Element at last
        int mid = start + (end - start) / 2;
        Sort(num, start, mid);  // Before mid
        Sort(num, mid + 1, end); // After mid
        Merge(num,start,mid,end); // Merge at last
    }

int main(){
    system("cls");
    int arr[]={2,2,3,10,5,2,1,0,-2,50,-2,92,-5,95,91,4,1,3};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<"Origin ";
    PrintArr(arr,size);
   Sort(arr, 0, size-1);
    cout<<"Sorted ";
    PrintArr(arr,size);
}