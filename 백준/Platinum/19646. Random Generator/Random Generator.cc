#include <bits/stdc++.h>
using namespace std;
int N,M,t[524288];
void add(int i,int v){if(i>0){t[i]+=v;add(i/2,v);}}
int q(int i,int v){if(i>=M)return i;if(t[i*2]>=v)return q(i*2,v);else return q(i*2+1,v-t[i*2]);}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int p,r,i;
cin>>N;
for(M=1;M<N;M*=2);
fill(t,t+M*2,0);
for(i=0;i<N;i++){cin>>p;add(i + M, p);}
for(i=0;i<N;i++){cin>>p;r=q(1,p);cout<<r-M+1<<" ";add(r,-t[r]);}}