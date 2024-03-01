#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements->";
    cin>>n;
    int arr[n];
    cout<<"Enter values->";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int t=0;
        for (int j = i-1; j >= 0; j--)
        {
            if (arr[j]==arr[i])
            {
                t=1;
                break;
            }
        }
        if (t==0)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<endl;
}