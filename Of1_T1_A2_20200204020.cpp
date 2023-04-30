#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,flag=0;
    string str1;
    cin >> str1;
    cout << "Your input string is: "<< str1 << endl;
    string str2;
    cin>>str2;
    cout <<"Your input string is: "<< str2 << endl;

    int len1=str1.size();
    int len2=str2.size();
    for(int j=0;j<len2;j++)
    {
         for(i;i<len1;i++)
         {
             if(str2[j]==str1[i])
             {
                 flag=1;
                 break;
             }
             else{
                flag =2;
                continue;
             }
         }
    }
    if(flag==1)
    {
        cout<< "FOUND";
    }
    else{
        cout<< "NOT FOUND";
    }

       return 0;
}
