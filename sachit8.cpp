#include <iostream>
#include <vector>

using namespace std;

void spiralOrder(const std::vector<std::vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            std::cout << matrix[top][i] << " ";
        }
        ++top;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            std::cout << matrix[i][right] << " ";
        }
        --right;

        // Make sure we are now on a different row
        if (top <= bottom) {
            // Traverse from right to left
            for (int i = right; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            --bottom;
        }

        // Make sure we are now on a different column
        if (left <= right) {
            // Traverse from bottom to top
            for (int i = bottom; i >= top; --i) {
                std::cout << matrix[i][left] << " ";
            }
            ++left;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    
    };

    spiralOrder(matrix);

    return 0;
}