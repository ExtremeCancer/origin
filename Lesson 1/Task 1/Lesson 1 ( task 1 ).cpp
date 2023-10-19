#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("in.txt");
    std::ofstream outputFile("out.txt");

    if (!inputFile || !outputFile) {
        std::cout << "Failed to open files." << std::endl;
        return 1;
    }

    int n, m;
    inputFile >> n;

    int* arrayN = new int[n];
    for (int i = 0; i < n; i++) {
        inputFile >> arrayN[i];
    }

    inputFile >> m;

    int* arrayM = new int[m];
    for (int i = 0; i < m; i++) {
        inputFile >> arrayM[i];
    }

    // Сдвигаем элементы массива M вправо
    int lastElementM = arrayM[m - 1];
    for (int i = m - 1; i > 0; i--) {
        arrayM[i] = arrayM[i - 1];
    }
    arrayM[0] = lastElementM;

    // Сдвигаем элементы массива N влево
    int firstElementN = arrayN[0];
    for (int i = 0; i < n - 1; i++) {
        arrayN[i] = arrayN[i + 1];
    }
    arrayN[n - 1] = firstElementN;

    // Записываем массивы в выходной файл
    outputFile << m << std::endl;
    for (int i = 0; i < m; i++) {
        outputFile << arrayM[i] << " ";
    }
    outputFile << std::endl;

    outputFile << n << std::endl;
    for (int i = 0; i < n; i++) {
        outputFile << arrayN[i] << " ";
    }
    outputFile << std::endl;

    // Освобождаем память
    delete[] arrayN;
    delete[] arrayM;

    // Закрываем файлы
    inputFile.close();
    outputFile.close();

    return 0;
}