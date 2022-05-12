int BIG_CONSTANT = -1;

void printArray(auto& matrix, int n, int m) {
    std::cout << typeid(matrix).name() << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == BIG_CONSTANT)
                std::cout << "00 ";
            else {
                if (matrix[i][j] < 10)
                    std::cout << "0" << matrix[i][j] << " ";
                else
                    std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
}