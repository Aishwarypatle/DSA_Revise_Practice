#include <iostream>
#include <vector> // Add this line to include the vector header

using namespace std;

long long reverseArray( int n , int arr[]) 
{
    if(n==0)return {};
	//Write your code here
    //  if(n==0)return 1;
    return reverseArray(n-1 , arr ); 
}

int main()
{   int n , x;
    cout << " Enter Size here : " ; cin >> n;
    int arr[] = {};

    for (int i = 0; i < n; ++i)
    {
       cout <<" enter --"; cin >> arr[i] ;
    }

    // reverseArray(n ,arr);
    
    
    cout << " Final Output is : " << reverseArray(n , arr);
    return 0;
}



//put same code in -> https://pythontutor.com/render.html#mode=display