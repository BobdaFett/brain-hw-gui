#include "sin_form.h"
#include <cmath>
#include <sstream>

// Do not use the entire std namespace - it breaks the managed code. Instead, mention each part individually.
using std::stringstream;

// need to create some sort of function here but i totally forgot the name.

using namespace System;
using namespace System::Windows::Forms;
using namespace brainhwgui;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew sinform());
	return 0;
}

// TODO Make these work - these are just sums, not Taylor expansions.

double sinform::get_sinx(double a, double b, double n, double deltax) {
	double total = 0;

	for (int i = 0; i < n; i++) {
		double sum1 = a + (i * deltax);
		double sum2 = a + ((i + 1) * deltax);
		total += (sin(sum1) + sin(sum2)) / 2 * deltax;
	}

	return total;
}

double sinform::get_sinx2(double a, double b, double n, double deltax) {
	double total = 0;

	for (int i = 0; i < n; i++) {
		double sum1 = a + (i * deltax);
		double sum2 = a + ((i + 1) * deltax);
		total += (sin(pow(sum1, 2)) + sin(pow(sum2, 2))) / 2 * deltax;
	}

	return total;
}

double sinform::get_x2(double a, double b, double n, double deltax) {
	double total = 0;

	for (int i = 0; i < n; i++) {
		double sum1 = a + (i * deltax);
		double sum2 = a + ((i + 1) * deltax);
		total += (pow(sum1, 2) + pow(sum2, 2)) / 2 * deltax;
	}

	return total;
}