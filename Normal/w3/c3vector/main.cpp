#include <iostream>
#include <vector>
using namespace std;

void fun(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void print(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
    }
    cout << endl;
}
void print2(vector<int> v)
{
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    // // static
    // int arr[5]={1,2,3,4,5};
    // int n = 5;
    // fun(arr,n);

    // //dynamic
    // int n ;
    // int *arr = new int [n];
    // cout<<"Enter the size of array";
    // cin>>n;
    // for(int i = 0; i<n;i++){
    //     int data;
    //     cout<<"Enter data for"<<i<<" index of array";
    //     cin>>data;
    //     arr[i]=data;
    // }
    // fun(arr,n);

    vector<int> v;

    // // inserting values
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);

    print(v);
    print2(v);

    // //deleting elements ( always delete from last )
    // v.pop_back();
    // v.pop_back();
    // print(v);

    // taking input
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin >> d;
    //     v.push_back(d);
    // }
    // print(v);

    // now in array after taking ser input wew can't add more elemsts as it exceed the size limit but in vector we can

    // for (int i = 0; i < 100; i++)
    // {
    //     v.push_back(7);
    // }
    // print(v);
}