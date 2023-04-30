#include <bits/stdc++.h>
using namespace std;
void insertionSort(int A[],int n)
{

    int i,j, temp;
    for(i=1; i<n; i++)
    {
        temp =A[i];
        j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;

        }
        A[j+1]=temp;

    }


}
int main()
{
    int i,times=5;
    int A[]= {12,15,78,89,25,98};
    insertionSort(A,6);
    for(i=0; i<=times; i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");






}
