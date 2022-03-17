#include <math.h>
#include <string>
#include <locale>
#include <codecvt>
#include <vector>

namespace Math {
	float Add(float num1, float num2);
	float Subtract(float num1, float num2);
	float Multiply(float num1, float num2);
	float Divide(float num1, float num2);
	bool IsPrime(int num1);
	float Sqrt(float num1);
	double Sin(double num1);
	double Cos(double num1);
	double Tan(double num1);
	int ToInt(std::string str);
	float ToFloat(std::string str);
	std::vector<int> Factor(int num);
}