#include <bits/stdc++.h>
using namespace std;

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5};
    std::sort(v.begin(), v.end());
    
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return 0;
}