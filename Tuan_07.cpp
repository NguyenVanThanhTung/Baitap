Phan A:
    Bai 2:
        # include <bits/stdc++.h>

        using namespace std;

        void printArr1(int arr[]){
            cout << sizeof(arr) <<endl;
        }

        void printArr2(int *arr){
            cout << sizeof(arr) <<endl;
        }

        int main(){
            int arr[10];
            cout << sizeof(arr) <<endl;
            printArr1(arr);
            printArr2(&arr[0]);
        }
        Nhan xet: voi kieu truyen tham chieu, ket qua cua arr la 40 va 8
                  voi kieu truyen dia chi, ket qua cua arr van la 40 va 8
    Bai 3:
        # include <bits/stdc++.h>

        using namespace std;

        int count_even(int *a, int n){
            int result=0;
            for(int i=0; i<n; i++){
               if(*a++ %2 ==0){
                   result ++;
               }
            }
            return result;
        }

        int main(){
            int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            cout << count_even(&arr[0], 10);
        }
    Bai 4:
        # include <bits/stdc++.h>

        using namespace std;

        int Find2Part(int *arr, int n, int x){
            int left = 0;
            int right = n-1;
            while(left <=right){
                int mid = (left+right)/2;
                if(arr[mid] == x){
                    return mid;
                } else {
                    if(arr[mid] >x){
                        right = mid--;
                    } else {
                        left = mid++;
                    }
                }
            }
            return -1;
        }

        int main(){
            int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            Find2Part(&arr[0], 10, 6);
        }
    Bai 5:
        # include <bits/stdc++.h>

        using namespace std;

        char* weird_string() {
           char c[] = “123345”;
           return c;
        }

        int main(){
            cout << weird_string();
        }
        Nhan xet: bien c la bien thanh vien dc khoi tao khi goi ham, khi ket thuc ham thi bien c dc giai phong, truy cap vao dia chi c gay loi nghiem trong

    Bai 6:
        # include <bits/stdc++.h>

        using namespace std;

        int main(int argc, const char * argv[]) {
            cout << "Number of command-line arguments: " << argc << endl;
            for (int i = 0; i < argc; i++) {
                cout << "Argument #" << i << ": _" << argv[i] << "_\n";
            }
            return 0;
        }
    Bai 1:
        # include <bits/stdc++.h>

        using namespace std;

        int main( ){
            char a[4] = "abc";
            for (char *cp = a; (*cp) != '\0'; cp++) {
               cout << (void*) cp << " : " << (*cp) << endl;
            }

            int arr[4] = { 0, 1, 2, 3 };
            for (int *cp = arr; cp != arr+4; cp++){
                cout <<  cp << " : " << (*cp) << endl;
            }

            double arr[4] = { 0.0, 1.0, 2.0, 3.0 };
            for (double *cp = arr; cp != arr+4; cp++){
                cout <<  cp << " : " << (*cp) << endl;
            }
            return 0;
        }
        Nhan xet: van chay dc voi kich thuoc kieu int va double, thay doi thanh cp+=2 thi in ra cac phan tu cach nhau 2 don vi trong mang
    Bai 2:
        # include <bits/stdc++.h>

        using namespace std;

        void swap_pointers(char* x, char* y){
           char *tmp;
           tmp = x;
           x = y;
           y = tmp;
        }
        int main()
        {
           char a[] = "I should print second";
           char b[] = "I should print first";

           char *s1 = a;
           char *s2 = b;
           swap_pointers(s1,s2);
           cout << "s1 is " << s1 << endl;
           cout << "s2 is " << s2 << endl;
           return 0;
        }
        Nhan xet: ham giong nhu truyen gia tri cua con tro theo kieu tham tri, phai truyen tham so thong qua **ptr

    Bai 3:
        # include <bits/stdc++.h>

        using namespace std;

        int main()  {
            char **s;
            char foo[] = "Hello World";
            *s = foo;
            printf("s is %s\n",s);
            s[0] = foo;
            printf("s[0] is %s\n",s[0]);
            return(0);
        }
        Nhan xet:
Phan B:
    Bai 1:
        Cho đoạn lệnh sau.
        char c = ‘A', d = ‘B';
        char* p1 = &c;
        char* p2 = &d;
        char* p3;
        Giả sử địa chỉ của c là 0x1234, địa chỉ của b là 0x5678. Hỏi output của đoạn lệnh sau là gì?
        p3 = &d;
        cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
        p3 = p1;
        cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
        *p1 = *p2;
        cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;
        Dap an: *p3 la gia tri cua d, p3 la dia chi cua d;
                *p3 la gia tri cua c, p3 la dia chi cua c;
                *p1 la gia tri cua d, p1 la dia chi cua c;

    Bai 2:
        Cho các lệnh sau.
        int *p;
        int i;
        int k;
        i = 4;
        k = i;
        p = &i;
        (Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
        k = 5;
        *k = 5;
        p = 5;
        *p = 5;
        Dap an: *p

    Bai 3:
        Giải thích lỗi sau:
        char c = ‘C';
        double *p = &c;
        Dap an: kieu du kieu con tro khac voi kieu du lieu no tro toi
Phan C:
    # include <bits/stdc++.h>

    using namespace std;

    void reverse(char* a){
        int n =0;
        for(;a[n] != '\0'; n++){
        }
        for(int i=0; i<=(n-1)/2; i++){
            char temp = a[i];
            a[i] = a[n-1-i];
            a[n-1-i] = temp;
        }
    }

    void delete_char(char *a, char c){
        int n =0;
        for(;a[n] != '\0'; n++){
        }
        for(int i=0; i<=n; i++){
            if(a[i] == c){
                for(int j=; i<=n; i++){
                    a[i] = a[i+1];
                }
            }
        }
    }

    void pad_right(char *a, int n){
        for(int i=0; i<=n; i++){
            if(a[i] == '\0'){
                a[i] = ' ';
                a[i+1] = '\0';
            }
        }
    }

    void pad_left(char *a, int n){
        for(int i=0; i<=n; i++){
            if(a[i] == '\0'){
                for(int j=i; j>0; j--){
                    a[j] = a[j-1];
                }
                a[0] = ' ';
                a[i+1] = '\0';
            }
        }
    }

    void runcate(char *a, int n){
        int len =0;
        for(;a[len] != '\0'; len++){
        }
        for(int i =0; i<=len; i++){
            if(i>=n){
                a[i] = '\0';
            }
        }
    }

    bool is_palindrome(char *a){
        int n =0;
        for(;a[n] != '\0'; n++){
        }
        for(int i=0; i<=(n-1)/2; i++){
            if(a[i] != a[n-1-i]){
                return false;
            }
        }
        return true;
    }

    void trim_left(char *a){
        int n =0;
        for(;a[n] != '\0'; n++){
        }
        for(int i=0; i<=n; i++){
            if(a[i] == ' '){
                for(int j=0; j<=n; i++){
                    a[j] = a[j+1];
                }
            }
        }
    }

    void trim_right(char *a){
        int n =0;
        for(;a[n] != '\0'; n++){
        }
        for(int i=0; i<=n; i++){
            if(a[i] == ' '){
                for(int j=0; j<=n; i++){
                    a[j] = a[j+1];
                }
            }
        }
    }

    int main(){
        char a[] = "Hahah";
        reverse(a);
        cout << a << endl;
        delete_char(a, 'e');
        cout << a << endl;
        pad_right(a,6);
        cout << a << endl;
        pad_left(a,10);
        cout << a << endl;
        truncate(a,5);
        cout << a << endl;
        return 0;
    }
Phan D:
    Cau 1:
        Câu lệnh nào sau đây thực hiện gán giá trị của n cho con trỏ *p
        int n = 5; int *p;
        i.	p = n;
        ii.	p = &n;
        iii.	*p = n;
        iv.	*p = &n;
        Dap an: II

    Cau 2:
        Câu lệnh nào sau đây thực hiện chỉ con trỏ *p1 vào vị trí con trỏ *p2 đang chỉ
        i.	*p1 = p2;
        ii.	p1 = *p2;
        iii.	p1 = p2;
        iv.	*p1 = *p2
        Dap an: III

    Cau 3:
        Đối với phép toán con trỏ, phát biểu nào sau đây có ý nghĩa lập trình
        i.	Phép nhân trên con trỏ kiểu int
        ii.	Phép cộng trừ trên con trỏ kiểu int
        iii.	Phép gán với con trỏ kiểu int
        iv.	Tất cả các phép toán với con trỏ kiểu int
        Dap an: IV

    Cau 4:
        Phát biểu nào sau đây chính xác
        i.	Phép cộng trừ với các con trỏ ở mảng khác nhau
        ii.	Phép cộng trừ với các con trỏ ở cùng mảng
        iii.	Tất cả các phép toán với các con trỏ ở cùng mảng (trong giới hạn mảng)
        iv.	Tất cả các phát biểu trên
        Dap an: III

    Cau 5:
        Phát biểu nào sau đây đúng với con trỏ tới hàm
        i.	Có thể được truyền vào trong trong
        ii.	Có thể được trả về bới hàm
        iii.	Có thể được lưu trong mảng
        iv.	Tất cả các phát biểu trên
        Dap an: IV

    Cau 6:
        Khai báo hàm nào sau đây không đúng
        i.	void bubble(int [], const int, bool (*) (int, int));
        ii.	void bubble(int [], const int, bool * (int, int));
        iii.	void bubble(int [], const int, (bool *) (int, int));
        iv.	void bubble(int [], const int, bool (* (int, int)));
        Dap an: II

    Cau 7:
        Kết quả đoạn mã sau là gì:
            int a[6] = {1, 2, 3};
            int *b; b = &a[0];
            for (int i=0; i<3; i++)
                switch (i%3) {
                    case 0: *(b+i) = a[i]; break;
                    case 1: *(b++) = a[i]; break;
                    case 2: *(++b) = a[i]++; break;
                }
            for (int i=0; i<3; i++) cout << a[i] << " ";
        i.	0 2 3
        ii.	2 2 0
        iii.	2 2 3
        iv.	3 0 3
        Dap an: III





