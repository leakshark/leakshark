#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int fr[n];
        int visited=-1;
        cin>>n;
        int arr[n],i,j;
        while(n--){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            int count=1;{
                for(j=i+1;j<n;j++){
                    if(arr[i]==arr[j]){
                        count++;
                        fr[j]=visited;
                    }
                }
            }
            if(fr[i]!=visited){
                fr[i]=count;
            }
        }
        while(n--){
            if(fr[i]!=visited){
                if(fr[i]%2!=0){
                    cout<<arr[i]<<endl;
                }
            }
        }
    }
    return 0;
}
