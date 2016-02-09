#include<bits/stdc++.h>
using namespace std;
int main()
{
	string A="010";
    
    int len =A.length();
    int a1[len];
    for(int i=0;i<len;i++)
    {
        int temp=(int)A[i]-48;
        if(temp==1)
        {
            a1[i]=-1;
        }
        else
        a1[i]=1;
    }
    int curr=0,upto=0,idx=-1;
    for(int i=0;i<len;i++)
    {
        
        curr=curr+a1[i];
        if(a1[i]<0)
        {
            curr=0;
        }
        
       if(curr>upto)
       {
           upto=curr;
           idx=i;
       }
    }
    int l=idx-upto+2;
    int r=idx+1;
    vector<int>vec;
    if(idx<0)
    cout<<"null"<<endl;
    //return vec;
    else
    {
        vec.push_back(l);
        vec.push_back(r);
        cout<<l<<" "<<r;
        //return vec;
    }
    return 0;
}


