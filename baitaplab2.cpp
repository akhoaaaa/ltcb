#include <iostream>
#include <cmath>
#include <list>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cout<<"mời bạn nhập bài tập mà bạn chọn: 1--10: ";
    cin>>n;
    switch (n){
        case 1:{
            int soa,sob,a,b;
            int n;
            cout<<"mời bạn nhập số trong khoảng từ 10 tới 99: ";
            cin>>n;
            if (n>10 && n<=99)
            {
                soa = n%10;
                sob = n/10;
                a = soa * sob;
                b = (soa + sob) * 2;
                if (a == b)
                {
                    cout<<"số bạn nhập thỏa điều kiện: "<<n<<endl;
                }
                else{
                    cout<<"số bạn nhập không thỏa điều kiện";
                }
            }
            else{
                cout<<"số bạn nhập không thuộc trong khoản từ 10 tới 99 vui lòng nhập lại";
            }
            }
            break;
        case 2:{
            int n,so;
            cout<<"mời bạn nhập số nguyên n từ bàn phím: ";
            cin>>n;
            for (int i = 1; i < n; i++)
            {
                if (isPrime(i))
                {
                    cout<<i<<" ";
                }
            }
            break;
        }
        case 3:{
            for (int i = 1; i < 256; i++)
            {
                cout<<"ký tự: "<<char(i)<<"|| Mã ASCII: "<<i<<endl;
                if (i % 32==0)
                {
                    cout<<endl;
                }
            }
            break;
        }case 4: {
            int n,i,a,b;
            int so=0;
            cout<<"nhập số nguyên dương n: ";
            cin>>n;
            while (n>0)
            {
                int s = n%10;
                so = so * 10 + s;
                n = n / 10;
            }
            cout <<"số sau khi đảo ngược: "<<so<<endl;
            break;
        }
        case 5:{
            int n;
            cout<<"nhập vào số n: ";
            cin>>n;
            int demso = 0;
            for (int i = 0; n>0; i++)
            {   
                n = n /10;
                demso++;
            }
            int cong = 0;
            for (int i = 0; n>0; i++)
            {
                cong = cong + n %10;
                n = n /10;
            }
            cout<<"số lượng chữ số là: "<<demso<<endl;
            cout<<"tổng của số: "<<" "<<cong<<endl; 
        }break;
        case 7:{
            int ngaythue;
            char phong;
            double A = 250.000;
            double B = 200.000;
            double C = 150.000;
            double giatien,giatiensaugiam;
            cout<<"mời bạn nhập vào số ngày muốn thuê: "<<endl;
            cin>>ngaythue;
            cout<<"mời bạn chọn phòng muốn thuê: "<<endl;
            cin>>phong;
            switch (phong)
            {
            case 'A':{
                if (ngaythue>12)
                {
                    giatien = (ngaythue * A);
                    giatiensaugiam = giatien*(100-10) /100;
                    cout<<"Giá tiền sau giảm là: "<<giatiensaugiam;
                }else{
                    giatien = A * ngaythue;
                    cout<<"số tiền là: "<<giatien;
                }
                break;
            }
            case 'B':{
                if (ngaythue>12)
                {
                    giatien = (ngaythue *B);
                    giatiensaugiam = giatien*(100-8) /100;
                    cout<<"số tiền thuê là: "<<giatiensaugiam;
                }else{
                    giatien = B * ngaythue;
                    cout<<"số tiền thuê là: "<<giatien;
                }
            }break;
            case 'C':{
                if (ngaythue>12)
                {
                    
                    giatien = (ngaythue *C);
                    giatiensaugiam = giatien*(100-8) /100;
                    cout<<"số tiền thuê là: "<<giatiensaugiam;
                }
                else{
                    giatien = C * ngaythue;
                    cout<<"số tiền thuê là: "<<giatien;
                }
            }break;
            default:{
                cout<<"câu bạn chọn không có: ";
            }
            }break;
        }
        case 8:
    {
        int ngay, thang, nam;
        cout << "Nhap ngay : ";
        cin >> ngay;
        cout << "Nhap thang : ";
        cin >> thang;
        cout << "Nhap nam : ";
        cin >> nam;

        if (ngay < 1 || ngay > 31)
        {
            cout << "ngay khong hop le";
        }
        else
        {
            if (thang < 1 || thang > 12)
            {
                cout << "thang khong hop le";
            }
            else
            {
                switch (thang)
                {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                {
                    cout << "Thang " << thang << "co 31 ngay";
                }
                break;
                case 2:
                {
                    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
                    {
                        cout << "Thang " << thang << " co 29 ngay.";
                    }
                    else
                    {
                        cout << "Thang " << thang << " co 28 ngay.";
                    }
                }
                break;
                case 4:
                case 6:
                case 9:
                case 11:
                {
                    cout << "Thang " << thang << " co 30 ngay.";
                }
                break;
                }
                int ngayTruoc = ngay - 1;
                if (ngayTruoc < 1)
                {
                    ngayTruoc = 31;
                    thang--;
                    if (thang < 1)
                    {
                        thang = 12;
                        nam--;
                    }
                }
                cout << "Ngay hom truoc cua ngay " << ngay << " la " << ngayTruoc << endl;
            }
        }
    }

        }
}
