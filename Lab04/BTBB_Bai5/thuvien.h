#define PRECISION 0.00001
double TimE(double x);
double TimSin(int x);
double TimCos(int x);
int TinhGiaiThua(int x);
int TinhSoMu(int base, int exponent);
int TinhSoMu(int base, int exponent)
{
	int kq = 1;

	for (int i = 1; i <= exponent; i++)
		kq *= base;

	return kq;
}

int TinhGiaiThua(int x)
{
	if (x < 2)
		return 1;
	else
		return x * TinhGiaiThua(x - 1);
}
double TimE(double x)
{
	double GiaTriTruoc, GiaTriSau = 0.0;
	int dem = 1;
	do
	{
		GiaTriTruoc = GiaTriSau;
		GiaTriSau += (double)TinhSoMu(x, dem) / TinhGiaiThua(dem);
		dem += 1;
	} while (GiaTriSau - GiaTriTruoc >= PRECISION);
	cout << "hello";
	return GiaTriSau;
}
double TriTuyetDoi(double x)
{
	if (x < 0)
		return -x;
	else
		return x;
}

double TimSin(int x)
{
	double GiaTriSinTruoc, GiaTriSinSau = 0;
	int count = 1, dem = 1;

	do
	{
		GiaTriSinTruoc = GiaTriSinSau;

		if (count % 2 == 0)
			GiaTriSinSau += ((double)TinhSoMu(x, dem) / (double)TinhGiaiThua(dem));
		else
			GiaTriSinSau -= ((double)TinhSoMu(x, dem) / (double)TinhGiaiThua(dem));
		count += 1;
		dem += 2;

	} while (TriTuyetDoi(GiaTriSinSau - GiaTriSinTruoc) >= PRECISION);

	return GiaTriSinSau;
}

double TimCos(int x)
{

	double GiaTriCosTruoc, GiaTriCocSau = 0;

	int mu = 0;
	do
	{
		GiaTriCosTruoc = GiaTriCocSau;
		if (mu % 2 == 0)
			GiaTriCocSau += ((double)TinhSoMu(x, mu) / (double)TinhGiaiThua(mu));
		else
			GiaTriCocSau -= ((double)TinhSoMu(x, mu) / (double)TinhGiaiThua(mu));
		mu += 2;
	} while (TriTuyetDoi(GiaTriCocSau - GiaTriCosTruoc) >= PRECISION);

	return GiaTriCocSau;

}