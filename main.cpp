/*ID: 2018000000113
Name:MD Jahid Hasan Hridoy
CSE2026.1*/


#include <bits/stdc++.h>
using namespace std;



/*Merge Sort Ascending*/

void MergeA(int arr[], int lo, int mid, int hi)
{
    int i = lo, j= mid + 1, k= 0, temp [hi-lo+1];
    while(i<=mid||j<=hi)
    {
        if(j>hi) temp[k++] = arr[i++];
        else if(i>mid) temp[k++] = arr[j++];
        else temp[k++] = arr[i] < arr[j] ? arr[i++] : arr[j++];
    }
    copy(&temp[0],&temp[k],&arr[lo]);
}
void MergeSortA(int arr[],int lo,int hi)
{
    if(lo==hi) return ;
    int mid = (lo+hi)/2;
    MergeSortA(arr,lo,mid);
    MergeA(arr,lo,mid,hi);
}
int Mass1()
{
    freopen("input1.txt","r",stdin);
    freopen("Merge_output_ascending_1.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++) cin >>arr[i];
    MergeSortA(arr,0,n-1);
    for(int i=0; i<n; i++) cout << arr[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Mass2()
{
    freopen("input2.txt","r",stdin);
    freopen("Merge_output_ascending_2.txt","w",stdout);
    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i=1; i<=n2; i++) cin>>arr2[i];
    MergeSortA(arr2,0,n2-1) ;
    for(int i=1; i<=n2; i++) cout << arr2[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Mass3()
{
    freopen("input3.txt","r",stdin);
    freopen("Merge_output_ascending_3.txt","w",stdout);
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=1; i<=n1; i++) cin >>arr1[i];
    MergeSortA(arr1,0,n1-1) ;
    for(int i=1; i<=n1; i++) cout << arr1[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}



/*Merge Sort Descending*/

void MergeD(int arr[], int lo, int mid, int hi)
{
    int i = lo, j= mid + 1, k= 0, temp [hi-lo+1];
    while(i<=mid||j<=hi)
    {
        if(j>hi) temp[k++] = arr[i++];
        else if(i>mid) temp[k++] = arr[j++];
        else temp[k++] = arr[i] > arr[j] ? arr[i++] : arr[j++];
    }
    copy(&temp[0],&temp[k],&arr[lo]);
}
void MergeSortD(int arr[],int lo,int hi)
{
    if(lo==hi) return ;
    int mid = (lo+hi)/2;
    MergeSortD(arr,lo,mid);
    MergeD(arr,lo,mid,hi);
}
int Mdss1()
{
    freopen("input1.txt","r",stdin);
    freopen("Merge_output_descending_1.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++) cin >>arr[i];
    MergeSortD(arr,0,n-1);
    for(int i=0; i<n; i++) cout << arr[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Mdss2()
{
    freopen("input2.txt","r",stdin);
    freopen("Merge_output_descending_2.txt","w",stdout);
    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i=1; i<=n2; i++) cin>>arr2[i];
    MergeSortD(arr2,0,n2-1) ;
    for(int i=1; i<=n2; i++) cout << arr2[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Mdss3()
{
    freopen("input3.txt","r",stdin);
    freopen("Merge_output_descending_3.txt","w",stdout);
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=1; i<=n1; i++) cin >>arr1[i];
    MergeSortD(arr1,0,n1-1) ;
    for(int i=0; i<n1; i++) cout << arr1[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}



/*Bubble Sort Ascending*/

void BubbleA(int b, int brr[])
{
    int i,j;
    for(i=1; i<b; i++)
    {
        for(j=1;j<=b-i; j++)
        {
            if(brr[j]>brr[j+1]) swap(brr[j],brr[j+1]);
        }
    }
}
int Bass1()
{
    freopen("input1.txt","r",stdin);
    freopen("Bubbl_output_ascending_1.txt","w",stdout);
    int b;
    cin>>b;
    int brr[b];
    for(int i=1; i<=b; i++) cin >>brr[i];
    BubbleA(b,brr);
    for(int i=0; i<b; i++) cout << brr[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Bass2()
{
    freopen("input2.txt","r",stdin);
    freopen("Bubbl_output_ascending_2.txt","w",stdout);
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=1; i<=n2; i++) cin >>arr2[i];
    BubbleA(n2,arr2);
    for(int i=0; i<n2; i++) cout << arr2[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Bass3()
{
    freopen("input3.txt","r",stdin);
    freopen("Bubbl_output_ascending_3.txt","w",stdout);
    int n3;
    cin>>n3;
    int arr3[n3];
    for(int i=1; i<=n3; i++) cin >>arr3[i];
    BubbleA(n3,arr3);
    for(int i=0; i<n3; i++) cout << arr3[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}



/*Bubble Sort Descending*/

void BubbleD(int n, int arr[])
{
    int i,j;
    for(i=1; i<n; i++)
    {
        for(j=1;j<=n-i; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}
int Bdss1()
{
    freopen("input1.txt","r",stdin);
    freopen("Bubbl_output_descending_1.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++) cin >>arr[i];
    BubbleD(n,arr);
    for(int i=0; i<n; i++) cout << arr[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Bdss2()
{
    freopen("input2.txt","r",stdin);
    freopen("Bubbl_output_descending_2.txt","w",stdout);
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=1; i<=n2; i++) cin >>arr2[i];
    BubbleD(n2,arr2);
    for(int i=0; i<n2; i++) cout << arr2[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Bdss3()
{
    freopen("input3.txt","r",stdin);
    freopen("Bubbl_output_descending_3.txt","w",stdout);
    int n3;
    cin>>n3;
    int arr3[n3];
    for(int i=1; i<=n3; i++) cin >>arr3[i];
    BubbleD(n3,arr3);
    for(int i=0; i<n3; i++) cout << arr3[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}



/*Quick Sort Ascending*/

int PartitionA(int arr[],int p,int r)
{
    int i = p-1, pivot = arr[r];
    for(int j=p; j<r;j++)
    {
        if(arr[j]<pivot) swap(arr[++i],arr[j]);
    }
    swap(arr[++i],arr[r]);
    return i ;
}
void QuickSortA(int arr[], int p, int r)
{
    if(p<r)
    {
        int q = PartitionA(arr,p,r);
        QuickSortA(arr,p,q-1);
        QuickSortA(arr,q+1,r);
    }
}
int Qass1()
{
    freopen("input1.txt","r",stdin);
    freopen("Quick_output_ascending_1.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++) cin >>arr[i];
    QuickSortA(arr,0,n-1);
    for(int i=0; i<n; i++) cout << arr[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Qass2()
{
    freopen("input2.txt","r",stdin);
    freopen("Quick_output_ascending_2.txt","w",stdout);
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=1; i<=n2; i++) cin >>arr2[i];
    QuickSortA(arr2,0,n2-1);
    for(int i=0; i<n2; i++) cout << arr2[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Qass3()
{
    freopen("input3.txt","r",stdin);
    freopen("Quick_output_ascending_3.txt","w",stdout);
    int n3;
    cin>>n3;
    int arr3[n3];
    for(int i=1; i<=n3; i++) cin >>arr3[i];
    QuickSortA(arr3,0,n3-1);
    for(int i=0; i<n3; i++) cout << arr3[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}



/*Quick Sort Descending*/

int PartitionD(int arr[],int p,int r)
{
    int i = p-1, pivot = arr[r];
    for(int j=p; j<r;j++)
    {
        if(arr[j]>pivot) swap(arr[++i],arr[j]);
    }
    swap(arr[++i],arr[r]);
    return i ;
}
void QuickSortD(int arr[], int p, int r)
{
    if(p<r)
    {
        int q = PartitionD(arr,p,r);
        QuickSortD(arr,p,q-1);
        QuickSortD(arr,q+1,r);
    }
}
int Qdss1()
{
    freopen("input1.txt","r",stdin);
    freopen("Quick_output_descending_1.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++) cin >>arr[i];
    QuickSortD(arr,0,n-1);
    for(int i=0; i<n; i++) cout << arr[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Qdss2()
{
    freopen("input2.txt","r",stdin);
    freopen("Quick_output_descending_2.txt","w",stdout);
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=1; i<=n2; i++) cin >>arr2[i];
    QuickSortD(arr2,0,n2-1);
    for(int i=0; i<n2; i++) cout << arr2[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}
int Qdss3()
{
    freopen("input3.txt","r",stdin);
    freopen("Quick_output_descending_3.txt","w",stdout);
    int n3;
    cin>>n3;
    int arr3[n3];
    for(int i=1; i<=n3; i++) cin >>arr3[i];
    QuickSortD(arr3,0,n3-1);
    for(int i=0; i<n3; i++) cout << arr3[i] << '\t' ;
    fclose (stdout);
    fclose (stdin);
}

int main()
{
    ///1sec = 1000 millisec
    clock_t t1 = clock();
    Mass1();
    clock_t t2 = clock();
    clock_t tt1 = (t2-t1)/CLOCKS_PER_SEC;

    clock_t t3 = clock();
    Mass2();
    clock_t t4 = clock();
    clock_t tt2 = (t3-t4)/CLOCKS_PER_SEC;

    clock_t t5 = clock();
    Mass3();
    clock_t t6 = clock();
    clock_t tt3 = (t6-t5)/CLOCKS_PER_SEC;


    clock_t t7 = clock();
    Mdss1();
    clock_t t8 = clock();
    clock_t tt4 = (t8-t7)/CLOCKS_PER_SEC;

    clock_t t9 = clock();
    Mdss2();
    clock_t t10 = clock();
    clock_t tt5 = (t10-t9)/CLOCKS_PER_SEC;

    clock_t t11 = clock();
    Mdss3();
    clock_t t12 = clock();
    clock_t tt6 = (12-11)/CLOCKS_PER_SEC;

    clock_t t13 = clock();
    Bass1();
    clock_t t14 = clock();
    clock_t tt7 = (t14-t13)/CLOCKS_PER_SEC;

    clock_t t15 = clock();
    Bass2();
    clock_t t16 = clock();
    clock_t tt8 = (t16-t15)/CLOCKS_PER_SEC;

    clock_t t17 = clock();
    Bass3();
    clock_t t18 = clock();
    clock_t tt9 = (t18-t17)/CLOCKS_PER_SEC;

    clock_t t19 = clock();
    Bdss1();
    clock_t t20 = clock();
    clock_t tt10 = (t20-t19)/CLOCKS_PER_SEC;

    clock_t t21 = clock();
    Bdss2();
    clock_t t22 = clock();
    clock_t tt11 = (t22-t21)/CLOCKS_PER_SEC;

    clock_t t23 = clock();
    Bdss3();
    clock_t t24 = clock();
    clock_t tt12 = (t24-t23)/CLOCKS_PER_SEC;

    clock_t t25 = clock();
    Qass1();
    clock_t t26 = clock();
    clock_t tt13 = (t26-t25)/CLOCKS_PER_SEC;
    /*Problem Code Start RB*/
    clock_t t27 = clock();
    Qass2();
    clock_t t28 = clock();
    clock_t tt14 = (t28-t27)/CLOCKS_PER_SEC;

    clock_t t29 = clock();
    Qass3();
    clock_t t30 = clock();
    clock_t tt15 = (t30-t29)/CLOCKS_PER_SEC;

    clock_t t31 = clock();
    Qdss1();
    clock_t t32 = clock();
    clock_t tt16 = (t32-t31)/CLOCKS_PER_SEC;

    clock_t t33 = clock();
    Qdss2();
    clock_t t34 = clock();
    clock_t tt17 = (t34-t33)/CLOCKS_PER_SEC;

    clock_t t35 = clock();
    Qdss3();
    clock_t t36 = clock();
    clock_t tt18 = (t36-t35)/CLOCKS_PER_SEC;
    /* Problem Code End RB */
    freopen("TimeCalculation_Analysis.txt","w",stdout);
    cout<<"For Input 1 "<<endl;
    cout<<"M_Ascending: "<<tt1<<"s"<<" M_Descending: "<<tt4<<"s"<<endl;
    cout<<"B_Ascending: "<<tt7<<"s"<<" B_Descending: "<<tt10<<"s"<<endl;
    cout<<"Q_Ascending: "<<tt12<<"s"<<" Q_Descending: NULL file"<<endl;
    cout<<"Best Sorting Ascending: ";
    if(tt7<tt12 and tt7<tt1) cout<<"Bubble"<<endl;
    else if(tt12<tt1) cout<<"Quick"<<endl;
    else cout<<"Merge"<<endl;

    cout<<"Best Descending: ";
    if(tt10<tt4) cout<<"Bubble"<<endl;
    else cout<<"Merge Sort."<<endl;

    cout<<"For Input 2"<<endl;
    cout<<"M_Ascending: "<<tt2<<"s"<<" M_Descending: "<<tt5<<"s"<<endl;
    cout<<"B_Ascending: "<<tt8<<"s"<<" B_Descending: "<<tt11<<"s"<<endl;
    cout<<"Best Sorting Ascending: ";
    if(tt8<tt2) cout<<"Bubble Sort."<<endl;
    else cout<<"Merge Sort."<<endl;

    cout<<"Best Sorting Descending: ";
    if(tt11<tt5) cout<<"Bubble Sort."<<endl;
    else cout<<"Merge Sort."<<endl;

    cout<<"For Input 3"<<endl;
    cout<<"M_Ascending: "<<tt3<<"s"<<" M_Descending: "<<tt6<<"s"<<endl;
    cout<<"B_Ascending: "<<tt9<<"s"<<" B_Descending: "<<tt12<<"s"<<endl;
    cout<<"Best Sorting Ascending: ";
    if(tt9<tt3) cout<<"Bubble Sort."<<endl;
    else cout<<"Merge Sort."<<endl;

    cout<<"Best Sorting Descending: ";
    if(tt12<tt6) cout<<"Bubble Sort."<<endl;
    else cout<<"Merge Sort."<<endl;
    return 0;
}
