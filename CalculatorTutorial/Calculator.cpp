#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y) {

	// 計算方法で場合分け
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
