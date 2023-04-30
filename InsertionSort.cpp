#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int> v,int n)
{
    int i,key,j;
    for(int i=1;i<n;i++)
    {
        key = v[i];
        j = i-1;
        while(j>=0&&v[j]>key)
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=key;

        }


    }

void printVector(vector<int>v,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<v[i]<<'\t';
    }

}

int main()
{

    int arr[]= {2,5,6,78,98,90,76,56};
    vector<int>
    vec2(arr,arr+sizeof(arr)/sizeof(int));
    int N=vec2.size();
    insertionsort(vec2,N);
    printVector(vec2,N);
    return 0;



}


