#include "util.hpp"

using namespace std;

void clamp_test() {
	int vi = 50;
	cout << "int:" << endl;
	cout << " 2 : 60 = " << clamp(vi, 2, 60) << endl;
	cout << "60 : 90 = " << clamp(vi, 60, 90) << endl;
	cout << "20 : 30 = " << clamp(vi, 20, 30) << endl;

	cout << endl;

	float vf = 50.548;
	cout << "float:" << endl;
	cout << "    2.f :    60.f = " << clamp(vf, 2.f, 60.f) << endl;
	cout << "60.077f :    90.f = " << clamp(vf, 60.077f, 90.f) << endl;
	cout << "   20.f : 30.429f = " << clamp(vf, 20.f, 30.429f) << endl;

	cout << endl;

	double vd = 50.548;
	cout << "double:" << endl;
	cout << "    2. :    60. = " << clamp(vd, 2., 60.) << endl;
	cout << "60.077 :    90. = " << clamp(vd, 60.077, 90.) << endl;
	cout << "   20. : 30.429 = " << clamp(vd, 20., 30.429) << endl;

	cout << endl;
}

void trim_test() {
	std::string str[] = {
		"       test test       ",
		"                   test",
		"test                   ",
		"test               test",
		"test",
		" test",
		"test "
	};

	for (int i = 0; i < 7; i++) {
		cout << "left: <" << trimLeft(str[i]) << ">" << endl;
	}

	cout << endl;

	for (int i = 0; i < 7; i++) {
		cout << "right: <" << trimRight(str[i]) << ">" << endl;
	}

	cout << endl;

	for (int i = 0; i < 7; i++) {
		cout << "both: <" << trim(str[i]) << ">" << endl;
	}

	cout << endl;
}

void split_test() {
	std::string str[] = {
		"test test test",
		"  test test test",
		"test test test  ",
		" test test test",
		"test test test "
	};

	for (int i = 0; i < 5; i++) {
		auto splitted = split(str[i], ' ');
		cout << "string " << i << ":" << endl;
		for (auto s : splitted) {
			cout << "<" << s << ">" << endl;
		}
		cout << endl;
	}

	cout << endl;
}

int main() {
	clamp_test();
	trim_test();
	split_test();
	
	return 0;
}
