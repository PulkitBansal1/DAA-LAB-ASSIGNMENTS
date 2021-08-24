#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int l=0;
        int r=n;
        int flag=0, cmp=1;
        while(l<=r)
        {
            cmp++;
            int mid=(l+r)/2;
            if(a[mid]==k)
            {
                flag=1;
                break;
            }
            else if(a[mid]>k)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(flag==0)
        {
            cout<<"Not Present"<<" "<<cmp<<endl;
        }
        else
        {
            cout<<"Present"<<" "<<cmp<<endl;
        }
        t--;
    }
    return 0;
}
