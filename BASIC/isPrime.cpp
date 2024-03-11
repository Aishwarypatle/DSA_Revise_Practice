#include <iostream>
using namespace std;

void isPrime(int n)
{
	//Write your code here
    if(n==0)cout << " p000rime";;
    int i = 1;
    int count = 0;
    while (i<=n)
    {
        if(n%i == 0){
            count++;
        }
        i++;
    }
    if(count == 2){
        cout << " prime";
    }else{
        cout  <<"not prime";
    }
}

int main()
{   int n , x;
    cout << " Enter Number here : " ; cin >> n;
    isPrime(n);
    return 0;
}



//put same code in -> https://pythontutor.com/render.html#mode=display