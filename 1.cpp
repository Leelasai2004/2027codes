#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='Y') cnt++;
            else{
                ans+=cnt;
                if(cnt){
                    s[i]='Y';
                    cnt=1;
                }
            }
        }
        cout<<ans<<'\n';
    }
}
