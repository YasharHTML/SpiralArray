#include <array>
#include <iostream>

#include "functions.h"

int main() {
    const int n = 5, m = 5;
    std::string direction = "RIGHT";
    int k = 1;
    // std::cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matrix[i][j] = BIG_CONSTANT;
    int i = 0, j = 0;
    while (k != n * m + 1) {
        if (direction == "RIGHT") {
            if (j < m && matrix[i][j] == BIG_CONSTANT) {
                matrix[i][j] = k;
                j++;
                k++;
            } else {
                direction = "DOWN";
                i++;
                j--;
            }
        } else if (direction == "DOWN") {
            if (i < n && matrix[i][j] == BIG_CONSTANT) {
                matrix[i][j] = k;
                i++;
                k++;
            } else {
                direction = "LEFT";
                j--;
                i--;
            }
        } else if (direction == "LEFT") {
            if (j >= 0 && matrix[i][j] == BIG_CONSTANT) {
                matrix[i][j] = k;
                j--;
                k++;
            } else {
                direction = "UP";
                i--;
                j++;
            }
        } else if (direction == "UP") {
            if (i >= 0 && matrix[i][j] == BIG_CONSTANT) {
                matrix[i][j] = k;
                i--;
                k++;
            } else {
                direction = "RIGHT";
                j++;
                i++;
            }
        }
    }
    printArray(matrix, n, m);
}