#include <iostream>
#include <cmath>

using namespace std;
void tinhsonho(int a, int b){
    int sonho = min(a,b);
    cout <<"số nhỏ nhất là: "<<sonho;
}
void uocchunglonnhat (int a, int b){
    if (a==0 || b == 0){
        cout <<a+b;
    }
    while (a != b )
    {
        if (a>b)
        {
            int uocchunglonnhat = a - b;
            cout<<"ước chung lớn nhất là: "<<uocchunglonnhat<<endl;
            break;
        }
        else
        {
            int uocchunglonnhat = b - a;
            cout<<"ước chung lớn nhất là: "<<uocchunglonnhat<<endl;
            break;
        }
    }
}
void boichungnhonhat (int a, int b){
    int maxB = a * b;
    int BCNN;
    for (int i = max(a,b); i <= maxB; i++)
    {
        if (i%a == 0 && i % b == 0)
        {
            BCNN = i;
            break;
        }
        
    }
    cout <<"BCNN là: của "<<a<<" và "<<b<<" là: "<<BCNN; 
}
void tinhgiaithua(int n){
    int giaithua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaithua = giaithua * i;
    }
    cout <<"tổng của giai thừa là: "<<n <<"! là: " <<giaithua;
}

void tong(int n, int a) {
    if (a > n) {
        cout << "Khong the tinh toan vi k lon hon n" << endl;
        return;
    }

    long c = a / (tinhgiaithua(a) * tinhgiaithua(n - a));
    cout << "C(k, n) = " << c << endl;
}

bool sohoanthien(int num) {
    int sum = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i; 
            }
        }
    }

    return sum == num;
}

void inra(int n) {
    cout << n << " ";

    if (sohoanthien(n)) {
        cout << "la so hoan thien." << endl;
    } else {
        cout << "khong la so hoan thien." << endl;
    }

    cout << "Cac so hoan thien nho hon " << n << " la: ";

    for (int i = 2; i < n; i++) {
        if (sohoanthien(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}
int main()
{
    cout << "********************" << endl;
    cout << "Chú thích 'bài 1' thì là '1' tương ứng từ 1 tới 5" << endl;
    cout << "Bài từ 1 tới 5" << endl;
    cout << "********************" << endl;
    cout << "Bạn muốn thấy bài số mấy: ";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:{
        int a,b;
        cout <<"nhập vào 2 số a và b: ";
        cin >>a>>b;
        tinhsonho(a,b);
        break;
    }
    case 2: {
        int a,b;
        cout<<"nhập vào 2 số a và b: ";
        cin>>a>>b;
        uocchunglonnhat(a,b);
        boichungnhonhat(a,b);
        break;
    }
    case 3: {
        int n;
        cout<<"nhập vào giai thừa cần tính: ";
        cin >>n;
        tinhgiaithua(n);
        break;
    }
    case 4: {
        int x,n,s;
        cout<<"nhập x";
        cin>>x;
        cout<<"nhập n";
        cin>>n;
        s = pow(x,n);
        cout<<s;
    }case 5: {
    int n, k;
        cout << "Nhap so n: ";
        cin >> n;
        cout << "Nhap so k: ";
        cin >> k;
        tong(n, k);
    }
    case 6: {
        int n;
        cout << "Nhap so n: ";
        cin >> n;

        inra(n);
    }
    
    default:{
        cout<<"không có bài mà bạn chọn vui lòng chọn lại: ";
    }
        break;
    }
}