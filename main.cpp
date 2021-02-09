#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> arr {5,6,123,542,78};
    for(auto s: arr){
        cout << s << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());
    for(auto s: arr){
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
