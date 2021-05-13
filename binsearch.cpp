#include<iostream>
using namespace std;
int binsearch(int arr[], int  l,int r, int target)
{
    int mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(arr[mid] == target)
            return mid;
        if(arr[mid] > target)
            r = mid - 1;
        else 
            l = mid+1;
    }

    return -1; // if not found 
}
int main()
{
int n; cout << "enter n" << endl;
    cin >> n;
    int a[n];
    cout << "enter array" << endl;
    int x;
    cout << "enter element to be searched" << endl;
    cin >> x;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+10);
    if(binsearch(a,0,n,x) == -1)
    {
        cout << "Element not present" << endl;
    }
    else cout << "element present at" << binsearch(a,0,n,x) << endl;
}
