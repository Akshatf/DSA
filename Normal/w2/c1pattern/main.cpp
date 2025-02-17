// #include <iostream>
// using namespace std;

// int main()
// {

    // pattern 1

    // for (int i = 0; i <= 3; i++)
    // {
    //     // cout<<"*";
    //     for (int j = 0; j <= 3; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // pattern 3

    // wuthout user input
    // for (int i = 0; i <= 3; i++)
    // {
    //     // cout<<"*";
    //     for (int j = 0; j <= 5; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // with user input
    // int l, w;
    // cout << "enter length of rectangle";
    // cin >> l;
    // cout << "enter width of rec";
    // cin >> w;
    // for (int i = 0; i < l; i++)
    // {
    //     // cout<<"*";
    //     for (int j = 0; j < w; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // pattern 4 hollow rectangle

    // int length ;
    // int width ;
    // cout<<"enter length"<<endl;
    // cin>>length;
    // cout<<"enter width"<<endl;
    // cin>>width;
    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < width; col++)
    //     {
    //         if (row == 0 || row == length - 1 ||col == 0 || col == width - 1)
    //         {

    //             // spacing ka dhayan rkhna vo output me dikkat de skti hai  star k sath 2 space h to space me 3 dena
    //             cout <<" * ";
    //         }
    //         else
    //         {
    //             cout <<"   ";
    //         }
    //     }
    //     cout << endl;
    // }

    // hollow rectangle with diagonal
    // int length ;
    // int width ;
    // cout<<"enter length"<<endl;
    // cin>>length;
    // cout<<"enter width"<<endl;
    // cin>>width;
    // for (int row = 0; row < length; row++)
    // {
    //     for (int col = 0; col < width; col++)
    //     {
    //         if (row == 0 || row == length - 1 ||col == 0 || col == width - 1 || row == col )
    //         {

    //             // spacing ka dhayan rkhna vo output me dikkat de skti hai  star k sath 2 space h to space me 3 dena
    //             cout <<" * ";
    //         }
    //         else
    //         {
    //             cout <<"   ";
    //         }
    //     }
    //     cout << endl;
    // }

    // PATTERN 5 HOLLOW SQUARE
    // int side;

    // cout << "enter length" << endl;
    // cin >> side;

    // for (int row = 0; row < side; row++)
    // {
    //     for (int col = 0; col < side; col++)
    //     {
    //         if (row == 0 || row == side - 1)
    //         {

    //             // spacing ka dhayan rkhna vo output me dikkat de skti hai  star k sath 2 space h to space me 3 dena
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             if (col == 0 || col == side - 1)
    //             {
    //                 cout << " * ";
    //             }
    //             else
    //             {
    //                 cout << "   ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // pattern 2 half paraimid

    // int n ;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // inverted half pyrmid

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // hollow half pyramid
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         if (j == 0 || j == i || i == n - 1)
    //         {
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             cout << "   ";
    //         }
    //     }
    //     cout << endl;
    // }

    // // hollow inverted pyramid
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         if(i==0||j==0||i+j==n-1){
    //             cout << " * ";
    //         }
    //         else {
    //             cout<<"   ";
    //         }

    //     }
    //     cout << endl;
    // }

    // // numeric half

    // int n ;
    // cin>>n;
    // for ( int i = 1 ; i <= n ; i++){
    //     for (int j = 1 ; j<=i ; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // inverted numeric

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }

// }