#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i < k || i >= m - k || j < k || j >= n - k) {
                cout << "*";  
            } else {
                cout << " "; 
            }
        }
        cout << endl; 
    }

    return 0;
}
