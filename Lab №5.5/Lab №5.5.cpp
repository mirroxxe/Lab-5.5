#include <iostream>
using namespace std;

int A(int m, int n, int level, int& depth) {
    if (level > depth)
        depth = level;
    cout << "Level: " << level << endl;

    if (m == 0) {
        return n + 1;
    }
    else if (n == 0) {
        return A(m - 1, 1, level + 1, depth);
    }
    else {
        return A(m - 1, A(m, n - 1, level + 1, depth), level + 1, depth);
    }
}

int main() {
    int m, n;
    std::cout << "Two positive numbers: \n";
    std::cin >> m >> n;
    int depth = 0; // глибина рекурсії
    int result = A(m, n, 1, depth); 
    std::cout << "Result: " << result << std::endl;
    std::cout << "Rec depth: " << depth << std::endl; // вивід глибини рекурсії
    return 0;
}
