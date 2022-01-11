#include <iostream>
/*
Задание 22

1. Дана матрица размера M × N. Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.
2. Дана матрица размера M × N. Поменять местами столбцы, содержащие минимальный и максимальный элементы матрицы.
3. Дана матрица размера M × N (M и N — четные числа). Поменять местами левую верхнюю и правую нижнюю четверти матрицы
4. Дана матрица размера M × N. Упорядочить ее строки так, чтобы их первые элементы образовывали возрастающую последовательность
5. Дана квадратная матрица A порядка M. Найти сумму элементов каждой ее диагонали, параллельной главной (начиная с одноэлементной диагонали)

Каждая задача сделана в отдельном классе
*/

class z1
{
private:
    int n, m;
    int** a;

public:

    z1(int mt = 9, int size = 9, int k = 1) {
        m = mt;
        n = size;
        a = new int* [m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = 10 * i + j + 1;
            }
        }
    }


    void print_arr() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << a[i][j] << ' ';
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    void foo() {
        int p, min, max;
        for (int i = 0; i < m; i++) {
            min = -1;
            max = -1;
            for (int j = 0; j < n; j++) {
                if (min == -1 || a[i][min] > a[i][j]) {
                    min = j;
                }
                if (max == -1 || a[i][max] < a[i][j]) {
                    max = j;
                }
            }
            p = a[i][min];
            a[i][min] = a[i][max];
            a[i][max] = p;

        }
    }
};

class z2
{
private:
    int n, m;
    int** a;

public:

    z2(int mt = 9, int size = 9, int k = 1) {
        m = mt;
        n = size;
        a = new int* [m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = 10 * i + j + 1;
            }
        }
    }


    void print_arr() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << a[i][j] << ' ';
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    void foo() {
        int p, min = -1, max = -1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (min == -1 || a[i][min] > a[i][j]) {
                    min = j;
                }
                if (max == -1 || a[i][max] < a[i][j]) {
                    max = j;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            p = a[i][min];
            a[i][min] = a[i][max];
            a[i][max] = p;
        }
    }
};

class z3
{
private:
    int n, m;
    int** a;

public:

    z3(int mt = 8, int size = 8, int k = 1) {
        m = mt;
        n = size;
        a = new int* [m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = 10 * i + j + 1;
            }
        }
    }


    void print_arr() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << a[i][j] << ' ';
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    void foo() {
        int p, min = -1, max = -1;
        for (int i = 0; i < m/2; i++) {
            for (int j = 0; j < n/2; j++) {
                p = a[i][j];
                a[i][j] = a[m - 1 - i][n - 1 - j];
                a[m - 1 - i][n - 1 - j] = p;
            }
        }
    }
};

class z4
{
private:
    int n, m;
    int** a;

public:

    z4(int mt = 8, int size = 8, int k = 1) {
        m = mt;
        n = size;
        a = new int* [m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = 10 * i + j + 1;
            }
        }
    }


    void print_arr() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << a[i][j] << ' ';
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    void foo() {
        for (int i = 0; i < m; i++) {
            int min = i;
            for (int k = i + 1; k < m; k++) {
                if (a[min][0] > a[k][0]) {
                    min = k;
                }
            }
            int p;
            for (int j = 0; j < n; j++) {
                p = a[i][j];
                a[i][j] = a[min][j];
                a[min][j] = p;
            }
        }
       
    }
};

class z5
{
private:
    int n;
    int** a;

public:

    z5(int size = 8, int k = 1) {
        n = size;
        a = new int* [n];
        for (int i = 0; i < n; i++) {
            a[i] = new int[n];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = 10 * i + j + 1;
            }
        }
    }


    void print_arr() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << a[i][j] << ' ';
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    void foo() {
        int i = 0, j = 0;
        while (i != n - 1 or j != n) {
            int s = 0;
            for (int m = i, k = j; m > -1 && k < n; m--, k++) {
                s += a[m][k];
            }

            std::cout << s << "\n";

            if (i == n - 1) {
                j++;
            }
            else {
                i++;
            }
        }
    }
};




int main()
{
    setlocale(LC_ALL, "rus");

    z5 first;
    first.print_arr();
    first.foo();

    std::cout << "Hello World!\n";
}