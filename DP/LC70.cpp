#include<bits/stdc++.h>
using namespace std;
int mem[45];
int stears(int n)
{

    if(mem[n]!=0) return mem[n];
    int ans=0;
    ans=stears(n-1)+stears(n-2);
    mem[n]=ans;
    return ans;

}
int main()
{
    int i,j,k;
    cin>>k;
    mem[1]=1;
    mem[2]=2;

    cout<<stears(k)<<endl;
}
