#include<bits/stdc++.h>
using namespace std;
int n;
char arr[1005];
int idx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    while(arr[0]=='0'){
        ++idx;
        swap(arr[0],arr[idx]);
    }
    for(int i=0;i<n;++i){
        cout << arr[i];
    }
    return 0;
}
