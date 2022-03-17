#include "Math.h"

float Math::Add(float num1, float num2) {
	return num1 + num2;
}

float Math::Subtract(float num1, float num2) {
	return num1 - num2;
}

float Math::Divide(float num1, float num2) {
	return num1 / num2;
}

float Math::Multiply(float num1, float num2) {
	return num1 * num2;
}

bool Math::IsPrime(int num1) {
    int flag;
    int m = num1 / 2;
    for (int i = 2; i <= m; i++)
    {
        if (num1 % i == 0)
        {
            return false;
            flag = 1;
        }
    }
    if (flag == 0)
        return true;
    return 0;
}

float Math::Sqrt(float num1) {
	return sqrt(num1);
}

double Math::Sin(double num1) {
    return sin(num1);
}

double Math::Cos(double num1) {
    return cos(num1);
}

double Math::Tan(double num1) {
    return tan(num1);
}

int Math::ToInt(std::string str) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wide = converter.from_bytes(str);
    size_t wsize = wide.size();
    return std::stoi(wide, &wsize);
}

float Math::ToFloat(std::string str) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wide = converter.from_bytes(str);
    size_t wsize = wide.size();
    return std::stof(wide, &wsize);
}

std::vector<int> Math::Factor(int num) {
    std::vector<int> factors;

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0)
            factors.push_back(i);
    }

    return factors;
}