// #include <iostream>
// using namespace std;

// void Recursion(int i,int n)
// {
//     if(i==n) return ;
//     cout << i ;
//     Recursion(i+1 , n);
// }

// int main()
// {   int n , x;
//     cout << " Enter Number here : " ; cin >> n;
//     Recursion(1,n);
//     return 0;
// }



//put same code in -> https://pythontutor.com/render.html#mode=display


//program to print number from using recurrsion








#include <iostream>
#include <vector> // Add this line to include the vector header
using namespace std;

vector<int> printNos(int x) {
    if (x == 0) {
        return {};
    } else {
        vector<int> arr = printNos(x - 1);
        arr.push_back(x); // Use push_back instead of emplace_back for simplicity
        return arr;
    }
}

int main() {
    vector<int> result = printNos(5); // Store the returned vector
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
