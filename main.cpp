#include<iostream>
#include<cstdlib>
using namespace std;

bool czy_pierwsza(int liczba)
{
    if(liczba<2)
        return false;
    for(int i=2; i*i<=liczba; i++)
        if(liczba%i==0)
            return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
       cin>>x;
       if(czy_pierwsza(x))
            cout<<"TAK"<<endl;
       else
        cout<<"NIE"<<endl;
    }
    return 0;
}
