#include <vector>
#include <iostream>
using namespace std;

void printVe(vector<int> v)
{
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] <<endl;
    }
}

int main()
{
    //declare a vector
    vector<int> vct;
    vct.push_back(5);
    vct.push_back(6);
    vct.push_back(7);
    vct.push_back(8);

    for (int i=0;i<vct.size();i++)
    {
        cout << vct[i] <<endl;
    }

    //user input
    vector<int> vct1;
    for (int i=0;i<4;i++)
    {
        int x;
        cin >> x;
        vct1.push_back(x);
    }
    printVe(vct1);

    //array to vector
    int arr[] = {2,7,4,1,5,3};
    vector<int> vct2(arr,arr+sizeof(arr)/sizeof(int));
    printVe(vct2);
    return 0;
}
