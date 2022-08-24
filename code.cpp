#include <bits/stdc++.h>
using namespace std;

//NAME: MD Jahid Hasan Hridoy
//ID: 2018000000113

int main()
{
    clock_t t1 = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, i, j;
    cin>>n;
    int arr[n], brr[n];
    for(i=1;i<=n;i++) cin>>arr[i]>>brr[i];
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            if(arr[j]<arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap(brr[j],brr[j+1]);
            }
            else if(arr[j]==arr[j+1]){
                    if(brr[j]<brr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap(brr[j],brr[j+1]);
                }
            }
        }
    }
    for(i=1;i<=n;i++) cout<<arr[i]<<" "<<brr[i]<<endl;
    clock_t t2 = clock();
    clock_t t = (t2-t1)/CLOCKS_PER_SEC;
    cout<<"Total Time=" << t << endl;
    return 0;
}
