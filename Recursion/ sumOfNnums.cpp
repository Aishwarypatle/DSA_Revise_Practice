#include <iostream>
using namespace std;

long long sumFirstN(long long n) 
{
	//Write your code here
     if(n==0)return false;
    return n += sumFirstN(n-1); 
}

int main()
{   int n , x;
    cout << " Enter Number here : " ; cin >> n;
    sumFirstN(n);
    return 0;
}



//put same code in -> https://pythontutor.com/render.html#mode=display