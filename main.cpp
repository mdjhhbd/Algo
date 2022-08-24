#include<bits/stdc++.h>
using namespace std ;
#define JH 75
vector < int > chok[JH] ;
bool ghuraghuri[JH] ;
int Durroto[JH] ;
void bfs(int source){
    queue < int > Q ;
    ghuraghuri[source] = 1 ;
    Durroto[source] = 0 ;
    Q.push(source) ;
    while(!Q.empty()){
        int node = Q.front() ;
        Q.pop() ;
        for (int i = 0; i < chok[node].size() ; i++){
            int next = chok[node][i] ;
            if (ghuraghuri[next] == 0){
                ghuraghuri[next] = 1 ;
                Durroto[next] = Durroto[node] + 1 ;
                Q.push(next) ;
            }
        }
    }
}

void Merge(int arr[],int lo,int mid,int hi)
{
    int temp[100] , k = 1, i = lo , j = mid+1 ;
    while(i<=mid&&j<=hi)
    {
        if(arr[i]<arr[j]) temp[k++] = arr[i++] ;
        else temp[k++] = arr[j++] ;
    }
    while(i<=mid) temp[k++] = arr[i++] ;
    while(j<=hi) temp[k++] = arr[j++] ;
    for(i=lo,k=1;i<=hi;i++,k++)
        arr[i] = temp[k];
}
void merge_sort(int arr[],int lo,int hi)
{
    if(lo==hi) return ;
    int mid = (lo+hi)/2;
    merge_sort(arr,lo,mid);
    merge_sort(arr,mid+1,hi);
    Merge(arr,lo,mid,hi);
}

int main(){
    int nodes, edges ;
    cout << "Numbers of vertexes: \n" ;
    cin >> nodes ;
    cout << "Numbers of edges: \n" ;
    cin >> edges ;
    cout << "Input of every edge: \n" ;
    for (int i = 1; i <= edges; i++){
        int a, b ;
        cin >> a >> b ;
        chok[a].push_back(b) ;
        chok[b].push_back(a) ;
    }
    int source ;
    cout << "Source(bfs starts from): \n" ;
    cin >> source ;
    bfs(source) ;
    cout << "From node " << source << endl ;
    for (int i = 1; i <= nodes; i++){
        cout << "Distance of " << i << " is : " << Durroto[i] << endl ;
    }return 0 ;
}
