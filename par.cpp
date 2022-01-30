#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int> a(n);
     vector<int> ans(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a.begin(),a.end());
    
    int i=0;
     int k=0;
    int j=2;
    int t = 0;
    int cnt=0;
while(cnt<n)
{
    
    while(k<n)
    {
        
        ans[k] = i;
     
        i++;
        k=k+j;
        cnt++;
    }
  j*=2;
    k=pow(2,++t)-1;
}
for(i=0;i<n;i++)
{
    cout<<a[ans[i]]<<" ";
}
    
    return 0;
}
//1 9 2 13 3 10 4 15 5 11 6 14 7 12 8 16 