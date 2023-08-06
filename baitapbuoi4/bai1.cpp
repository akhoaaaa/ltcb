#include <iostream>
using namespace std;

// a) Đếm số lượng chữ số 

int demChuSo(int n) {
    int count = 0;
    
    if (n == 0) {
        return 1;
    }

    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int n;

    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    int count = demChuSo(n);
    cout << "So luong chu so cua so " << n << " la: " << count << endl;

    return 0;
}
