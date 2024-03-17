#include <iostream>
using namespace std;

long long factorial(long long n) 
{
	//Write your code here
     if(n==0)return 1;
    return n * factorial(n-1); 
}

int main()
{   int n , x;
    cout << " Enter Number here : " ; cin >> n;
    cout << factorial(n);
    return 0;
}



//put same code in -> https://pythontutor.com/render.html#mode=display