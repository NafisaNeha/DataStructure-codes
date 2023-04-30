#include<bits/stdc++.h>
using namespace std;

int a[11] = { 10, 13, 17, 36, 27, 35, 31,38,90,96,99 };
int b[10];

void MergeSort(int low, int mid, int high)
{
    int l1, l2, i;

    for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
    {
        if(a[l1] <= a[l2])
        {
            b[i] = a[l1++];
        }
        else
        {
            b[i] = a[l2++];
        }
    }

    while(l1 <= mid)
    {
        b[i++] = a[l1++];
    }

    while(l2 <= high)
    {
        b[i++] = a[l2++];
    }

    for(i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void merge_sort(int low, int high)
{
    int mid;

    if(low >= high)
    {
        return;
    }

    mid = (low + high) / 2;

    merge_sort(low, mid);
    merge_sort(mid+1, high);
    MergeSort(low, mid, high);

}

int main()
{
    int i;

    merge_sort(0, 10);

    for(i = 0; i < 11; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}
