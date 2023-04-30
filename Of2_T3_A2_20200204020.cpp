#include<bits/stdc++.h>
using namespace std;
void Bubsort(vector<int> v)
{
    for(int pass=0; pass<v.size()-1; pass++)
    {
        int maxInd=pass;
        for(int j = pass+1; j<v.size()-1; j++)
        {
            if(v[j]<v[maxInd])
            {
                maxInd=j;
            }
        }
        if(maxInd !=pass)
        {
            swap(v[pass],v[maxInd]);
        }


    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<'\t';
    }

}

int main()
{

    int arr[]= {2,5,6,78,98,90,76,56};
    vector<int>
    vec2(arr,arr+sizeof(arr)/sizeof(int));
    Bubsort(vec2);
    return 0;



}

