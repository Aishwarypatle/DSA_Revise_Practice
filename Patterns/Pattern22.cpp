#include <iostream>

using namespace std;

void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        cout << n;
    }
    cout <<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<< n-j;
        }
        for(int j=0;j<=n-2*i;j++){
            cout<< n-1-i;
        }
        for(int j=0;j<=i;j++){
            cout<< n-j;
        }
        cout<< endl;
    }
    for(int i=0;i<n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            cout<< n-j;
        }
        for(int j=0;j<=2*i;j++){
            cout<<n/2+i;
        }
        for(int j=0;j<=n-2-i;j++){
            cout<< n/2+j+i;
        }
        cout<< endl;
    }
    for(int i=0;i<2*n-1;i++){
        cout << n;
    }
}

// Input: ‘N’ = 4
// Output: 
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4

// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4

// 4 4 4 4 4 4 4



int main()
{   int n;
    cout << " Enter Number here : " ; cin >> n;
    pattern(n);
    return 0;
}