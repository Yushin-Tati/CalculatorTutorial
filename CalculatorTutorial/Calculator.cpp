#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y) {

	// ŒvŽZ•û–@‚Å•ªŠò
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
