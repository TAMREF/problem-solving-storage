#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll T,a,b;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    for(cin>>T;T--;){
        cin>>a>>b;
        cout<<a*b/__gcd(a,b)<<'\n';
    }
}