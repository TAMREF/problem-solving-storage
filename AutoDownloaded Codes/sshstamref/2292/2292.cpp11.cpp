#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;;i++){
        if(3*i*i-3*i+1>=n) return 0*printf("%d\n",i);
    }
}