#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    cout << "********************" << endl;
    cout << "Chú thích 'bài 1' thì là '1' tương ứng từ 1 tới 5" << endl;
    cout << "Bài từ 1 tới 5" << endl;
    cout << "********************" << endl;
    cout << "Bạn muốn thấy bài số mấy: ";
    int n;
    cin >> n;

    if (n==1)
    {
        cout << "Mời bạn nhập số xe gồm 4 chữ số: ";
            int soxe;
            cin >> soxe;
            int tong = 0;
            int temp = soxe;

            for (int i = 0; i < 4; i++)
            {
                int chuso = temp % 10;
                tong += chuso;
                temp = temp / 10;
            }

            cout << "Số xe của bạn là: " << soxe << endl;
            cout << "Tổng các chữ số của xe là: " << tong << endl;
    }
    else if(n == 2){
        cout<<"mời bạn nhập 1 kí tự thường: ";
        char nhap;
        cin>>nhap;
        char kitu;
        if (islower(nhap)){
            kitu= toupper(nhap);
        }
        cout <<"kí tự sau khi chuyển đôi là: "<<kitu<<endl;
    }
    else if(n == 3){
        int a,b,c;
        cout <<"mời bạn nhập số nguyên thứ nhất: ";
        cin>>a;
        cout <<"mời bạn nhập số nguyên thứ hai: ";
        cin>>b;
        cout <<"mời bạn nhập số nguyên thứ ba: ";
        cin>>c;
        int sonhonhat = a;
        int solonnhat = a;
        //kiểm tra số nhỏ nhất
        if (b<sonhonhat)
        {
            sonhonhat = b;
        }
        if (c<sonhonhat){
            sonhonhat =c;
        }
        //kiểm tra số lớn nhất
        if(b>solonnhat){
            solonnhat = b;
        }
        if (c>solonnhat)
        {
            solonnhat = c;
        }
        cout<<"so lon nhat la: "<<solonnhat<<endl;
        
        cout<<"so be nhat la: "<<sonhonhat<<endl;
    }
    else if (n == 4){
        int a,b;
        int x;
        cout<<"nhập vào 2 số a và b: ";
        cin>>a>>b;
        if(a == 0 ){
            if (b == 0 )
            {
                cout <<"phương trình có vô số nghiệm" <<endl;
            }
            else {
                cout<<"phương trình vô nghiệm"<<endl;
            }
        
        
        }
        else{
            x = -b/a;
            cout<<"nghiệm của phương trình là: "<<x;
        }
    }else if (n==5)
    {
        int a,b,c;
        cout <<"mời bạn nhập số nguyên thứ nhất: ";
        cin>>a;
        cout <<"mời bạn nhập số nguyên thứ hai: ";
        cin>>b;
        cout <<"mời bạn nhập số nguyên thứ ba: ";
        cin>>c;
        if (a > b) {
        int temp = a;
        a = b;
        b = temp;
        }

        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        cout << "Các số đã được sắp xếp theo thứ tự tăng dần: " << a << ", " << b << ", " << c << endl;
        }
    else{
        cout<<"không có bài mà chọn";
    }
    return 0;
}