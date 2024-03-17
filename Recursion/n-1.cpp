
#include <iostream>
#include <vector> // Add this line to include the vector header
using namespace std;

vector<int> printNos(int x) {

    if(x==1)return {1};
    cout << x <<" ";
    return printNos(x-1);

}

int main() {
    int n;
    cout << "Enter num" ;cin >> n;
    vector<int> result = printNos(n); // Store the returned vector
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
