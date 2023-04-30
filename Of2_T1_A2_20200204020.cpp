#include<bits/stdc++.h>
using namespace std;
bool linSearch(vector<int> v,int n)
{

    int flag =0;
    for(int i=0; i<v.size(); i++)
    {

        if(n == v[i])
        {
            flag=1;
        }


    }
    if(flag == 1)
    {

        cout<<"Found"<<endl;


    }
    else
        cout<< "Not Found"<< endl;

}

int main()
{

    int n1;
    vector<int> v1;

    v1.push_back(3);
    v1.push_back(47);
    v1.push_back(62);
    v1.push_back(97);
    v1.push_back(619);
    v1.push_back(71);
    v1.push_back(88);

    for(int i=0; i<v1.size(); i++)
    {
        cout<< v1[i] <<"\t";



    }
    cout << "\nEnter the element to find"<<endl;
    cin >> n1;
    linSearch(v1,n1);
    return 0;



}
