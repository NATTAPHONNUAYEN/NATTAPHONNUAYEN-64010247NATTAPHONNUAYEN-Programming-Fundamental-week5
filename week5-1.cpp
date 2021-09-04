#include<iostream>
using namespace std;

string inp;

int main()
{
    cin>>inp;
    int ln = inp.size();
    for(int i=ln;i>=1;i--)
    {
        cout<<inp.substr(0,i)<<endl;

    }



    return 0;
}
