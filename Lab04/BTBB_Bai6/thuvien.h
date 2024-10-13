int Fib(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}

void FirstNFib(int n) {
	for (int i = 0; i < n; i++) {
		cout << Fib(i) << " ";
	}
}

void FibSmallerThanN(int n) {
	int i = 0;
	while (Fib(i) <= n) {
		cout << Fib(i++) << " ";

	}
}