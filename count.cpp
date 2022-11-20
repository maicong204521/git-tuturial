#include<bits/stdc++.h>
using namespace std;
int n, m;
int arr[1000001];
int tong = 0;
int s[1000000];
int res = 0;
int min1 = 1000000;
int max1 = -9999;
int check(int k,int a){
    if(tong + a>m) return 0;
    
    return 1;
}
void Try(int k){
    for(int i=1;i<=m;i++){
        if(check(k,i)){
            s[k]=i;
            tong = tong + s[k];
            if(k==n){
                if(tong == m){
                    res++;
                }
            }
            else{
                Try(k+1);
            }
            tong = tong-s[k];
            
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        min1 = min(i,min1);
        max1 = max(i,max1);
    }
    Try(1);
    cout<<res;
    return 0;
}