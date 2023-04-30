#include<bits/stdc++.h>
using namespace std;
void Bubsort(vector<int> v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        int flag = 0;
        for(int j = 0; j<v.size()-1; j++)
        {
            if(v[j]<v[j+1])
            {
                swap(v[j] , v[j+1]);
                flag++;
            }
        }
        if(flag==0)
        {
            break;
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
