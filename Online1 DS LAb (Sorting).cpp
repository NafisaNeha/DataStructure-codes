#include<bits/stdc++.h>
using namespace std;

void selSort(int ar[], int arSize)
{
    int temp,midInd;
    for(int i=0; i<(arSize-1); i++)
    {
        int minInd = i ;
        for(int j= i+1; j<(arSize); j++)
        {
            if(ar[midInd]>ar[j])
            {
                midInd=j;
            }
        }
        if(minInd==i)

            else
                swap(ar[i],ar[midInd]);
    }
}


void bubSort(int ar[], int arSize)
{
    int flag=0;
    for(int i=0; i<=6; i++)
    {
        for(int j=0; j<(arSize-i-1); j++)
        {
            if(ar[j]>ar[j+1])
            {

                int  temp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag=1;

            }
        }

        if(flag==0)
        {
            break;
        }
    }
}

bool binSer(int ar[],int lo, int Hi, int key)
{
    for(int i=lo; i<=Hi; i++)
    {
        for(int j=lo; j<Hi-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int item = a[j];
                a[j]=a[j+1];
                a[j+1] = item;

            }
        }

    }
    while(lo<=Hi)
    {
        int mid=(lo+Hi)/2;
        if(a[mid]== key)
        {
            return true;
            break;
        }
        else if(a[mid] > key)
        {
            Hi=mid-1;
        }
        else if(a[mid]< key)
        {
            lo=mid+1;
        }


    }

    return false;

}

void printAr(int ar[], int arSize)
{
    for (int i=0; i<arSize; i++)
    {
        cout << ar[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {93, 87, 81, 37, 30, 15, 14, 13, 6, 3};
    int low = 0;
    int high = 9;

    cout << "Before sorting: ";
    printAr(arr,high);

    cout << "Which sort do you want to perform:\n1.Selection Sort\n2.Bubble Sort" << endl;
    int choice;
    cin >> choice;

    if(choice == 1)
    {
        selSort(arr,high);
    }
    else if(choice == 2)
    {
        bubSort(arr,high);
    }
    else
    {
        cout << "Choice invalid" <<endl;
        return 0;
    }

    cout << "After sorting: ";
    printAr(arr,high);

    // Binary Search
    int key;
    cout << "Enter the value you want to search: ";
    cin >> key;

    bool status = binSer(arr, low, high, key);
    if(status == true)
    {
        cout << "Item is in the array" << endl;
    }
    else
    {
        cout << "Item is not in the array" << endl;
    }

    return 0;
}
