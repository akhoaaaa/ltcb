#include <iostream>
using namespace std;

// c) Tính tổng các chữ số chẳn

int tinhTongChuSoChan(int n) {
    int sum;
    sum = 0;
    while (n != 0) {
        int d = n % 10; 
        if (d % 2 == 0) {
            sum += d; 
        }
        n /= 10; 
    }
    return sum;
}

int main() {
    int n,sum;
    cout << "Nhap vao mot so nguyen: ";
    cin >> n;
    sum = tinhTongChuSoChan(n);
    cout << "Tong cac chu so chan cua n la : "<< sum << endl;
    return 0;
}
