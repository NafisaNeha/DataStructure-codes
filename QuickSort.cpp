#include<iostream>
using namespace std;

void swap_(int inputArray[],int index1,int index2){
    int temp = inputArray[index1];
    inputArray[index1] = inputArray[index2];
    inputArray[index2] = temp;
}


void QuickSort(int inputArray[],int lowIndex,int highIndex){
    if(lowIndex>=highIndex)
        return;
    int pivot = inputArray[highIndex];
    int leftPointer = lowIndex;
    int rightPointer = highIndex;

    while(leftPointer<rightPointer){
        while(inputArray[leftPointer]<=pivot && leftPointer<rightPointer){
            leftPointer++;
        }
        while(inputArray[rightPointer]>=pivot && leftPointer<rightPointer){
            rightPointer--;
        }
        swap_(inputArray,leftPointer,rightPointer);
    }
    swap_(inputArray,leftPointer,highIndex);

    QuickSort(inputArray,lowIndex,leftPointer-1);
    QuickSort(inputArray,leftPointer+1,highIndex);
}




int main(){

    int arr[10] = {34,25,98,12,46,37,34,77,65,22};
    QuickSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
