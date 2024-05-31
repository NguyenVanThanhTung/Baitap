Phan A:
    Bai 1:
        # include <bits/stdc++.h>

        using namespace std;

        char *concat(const char* con , const char* cat){
            int len1(0), len2(0);
            while(con[len1]!= '\0' && cat[len2]!= '\0'){
                if(con[len1]!= '\0'){
                    len1++;
                }
                if(cat[len2]!= '\0'){
                    len2++;
                }
            }
            char *result = new char[len1+len2+3];
            strcpy(result, con);
            strcat(result, cat);
            return result;
        }

        int main(){
            const char* con = "HELLO";
            const char* cat = "HI";
            char *conca = concat(con, cat);
            for(int i=0; conca[i]!= '\0'; i++){
                cout << conca[i];
            }
            delete[] con;
            delete[] cat;
            delete[] conca;
        }
    Bai 2:
        int* p = new int;
        int* p2 = p;
        *p = 10;
        delete p;
        *p2 = 100;
        cout << *p2;
        delete p2;
        Nhan xet: loi o cho *p2 =100 vi sau khi delete p r thi p2 se tro den bo nho da duoc giai phong, khong xac dinh va gay loi
    Bai 3:
        char* a = new char[10];
        char* c = a + 3;
        for (int i = 0; i < 9; i++) a[i] = 'a';
        a[9] = '\0';
        cerr <<"a: " << "-" << a << "-" << endl;
        cerr <<"c: " << "-" << c << "-" << endl;
        delete c;
        cerr << "a after deleting c:" << "-" << a << "-" << endl;
        Nhan xet: loi o cho chi co the delete con tro cap phat dong. khien cho dong lenh sau k thuc thi.
    Bai 4:
        int a = 10;
        int* ptr = &a;
        delete ptr;
Phan C:
    Bai 1:
        # include <bits/stdc++.h>

        using namespace std;

        char* reverse(char* a){
            int n =0;
            for(;a[n] != '\0'; n++){
            }
            char* result = new char[n+1];
            strcpy(result, a);
            for(int i=0; i<=(n-1)/2; i++){
                char temp = result[i];
                result[i] = result[n-1-i];
                result[n-1-i] = temp;
            }
            return result;
        }

        char* delete_char(char *a, char c){
            int n =0;
            for(;a[n] != '\0'; n++){
            }
            char* result = new char[n+1];
            strcpy(result, a);
            for(int i=0; i<=n; i++){
                if(result[i] == c){
                    for(int j=; i<=n; i++){
                        result[i] = result[i+1];
                    }
                }
            }
            return result;
        }

        char* pad_right(char *a, int n){
            char* result = new char[n+1];
            strcpy(result, a);
            for(int i=0; i<n; i++){
                if(result[i] == '\0'){
                    result[i] = ' ';
                    result[i+1] = '\0';
                }
            }
            return result;
        }

        char* pad_left(char *a, int n){\
            char* result = new char[n+1];
            strcpy(result, a);
            for(int i=0; i<n; i++){
                if(result[i] == '\0'){
                    for(int j=i; j>0; j--){
                        result[j] = result[j-1];
                    }
                    result[0] = ' ';
                    result[i+1] = '\0';
                }
            }
            return result;
        }

        char* runcate(char *a, int n){
            int len =0;
            for(;a[len] != '\0'; len++){
            }
            char* result = new char[len+1];
            strcpy(result, a);
            for(int i =0; i<len; i++){
                if(i>=n){
                    result[i] = '\0';
                }
            }
        }

        char* trim_left(char *a){
            int n =0;
            for(;a[n] != '\0'; n++){
            }
            char* result = new char[n+1];
            strcpy(result, a);
            for(int i=0; i<n; i++){
                if(result[i] == ' '){
                    for(int j=0; j<n; i++){
                        result[j] = result[j+1];
                    }
                }
            }
            return result;
        }

        char* trim_right(char *a){
            int n =0;
            for(;a[n] != '\0'; n++){
            }
            char* result = new char[n+1];
            strcpy(result, a);
            for(int i=0; i<n; i++){
                if(result[i] == ' '){
                    for(int j=0; j<n; i++){
                        result[j] = result[j+1];
                    }
                }
            }
            return result;
        }

        int main(){
            char a[] = "Hello";
            char *b = reverse(a);
            cout << b << endl;
            char *c = delete_char(a, 'e');
            cout << c << endl;
            char*d = pad_right(a,6);
            cout << d << endl;
            char* e = pad_left(a,10);
            cout << e << endl;
            char* f = truncate(a,5);
            cout << f << endl;
            cout << a << endl;
            return 0;
        }
Phan D:
    Bai 1:
        Khai báo nào sau đây là không hợp lệ:
        i.	int *p = new int(10);
        ii.	int *p = new int[10];
        iii.	int *p = 10;
        iv.	int *p = NULL;
        Dap an: III

    Bai 2:
        Kết quả của a là bao nhiêu sau câu lệnh:
        int *p = new int[3]; p[0]=1; p[1]=2; p[2]=4; int a=&p[2]-&p[1]
        i.	2
        ii.	4
        iii.	1
        iv.	Trình dịch báo lỗi
        Dap an: II

    Bai 3:
        Phát biểu nào sau đây là không chính xác đối với mảng động
        i.	Cung cấp độ dài cho mảng động trước khi sử dụng
        ii.	Độ dài của mảng động có thể được thay đổi
        iii.	Phải cung cấp độ dài cho mảng động ngay khi khai báo
        Dap an: II

    Bai 4:
        Phát biểu nào sau là không đúng đối với truyền mảng động cho hàm
        i.	Là kiểu truyền địa chỉ
        ii.	Là kiểu truyền con trỏ
        iii.	Là kiểu truyền giá trị
        iv.	Là kiểu truyền tham chiếu
        Dap an: III

    Bai 5:
        Lời gọi hàm nào sau đây là không đúng
        void printPtr(int *p); void print(int p);
        i.	int a = 0; print(a);
        ii.	int *a = new int(0); print(a);
        iii.	int a = 0; printPtr(a);
        iv.	int *a = new int(0); printPtr(a);
        Dap an: II, III

    Bai 6:
        Cho các khai báo sau, những câu lệnh nào không đúng về cách lập trình:
        int *aPtr = new int(0); int *sPtr; int number = 4;
        i.	sPtr = aPtr;
        ii.	*sPtr = number;
        iii.	number = aPtr;
        iv.	aPtr = &number;
        Dap an: II, III

    Bai 7:
        Đoạn mã nào sau đây để in ra giá trị của một mảng động (con trỏ *p) N phần tử:
        i.	for (int i=0; i<N; i++) cout << p+i << “ “;
        ii.	for (int i=0; i<N; i++) cout << *p+i << “ “;
        iii.	for (int i=0; i<N; i++) cout << *(p+i) << “ “;
        iv.	for (int i=0; i<N; i++) cout << *p[i] << “ “;
        Dap an: III

    Bai 8:
        Kết quả đoạn mã sau là gì:
            int a=5, *p1, *p2;
            p1 = new int(10);
            p2 = new int(20);
            *p1 = a; p2 = &a; a++;
            cout << " " << *p1 << " " << *p2 << endl;
        i.	10 20
        ii.	5 5
        iii.	10 6
        iv.	5 6
        Dap an: IV

    Bai 9:
        Giá trị của *p sau đoạn mã sau là gì:
            void a(int *p) { *p++; }
            void b(int *p) { (*p)++; }
            void c(int p) { p++; }
            int main
            {
                int *p = new int(5);
                b(p); a(p); c(*p);
            }
        i.	5
        ii.	6
        iii.	7
        iv.	8
        Dap an: II

    Bai 10:
        Kết quả đoạn mã sau là gì:
            int *p1, *p2;
            p1 = new int;
            p2 = new int;
            *p1 = 10;
            *p2 = 20;
            cout << *p1 << " " << *p2;
            p1 = p2;
            cout << " " << *p1 << " " << *p2;
            *p1 = 30;
            cout << " " << *p1 << " " << *p2 << endl;
        i.	10 20 20 20 30 20
        ii.	10 20 10 20 30 30
        iii.	10 10 20 20 30 30
        iv.	10 20 20 20 30 30
        Dap an: IV

    Bai 11:
        Kết quả đoạn mã sau là gì:
            int *p1, *p2, *p3;
            p1 = new int(10); p2 = new int(20); p3 = new int(*p1 + *p2);
            p1 = p2; p2 = p3; p3 = p1;
            cout << *p1 << " " << *p2 << " " << *p3 << endl;
        i.	10 20 30
        ii.	20 30 10
        iii.	20 30 20
        iv.	30 20 10
        Dap an: III

    Bai 12:
        Câu lệnh nào trả về giá trị phần tử thứ 3 của mảng int *p = new int[10];
        i.	p+2;
        ii.	*p+2;
        iii.	*(p+2);
        iv.	*p[2];
        Dap an: III

    Bai 13:
        Phát biểu nào sau đây không đúng đối vởi mảng int *p = new int[5];
        i.	p là địa chỉ của p[0]
        ii.	*p là giá trị của p[0]
        iii.	*p+1  là giá trị của p[1]
        iv.	p+1 là địa chỉ của p[1]
        Dap an: III
