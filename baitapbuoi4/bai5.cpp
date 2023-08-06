#include <iostream>
using namespace std;

// e) Tìm số đảo của n 

int timSND(int n) {
    int songhichdao = 0;

    while (n != 0) {
        int digit = n % 10; 
        songhichdao = songhichdao * 10 + digit; 
        n /= 10; 
    }

    return songhichdao;
}

int main() {
    int n;

    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    int songhichdao = timSND(n);
    cout << "Cac chu so nghich dao cua so " << n << " la: " << songhichdao << endl;

    return 0;
}
