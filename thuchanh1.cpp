
#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    cout<<"********************"<<endl;
    cout<<"chú thích 'bài 1' thì là '1' tương ứng từ 1 tới 10 "<<endl;
    cout<<"từ case 1 tới 5 là cơ bản"<<endl;
    cout<<"từ case 6 tới 9 là cơ bản bonus"<<endl;
    cout<<"10 là bài tính giờ phút giây"<<endl;
    cout<<"các bài còn lại là bài ứng dụng theo thứ tự"<<endl;
    cout<<"********************"<<endl;
    cout<<"Bạn muốn thấy bài số mấy: ";
    int n;
	cin >> n;
	switch (n) {
	case 1:
	 cout << " ************************** " <<endl;
     cout << " *     THAO CHUONG BANG   *" <<endl;
     cout << " *         NGON NGU C     *" <<endl;
     cout << " **************************" <<endl;
		break;
	case 2:
	   cout << "nhập năm sinh của bạn ";
       int nam,tuoi;
       cin >> nam;
       tuoi = 2023 - nam;
       cout << "tuổi của bạn là " << tuoi << endl;
    
       
	    break;
	case 3:
        char ch;
        int ascii;
        int number;
        cout << "Nhập một kí tự hoặc số: ";
        if( cin >> ch){
           
            ascii = ch;
            cout << "Mã ASCII của kí tự '" << ch << "' là: " << ascii << endl;
        
        }
        break;
	case 4:
		float c,r,s,pi;
		pi = 3.14;
		int chon;
		cout <<"Nhập bán kính hình tròn: ";
		cin>>r;
		cout<<"hãy điền 1 tượng trưng cho chu vi hoặc 2 tượng trưng cho diện tích: ";
		cin>>chon;
		switch (chon) {
	    case 1:
		c = (r * 2) * pi;
		cout<<"chu vi của hình tròn là " << c;
		break;
	    case 2:
	    s = pow(r, 2) * pi;
	    cout<<"diện tích của hình tròn là " << s;
        break;
		}
	    break;

	case 5:
		int a,b;
		cout<<"nhập số a: ";
		cin>>a;
		cout<<"nhập số b: ";
		cin>>b;
		if(a > b){
		    cout<<"số a lớn hơn b";
		    
		}else{
		     cout<<"số b lớn hơn a";
		}
		
		break;
	case 6:
	    cout<<"Ho ten:......................................."<<endl;
	    cout<<"Ma so sinh vien:.............................."<<endl;
	    cout<<"Lop:.........................................."<<endl;
	    cout<<"So dien thoai: ...............Gioi tinh:......"<<endl;
        break;
    case 7:{
        string mssv,hovaten,lop,khoa,namhoc;
        float mon1,mon2,mon3,mon4,mon5,diemtb;
        cout<<"Hãy nhập MSSV: "<<endl;
        cin>>mssv;
        cout<<"Hãy nhập họ và tên: "<<endl;
        cin>>hovaten;
        cout<<"Hãy nhập lớp: "<<endl;
        cin>>lop;
        cout<<"Hãy nhập khoa: "<<endl;
        cin>>khoa;
        cout<<"Hãy nhập năm học: "<<endl;
        cin>>namhoc;
        cout<<"Hãy nhập môn 1: "<<endl;
        cin>>mon1;
        cout<<"Hãy nhập môn 2: "<<endl;
        cin>>mon2;
        cout<<"Hãy nhập môn 3: "<<endl;
        cin>>mon3;
        cout<<"Hãy nhập môn 4: "<<endl;
        cin>>mon4;
        cout<<"Hãy nhập môn 5: "<<endl;
        cin>>mon5;
        cout<<"BAI TAP THUC HANH MON LAP TRINH C++"<<endl;
        cout<<"*************TUAN 1****************"<<endl;
        cout<<"MSSV: "<<mssv<<endl;
        cout<<"Ho va ten: "<<hovaten<<endl;
        cout<<"Lop: "<<lop<<endl;
        cout<<"Khoa: "<<khoa<<endl;
        cout<<"Nam hoc: "<<namhoc<<endl;
        cout<<"***BANG DIEM ***"<<endl;
        cout<<"Mon 1: "<<mon1<<endl;
        cout<<"Mon 2: "<<mon2<<endl;
        cout<<"Mon 3: "<<mon3<<endl;
        cout<<"Mon 4: "<<mon4<<endl;
        cout<<"Mon 5: "<<mon5<<endl;
        diemtb = (mon1+mon2+mon3+mon4+mon5) / 5;
        cout<<"Diem TB: "<<diemtb<<endl;
    }  break;
    case 8:{
        int a,b,nguyen,du;
        cout<<"nhập vào số nguyên dương a: ";
        cin>>a;
        cout<<"nhập vào số nguyên dương b: ";
        cin>>b;
        nguyen = a / b;
        du = a % b;
        cout<<"phần nguyên của a chia b = "<<nguyen<<endl;
        cout<<"phần dư của a chia b = "<<du<<endl;
        
    }break;
    case 9:{
        int so;
        cout << "Nhập vào một số nguyên có 2 chữ số: ";
        cin >> so;
        int sodau = so / 10;
        int sosau = so % 10;
        int tong = sodau + sosau;
        cout << "Tổng của hai chữ số là: " << tong << endl;
    }break;
    case 10:{
        // int tonggiay,gio,phut,giay;
        // cout<<"hãy nhập vào tổng số giây: "
        // cin<<tonggiay;
        // gio = tonggiay / ;
        // phut = giay/60;
        // cout<<"Chuyển đổi từ giây sang phút "
        int tonggiay;
        cout << "Nhập tổng số giây: ";
        cin >> tonggiay;
        int gio = tonggiay / 3600;
        int phut = (tonggiay / 3600) / 60;
        int giay = (tonggiay % 3600) % 60;
    
        cout << "kết quả: " << gio << " giờ, " << phut << " phút, " << giay << " giây" << endl;
    }break;
    case 11:{
        float pi,r,s,v;
        pi = 3.14;
        cout<<"nhập bán kính hình cầu: ";
        cin>>r;
        s = 4 * pi * pow(r,2);
        cout<<"diện tích của hình cầu là: " <<s<<endl;
        v = (4/3) * pi * pow(r,3);
        cout<<"thể tích của hình cầu là: " <<v<<endl;
    }break;
	default:
		cout << "Không có bài mà bạn chọn";
	}
	return 0;
}
