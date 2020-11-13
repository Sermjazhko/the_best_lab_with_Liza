#pragma once
#include <cmath>
#include <vector>

using namespace std;

const double ksi = 0.4;

//k1(x), 0 <= x < кси
double k1(double x);

//q1(x), 0 <= x < кси
double q1(double x);

//f1(x), 0 <= x < кси
double f1(double x);

//k2(x), кси < x <= 1
double k2(double x);

//q2(x), кси < x <= 1
double q2(double x);

//f2(x), кси < x <= 1
double f2(double x);

//k1*, 0 <= x < кси
double k1_test(double x);

//q1*, 0 <= x < кси
double q1_test(double x);

//f1*, 0 <= x < кси
double f1_test(double x);

//k2*, кси < x <= 1
double k2_test(double x);

//q2*, кси < x <= 1
double q2_test(double x);

//f2*, кси < x <= 1
double f2_test(double x);

//вычисляет коэффициенты ai - возвращает вектор размерности n+1
vector<double> calculation_a(int n, double (*k1)(double), double (*k2)(double));

//вычисляет коэффициенты di - возвращает вектор размерности n+1
vector<double> calculation_d(int n, double (*q1)(double), double (*q2)(double));

//вычисляет коэффициенты fi - возвращает вектор размерности n+1
vector<double> calculation_f(int n, double (*f1)(double), double (*f2)(double));

void diagonals(int n, vector<double>& bottom_d, vector<double>& center_d, vector<double>& upper_d, double (*k1)(double), double (*k2)(double), double (*q1)(double), double (*q2)(double));

vector<double> free_comp(int n, double (*f1)(double), double (*f2)(double));

//Для прогонки нужна такая матрица
//		 0 | 1 | 2 | 3 | . . . | i-1 |  i  | i+1 | . . . | n-1 |  n  |    | free|
//	0    1 |-x1| 0 | 0 | . . . |  0  |  0  |  0  | . . . |  0  |  0  |    |  m1 |
//	1    A1|-C1| B1| 0 | . . . |  0  |  0  |  0  | . . . |  0  |  0  |    | -f1 |
//	2	 0 | A2|-C2| B2| . . . |  0  |  0  |  0  | . . . |  0  |  0  |    | -f2 |
//  3    0 | 0 | A3|-C3| . . . |  0  |  0  |  0  | . . . |  0  |  0  |    | -f3 |
//	.
//	.
//	.
//  i-1  0 | 0 | 0 | 0 | . . . |-Ci-1| Bi-1|  0  | . . . |  0  |  0  |    |-fi-1|
//	i    0 | 0 | 0 | 0 | . . . |  Ai | -Ci |  Bi | . . . |  0  |  0  |    | -fi |
//  i+1  0 | 0 | 0 | 0 | . . . |  0  | Ai+1|-Ci+1| . . . |  0  |  0  |    |-fi+1|
//	.
//  .
//  .
//	n-1  0 | 0 | 0 | 0 | . . . |  0  |  0  |  0  | . . . |-Cn-1| Bn-1|    |-fn-1|
//  n    0 | 0 | 0 | 0 | . . . |  0  |  0  |  0  | . . . | -x2 |  1  |    |  m2 |
// в данной реализации прогонки
// n + 1 - размерность системы
// bottom_d - значения на нижней диагонали
// A1 - хранится в 1 ячейке, для сохранения индексов
// 0 ячейка не используется, в последней хранится не -x2, а x2 (без знака)
// center_d - значения на центральной диагонали
// в ячейках от 1 до n-1 хранятся коэффициенты C1, C2, . . ., Сn-1, без знака!
// в 0 и последней ячейках должна быть 1
// upper_d - значения на верхней диагонали
// последняя ячейка не используется, в 0 ячейке хранится не -x1, а x1 (без знака)
// free - значения свободного вектора
// в ячейках от 1 до n-1 хранятся коэффициенты f1, f2, . . ., fn-1, без знака!
// в 0 и последней ячейках должны быть m1 и m2 соответственно
vector<double> progonka(int n, vector<double> bottom_d, vector<double> center_d, vector<double> upper_d, vector<double> free);