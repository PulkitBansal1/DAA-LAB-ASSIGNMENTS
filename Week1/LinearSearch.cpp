#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        int cmp=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                cmp++;
                flag=1;
                break;
            }
            else
            {
                cmp++;
            }
            
        }
        if(flag=1)cout<<"Present "<<cmp<<endl:cout<<"Not Present "<<cmp<<endl;
        t--;
    }

    return 0;

}
