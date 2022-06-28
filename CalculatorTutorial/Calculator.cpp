#include <iostream>
#include "Calculator.h"


double Calculator::Calculate(double x, char oper, double y) {

	// 計算方法で分岐
	switch (oper) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}
