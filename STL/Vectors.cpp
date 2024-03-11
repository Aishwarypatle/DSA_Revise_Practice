#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creating vectors
    vector<int> vec1;
    vec1.push_back(1);
    vec1.emplace_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);

    vector<pair<int , int > > vec2 ;
    vec2.push_back(make_pair(1, 3));
    vec2.emplace_back(1, 3);
    cout << vec2.size();
    // vector<int> vec2;
    // vec2.push_back(6);
    // vec2.push_back(7);
    // vec2.push_back(8);
    // vec2.push_back(9);
    // vec2.push_back(10);

    // Displaying elements of vector 1
    // cout << "Vector 1: ";
    for (int i = 0; i < vec1.size(); ++i) {
        // cout << vec1[i] << " ";
    }
    cout << endl;

    // // Displaying elements of vector 2
    // cout << "Vector 2: ";
    // for (int i = 0; i < vec2.size(); ++i) {
    //     cout << vec2[i] << " ";
    // }
    // cout << endl;

    // // Adding corresponding elements of vectors
    // vector<int> sumVec;
    // for (int i = 0; i < vec1.size(); ++i) {
    //     sumVec.push_back(vec1[i] + vec2[i]);
    // }

    // // Displaying sum of vectors
    // cout << "Sum of vectors: ";
    // for (int i = 0; i < sumVec.size(); ++i) {
    //     cout << sumVec[i] << " ";
    // }
    cout << endl;

    return 0;
}
