#include<iostream>

using namespace std;

int main()
{
    int n, j, k, l,m;
    while(1)
    {
        cin >> n;
        if(n==0)
        break;

        k=0;

        while(n>=3)
        {
            k+=n/3;
            m=n/3;
            l=n%3;
            n=l+m;
            if(n==2)
            {
                k++;
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}
