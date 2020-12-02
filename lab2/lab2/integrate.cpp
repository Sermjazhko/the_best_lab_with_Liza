#include "integrate.h"


double k1(double x) { return x + 1; }

double k2(double x) { return x; }

double q1(double x) { return x; }

double q2(double x) { return x * x; }

double f1(double x) { return x; }

double f2(double x) { return exp(-x); }

double k1_test(double x) { return ksi + 1; }

double k2_test(double x) { return ksi; }

double q1_test(double x) { return ksi; }

double q2_test(double x) { return ksi * ksi; }

double f1_test(double x) { return ksi; }

double f2_test(double x) { return exp(-ksi); }

double f1_an(double x) { return (C1 * exp(sqrt_ksi_div * x) + C2 * exp(-sqrt_ksi_div * x) + 1); }

double f2_an(double x) { return (C_1 * exp(sqrt_ksi * x) + C_2 * exp(-sqrt_ksi * x) + exp(-ksi) / (ksi * ksi)); }

vector<double> calculation_a(int n, double (*k1)(double), double (*k2)(double))
{
	vector<double> result(n + 1);
	result[0] = 0;
	double x = 0;
	double h = 1. / n;
	for (int i = 1; i <= n; i++)
	{
		double x_next = x + h;
		if (x_next <= ksi)
			result[i] = k1(x + h * 0.5);
		else
			if (x >= ksi)
				result[i] = k2(x + h * 0.5);
			else
			{
				double temp = n * ((ksi - x) / k1(0.5 * (x + ksi)) + (x_next - ksi) / k2(0.5 * (x_next + ksi)));
				result[i] = 1 / temp;
			}
		x = x_next;
	}
	return result;
}

vector<double> calculation_d(int n, double (*q1)(double), double (*q2)(double))
{
	vector<double> result(n + 1);
	result[0] = 0;
	double h = 1. / n;
	double x = h * 0.5;
	for (int i = 1; i <= n - 1; i++)
	{
		double x_next = x + h;
		if (x_next <= ksi)
			result[i] = q1(x + h * 0.5);
		else
			if (x >= ksi)
				result[i] = q2(x + h * 0.5);
			else
				result[i] = n * ((ksi - x) * q1(0.5 * (x + ksi)) + (x_next - ksi) * q2(0.5 * (x_next + ksi)));
		x = x_next;
	}
	return result;
}

vector<double> calculation_f(int n, double (*f1)(double), double (*f2)(double))
{
	vector<double> result(n + 1);
	result[0] = 0;
	double h = 1. / n;
	double x = h * 0.5;
	for (int i = 1; i <= n - 1; i++)
	{
		double x_next = x + h;
		if (x_next <= ksi)
			result[i] = f1(x + h * 0.5);
		else
			if (x >= ksi)
				result[i] = f2(x + h * 0.5);
			else
				result[i] = n * ((ksi - x) * f1(0.5 * (x + ksi)) + (x_next - ksi) * f2(0.5 * (x_next + ksi)));
		x = x_next;
	}
	return result;
}

void diagonals(int n, vector<double>& bottom_d, vector<double>& center_d, vector<double>& upper_d, double (*k1)(double), double (*k2)(double), double (*q1)(double), double (*q2)(double))
{
	bottom_d = calculation_a(n, k1, k2);
	upper_d = bottom_d;
	center_d = calculation_d(n, q1, q2);
	bottom_d[1] *= (n * n);
	for (int i = 2; i < n + 1; i++)
	{
		bottom_d[i] *= (n * n);
		upper_d[i - 1] = bottom_d[i];
		center_d[i - 1] += bottom_d[i] + bottom_d[i - 1];
	}
	bottom_d[n] = 0;
	center_d[0] = 1;
	center_d[n] = 1;
	upper_d[n] = 0;
}

vector<double> free_comp(int n, double (*f1)(double), double (*f2)(double))
{
	vector<double> result = calculation_f(n, f1, f2);
	result[0] = 0;
	result[n] = 1;
	return result;
}

vector<double> progonka(int n, vector<double> bottom_d, vector<double> center_d, vector<double> upper_d, vector<double> free)
{
	vector<double> result(n + 1);
	vector<double> alpha(n + 1);
	vector<double> betta(n + 1);
	//	alpha[1] = 0;
	alpha[1] = upper_d[0];
	//	betta[1] = 0;
	betta[1] = free[0];
	for (int i = 2; i < n + 1; i++)
	{
		double temp = center_d[i - 1] - alpha[i - 1] * bottom_d[i - 1];
		alpha[i] = upper_d[i - 1] / temp;
		betta[i] = (free[i - 1] + betta[i - 1] * bottom_d[i - 1]) / temp;
	}
	//	result[n] = 1;
	result[n] = (free[n] + bottom_d[n] * betta[n]) / (1 - bottom_d[n] * alpha[n]);
	for (int i = n - 1; i >= 0; i--)
		result[i] = alpha[i + 1] * result[i + 1] + betta[i + 1];
	return result;
}

vector<double> fun(int n)
{
	vector<double> result(n+1);
	result[0] = 0;
	double x = 0;
	double h = 1. / n;
	for (int i = 1; i <= n; i++)
	{
		double x_next = x + h;
		if (x_next <= ksi)
			result[i] = f1_an(x);
		else
			result[i] = f2_an(x);
		x = x_next;
	}
	return result;
}