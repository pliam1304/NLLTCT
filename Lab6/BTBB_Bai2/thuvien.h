#define		MAX		100
#define		TAB		'\t'

typedef int MaTran[MAX][MAX];

void XuLyMaTranXoanOc(MaTran a, int n);
void XuatMaTranXoanOc(MaTran a, int n);


void XuLyMaTranXoanOc(MaTran a, int n)
{
    int dem = 1;
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    while (h1 <= h2 && c1 <= c2) {
        for (int i = c1; i <= c2; i++) {
            a[h1][i] = dem; ++dem;
        }
        ++h1;
        for (int i = h1; i <= h2; i++) {
            a[i][c2] = dem; ++dem;
        }
        --c2;
        for (int i = c2; i >= c1; i--) {
            a[h2][i] = dem; ++dem;
        }
        --h2;
        for (int i = h2; i >= h1; i--) {
            a[i][c1] = dem; ++dem;
        }
        ++c1;
    }
}
void XuatMaTranXoanOc(MaTran a, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << TAB;
        }
        cout << endl;
    }
}