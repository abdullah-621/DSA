#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr = {1, 2, 3, 4, 5};

    vector<int> brr;
    brr.assign(arr.begin(), arr.end());
    return 0;
}