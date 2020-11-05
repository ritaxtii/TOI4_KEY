#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    char a[x+1],b[x+1],k[y+1];
    cin>>a>>b>>k;
    if(k[y-1]>=a[0]&&k[y-1]<=b[0]);
    else if(k[y-1]>=b[0]&&k[y-1]<=a[0]);
    else if(k[y-1]<=a[0]&&a[0]<=b[0]) k[y-1]=a[0];
    else if(k[y-1]>=a[0]&&a[0]>=b[0]) k[y-1]=a[0];
    else if(k[y-1]<=b[0]&&a[0]>=b[0]) k[y-1]=b[0];
    else if(k[y-1]>=b[0]&&a[0]<=b[0]) k[y-1]=b[0];

    int i=0;
    while(i<x)
    { int q=y-1;
        for(int j=i;j>=0;j--)
        { if(q>=0)
             {if(k[q]>=a[j]&&k[q]<=b[j]);
            else if(k[q]>=b[j]&&k[q]<=a[j]);
            else if(k[q]<=a[j]&&a[j]<=b[j]) k[q]=a[j];
            else if(k[q]>=a[j]&&a[j]>=b[j]) k[q]=a[j];
            else if(k[q]<=b[j]&&a[j]>=b[j]) k[q]=b[j];
            else if(k[q]>=b[j]&&a[j]<=b[j]) k[q]=b[j];
            q--;
             }
        }
        i++;
    }
    int ct=y-1;
    while(ct>=0)
    {int q=x-1;
        for(int j=ct;j>=0;j--)
        {
           if(k[j]>=a[q]&&k[j]<=b[q]);
            else if(k[j]>=b[q]&&k[j]<=a[q]);
            else if(k[j]<=a[q]&&a[q]<=b[q]) k[j]=a[q];
            else if(k[j]>=a[q]&&a[q]>=b[q]) k[j]=a[q];
            else if(k[j]<=b[q]&&a[q]>=b[q]) k[j]=b[q];
            else if(k[j]>=b[q]&&a[q]<=b[q]) k[j]=b[q];
           q--;
        }
        ct--;
    }
  cout<<k;

    return 0;
}
