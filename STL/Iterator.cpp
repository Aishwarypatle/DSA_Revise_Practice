#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {1 , 2 , 4};
    // vector<int>::iterator it;

    for(auto it = vec.begin() ; it != vec.end() ;it++){
        cout << *(it);
        // cout << vec.at(2);
    }

    return 0;
}
