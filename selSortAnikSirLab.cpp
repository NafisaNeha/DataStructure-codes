#include<bits/stdc++.h>
using namespace std;


void selSort(int ar[], int arSize)
{
    for(int pass=0; pass<(arSize-1); pass++)
    {
        int minInd = pass ;
        for(int i= pass+1; pass<(arSize); pass++)
        {
            if(ar[midInd]>ar[j])
            {
                midInd=i;
            }
        }
                swap(ar[pass],ar[midInd]);
    }
}

void printAr(int ar[], int arSize)
{
    for (int i=0;i<arSize;i++)
    {
        cout << ar[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2,7,4,1,5,3};
    int arrSize = 6;

    cout << "Before sorting: ";
    printAr(arr,arrSize);

    selSort(arr,arrSize);

    cout << "After sorting: ";
    printAr(arr,arrSize);

    return 0;
}
