#include<iostream>
using namespace std;
int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for( ;j<e;j++)
    {
        if(a[j]<pivot)
            {i++;
        swap(a[i],a[j]);
            }
    }
    swap(a[i+1],a[e]);
    return i+1;

}
void sort(int *a,int s,int e)
{
    if(s>=e)
        return;
    int p=partition(a,s,e);
    sort(a,s,p-1);
    sort(a,p+1,e);
}



int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;

int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
return 0;




}
