#pragma once
#include<math.h>
#define TAB "\t"

bool KTraNgTo(unsigned int n) {
	if (n < 2) {
		return false;
	}
	else if (n <= 3) {
		return true;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void XuatNgTo(unsigned int n) {

	if (n < 2) {
		cout << 0;
	}
	else {
		int count = 0;

		for (int i = 2; i <= n; i++) {
			if (KTraNgTo(i)) {
				cout << i << TAB;

				count++;
			}
			if (count == 5) {
				cout << endl;
				count = 0;
			}
		}

	}
}

int SoLuongNgTo(unsigned int n) {
	int count = 0;

	if (n < 2) {
		return 0;
	}
	else {

		for (int i = 2; i <= n; i++) {
			if (KTraNgTo(i)) {
				count++;
			}
		}

	}

	return count;
}

int TongUocNgTo(unsigned int n) {
	int result = 0;

	if (KTraNgTo(n)) {
		return n;
	}

	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0 && KTraNgTo(i)) {
			result += i;
		}
	}

	return result;
}

void PhanTichThuaSoNgTo(unsigned int n) {
	unsigned int new_n = n;
	if (KTraNgTo(n)) {
		cout << n;
		return;
	}

	int i = 2;

	while (i * i <= n) {
		if (KTraNgTo(i) && new_n % i == 0) {
			cout << i << " ";
			new_n /= i;
		}
		else {
			i++;
		}
	}
}