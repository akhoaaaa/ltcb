
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "*****************" << endl;
    cout << "BÀI TẬP LÝ THUYẾT BUỔI 2" << endl;
    cout << "*****************" << endl;
    cout << "Nhập vào 1 tương đương bài 1 (các bài còn lại tương tự)" << endl;
    cout << "Nhập bài bạn muốn chọn : " << endl;
    int c;
    cin >> c;
    switch (c)
    {
    case 1:
    {
        int n;
        double sum;

        cout << "Nhap vao so nguyen n: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            sum += 1.0 / (2 * i);
        }

        cout << "Tong cua day so la: " << sum << endl;
    }
    break;
    case 2:
    {
        int n;
        int luutich = 1;
        double s;

        cout << "Nhap vao so nguyen n: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            luutich *= i;
            s += 1.0 / luutich;
        }

        cout << "Tong cua day so la: " << s << endl;
    }
    break;
    case 3:
    {
        int n;

        cout << "Nhap vao so nguyen n (n < 100): ";
        cin >> n;

        cout << "Cac so nguyen to nho hon " << n << " la: ";

        for (int num = 2; num < n; num++)
        {
            bool check = true;

            for (int i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    check = false;
                    break;
                }
            }

            if (check)
            {
                cout << num << " ";
            }
        }

        cout << endl;
    }
    break;
    case 4:
    {
        int n;
        int s = 0;

        cout << "Nhap vao mot so nguyen duong: ";
        cin >> n;

        while (n > 0)
        {
            int a = n % 10;
            s += a;
            n /= 10;
        }

        cout << "Tong cac chu so cua so da nhap la: " << s << endl;
    }
    break;
    case 5:
    {

        int a, b;

        cout << "Nhap vao hai so nguyen duong a va b: ";
        cin >> a >> b;

        int ucln = 1;

        for (int i = 1; i <= min(a, b); i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                ucln = i;
            }
        }

        cout << "Uoc so chung lon nhat cua " << a << " va " << b << " la: " << ucln << endl;
    }
    break;
    default:
    {
        cout << "khong co bai ban chon";
    }
    break;
    }
}