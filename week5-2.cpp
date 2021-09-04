#include<iostream>
using namespace std;

string inp;

int main()
{
    cin>>inp;
    int ln = inp.size();
    for(int i=ln;i>=1;i--)
    {
        for(int j =0;j<i;j++)
        {
            cout<<inp[j];
        }
        cout<<endl;

    }



    return 0;
}

