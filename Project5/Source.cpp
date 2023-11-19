#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <typename T, typename Predicate>
vector<size_t> findIndices(const vector<T>& vec, Predicate pred) {
    vector<size_t> ind;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (pred(vec[i])) {
            ind.push_back(i);
        }
    }
    return ind;
}

int main() {
    std::vector<int> v = { 1, 45, 54, 71, 76, 17 };
    int temp = 54;
    auto ind = findIndices(v, [temp](int x) { return x == temp; });
    if (ind.empty()) {
        std::cout << "-1" << std::endl;
    }
    else {
        for (size_t index : ind) {
            std::cout << index << " ";
        }
    }
    return 0;
}