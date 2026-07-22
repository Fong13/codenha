const int MAX = 1000000;
int a[MAX];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dem = 0;

    // Ð?m s? nguyên t?
    for (int i = 0; i < n; i++) {
        if (a[i] >= 2) {
            bool nt = true;
            for (int j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    nt = false;
                    break;
                }
            }
            if (nt) dem++;
        }
    }

    cout << dem << endl;

    // In các s? nguyên t?
    for (int i = 0; i < n; i++) {
        if (a[i] >= 2) {
            bool nt = true;
            for (int j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    nt = false;
                    break;
                }
            }
            if (nt)
                cout << a[i] << " ";
        }
    }

    return 0;
}
