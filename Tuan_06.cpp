Phan A:
    Bai 1:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int a[3];
            char b[4];
            cout << &a[0] << " " << &a[1] << " " << &a[2] << endl;
            cout << (void*)&b[0] << " " << (void*)&b[1] << " " << (void*)&b[2] << endl;
        }
        Nhan xet: Dia chi cua cac bien trong mang int cach nhau 4 bit, dia chi cac bien mang char cach nhau 1 bit.
    Bai 2:
        # include <bits/stdc++.h>

        using namespace std;

        int factorial(int x){
            cout << "x = " << x << " at: " << &x << endl;
            if(x ==0 || x ==1){
                return 1;
            } else {
                return x*factorial(x-1);
            }
        }

        int main(){
            int x = 5;
            cout << factorial(x);
        }
        Nhan xet: Dia chi cua cac bien x trong ham de quy lan luot cach nhau 16 bit, kích thước của một stack frame cho hàm factorial là x*32 bit voi kieu tra ve int, x*48 bit voi kieu tra ve long.
    Bai 3:
        # include <bits/stdc++.h>

        using namespace std;

        void tripperX(int x){
            x = x*3;
            cout << x << " " << &x << endl;
        }

        void quadraX(int &x){
            x = x*4;
            cout << x << " " << &x << endl;
        }

        int main(){
            int x(1);
            tripperX(x);
            cout << x << " " << &x << endl << endl;
            quadraX(x);
            cout << x << " " << &x << endl << endl;
        }
        Nhan xet: Truyen tham tri chi copy nong gia tri cua bien, dia chi cua bien x trong ham va bien x ban dau khac nhau, truyen tham chieu thi truyen truc tiep dia chi bien nen bien trong ham va ngoai la 1.
    Bai 4:
        # include <bits/stdc++.h>

        using namespace std;

        void printArr(int a[]){
            cout << &a[0] << " " << &a[1] << " " << &a[2] << endl;
        }

        void printString(string s){
            cout << &s << " " << (void*)&s[1] << " " << (void*)&s[2] << endl;
        }

        void printString2(string &s){
            cout << &s << " " << (void*)&s[1] << " " << (void*)&s[2] << endl;
        }

        int main(){
            int a[3] = {1, 2, 3};
            cout << &a[0] << " " << &a[1] << " " << &a[2] << endl;
            printArr(a);
            string s = "hello";
            cout << &s << " " << (void*)&s[1] << " " << (void*)&s[2] << endl;
            printString(s);
        }
        Nhan xet: truyen mang vao ham la truyen tham chieu, truyen string vao ham la truyen tham tri, co the truyen tham chieu bang ham 2.
    Bai 5:
        #include<bits/stdc++.h>

        using namespace std;

        void foo(int &a){
            cout << &a << endl;
        }

        int main(){
            int a = 10;
            int c = 5;
            cout << &a << endl;
            foo(a);
            int &b = a;
            &b = c;
        }
        Nhan xet: Truyen tham chieu thi bien trong ham la cung 1 bien voi bien dc truyen vao,
                  Khong the khai bao mot tham chieu ma khong chieu no toi 1 bien thuong,
                  Khong the chieu b den 1 bien khac sau khi da khoi tao.
    Bai 6:
        # include <bits/stdc++.h>

        using namespace std;

        void f(int xval){
            int x;
            x = xval;
            cout << &x << endl;
        }

        void g(int yval){
            int y;
            cout << &y << endl;
        }

        int main(){
           f(7);
           g(11);
           return 0;
        }
        Nhan xet: Dia chi cua bien x va y la giong nhau, sau khi chay ham f thi ham f dc giai phong, ham g duoc goi thay the vao FrameStack khien cho 2 bien co dia chi giong nhau.
Phan B:
    Bai 1:
        bool majority(bool a, bool b, bool c){
            return (a&&b) || (b&&c) || (c&&a);
        }
    Bai 2:
        bool eq(int a[], int b[], int c){
            for(int i=0; i<c; i++){
                if(a[i] != b[i]){
                    return false;
                }
            }
            return true;
        }
    Bai 3:
        Cho hàm cube sau:
                void cube(int i) {
                   i = i * i * i;
                }
            Hỏi trong vòng lặp sau, hàm cube() chạy bao nhiêu lần?
        for (int i = 0; i < 1000; i++)
               cube(i);
        Dap an: 1000 lan

    Bai 4:
        Chương trình sau đây cho kết quả gì?
        void negate(int a) {
            a = -a;
        }

        int main() {
            int a = 17;
            cout << a;
            negate(a);
            cout << a;
        }
        Dap an: 17

    Bai 5:
        Hãy lập một bộ test để thử xem trong các hàm dưới đây, đâu là cài đặt đúng cho một hàm min trả về số nhỏ nhất trong 04 tham số. Có thể hardcode giá trị các test thẳng vào chương trình test.
        int min(int a, int b, int c, int d) {
           // if a is the smallest return it
           if (a <= b && a <= c && a <= d) return a;

           // otherwise, if b is the smallest of b, c, and d, return it
           if (b <= c && b <= d) return b;

           // otherwise, return the smaller of c and d
           if (c <= d) return c;
           return d;
        }

        int min(int a, int b, int c, int d) {
           int min = a;
           if (b < min) min = b;
           if (c < min) min = c;
           if (d < min) min = d;
           return min;
        }

        int min(int a, int b, int c, int d) {
           if (a < b && a < c && a < d) return a;
           if (b < c && b < d)          return b;
           if (c < d)                   return c;
           return d;
        }

        int min(int a, int b, int c, int d) {
           if (a <= b) {
              if (a <= c) {
                 if (a <= d)  return a;
                 else return d;
              }
              if (c <= d) return c;
              else return d;
           }
           if (b <= c) {
              if (b <= d) return b;
              else return d;
           }
           else if (c <= d) return c;
           return d;
        }

        int min(int a, int b) {
           if (a <= b) return a;
           else        return b;
        }
        int min(int a, int b, int c, int d) {
           return min(min(a, b), min(c, d));
        }
        Dap an: all deu dung, nhung nhanh nhat van la ham min thu 2.\

    Bai 6:
        Cho hai hàm overload sau:
        void f(int x, double y) {
           cout << "f(int, double)";
        }

        void f(double x, int y) {
           cout << "f(double, int)";
        }
        Lời gọi hàm này sẽ cho kết quả gì?
        f(1,2);
        Dap an: khong co ham nao dc goi vi 1,2 dc mac dinh la kieu int.

    Bai 7:
        Tác dụng của lệnh return là gì?
        A. Dùng khi muốn thoát khỏi hàm
        B. Trả lại kết quả cho hàm
        C. Bắt buộc phải có trong hàm
        D. Cả A và B
        Dap an: D

    Bai 8:
        Có thể truyền vào bao nhiêu đối số trong một hàm?
        A. Bao nhiêu cũng được.
        B. Ít nhất là 1.
        C. Nhiều nhất là 10.
        D. Chỉ duy nhất 1.
        Dap an: A

    Bai 9:
        Khai báo prototype nào sau đây là không hợp lệ?
        A. int funct(char x, char y);
        B. double funct(char x)
        C. void funct();
        D. char x();
        Dap an: khong co dap an nao k hop le

    Bai 10:
        Kiểu trả về của hàm với prototype: "int func(char x, float v, double t);" là:
        A. char
        B. int
        C. float
        D. double
        Dap an: B

    Bai 11:
        Lời gọi hàm nào sau đây là hợp lệ (giả sử hàm đấy tồn tại)?
        A. funct;
        B. funct x, y;
        C. funct();
        D. int funct();
        Dap an: D

    Bai 12:
        Đâu là định nghĩa một hàm hoàn chỉnh?
        A. int funct();
        B. int funct(int x) {return x=x+1;}
        C. void funct(int) {cout<<"Hello"}
        D. void funct(int) {cout<<"Hello"}
        Dap an: B

    Bai 13:
        Giả sử một hàm tên là function1 có một biến tên là sam được khai báo bên trong định nghĩa hàm function1, và một hàm tên là function2 cũng có một biến tên là sam được khai báo bên trong định nghĩa của function2. Điều gì sẽ xảy ra khi chạy chương trình (giả thiết mọi thứ khác đều ổn):
        A. Không biên dịch được;
        B. Biên dịch được nhưng không chạy được;
        C. Chạy được nhưng sẽ gặp lỗi logic không mong muốn;
        D. Chạy đúng như mong muốn;
        Dap an: D

    Bai 14:
        Cho biết kết quả của đoạn code sau:
        #include <iostream>
        void display (int k)
        {
          int j;
          std::cout << “Hello” << std::endl;
        }
        int main(int argc, char** argv)
        {
          int s;
          display(s);

          return 0;
        }
        A. Chương trình gặp lỗi biên dịch vì 2 biến s, k không giống nhau
        B. Chương trình gặp lỗi biên dịch vì 2 biến s, k không được khởi tạo trước khi truyền cho hàm
        C. Chương trình biên dịch thành công nhưng gặp lỗi khi chạy vì 2 biến s, k không giống nhau
        D. Chương trình biên dịch thành công và kết quả khi chạy là : Hello
        Dap an: D

    Bai 15:
        Đoạn code sau in ra kết quả như thế nào?
        #include <iostream>
        int foo(int y);
        int foo(int x)
        {
          return x+1;
        }
        int main(int argc, char** argv)
        {
          int x = 3;
          int y = 6;

          std::cout << foo(x) << std::endl;

          return 0;
        }
        A. 3
        B. 4
        C. 9
        D. Lỗi
        Dap an: B

    Bai 16:
        Hàm inline được định nghĩa trong
        A. Thời gian chạy
        B. Thời gian biên dịch
        C. Tùy vào nó được gọi khi nào
        D. Cả B và C
        Dap an: C

    Bai 17:
        Nếu một hàm được viết để sử dụng trong một chương trình sẵn có thì nó có thể được đưa vào thư viện hàm để các chương trình khác có thể sử dụng được
        A. Đúng
        B. Sai
        Dap an: A

    Bai 18:
        Số tham số và thứ tự các tham số thật phải đúng như các tham số hình thức trong khai báo hàm
        A. Đúng
        B. Sai
        Dap an: B

    Bai 19:
        Không cần chỉ định kiểu trả về của hàm khi hàm đó trả về kiểu dữ liệu nào sau đây:
        A. int
        B. void
        C. float
        D. char
        Dap an: B

    Bai 20:
        Định nghĩa hàm nào sau đây không hợp lệ
        A. void foo(){}
        B. void foo(void){}
        C. foo(void){}
        D. void foo{}
        Dap an: B, C

    Bai 21:
        Khi gọi hàm, các tham số được truyền vào phải giống các tham số hình thức ở
        A. Kiểu trả về
        B. Kiểu dữ liệu
        C. Tên
        D. Giá trị
        Dap an: B

    Bai 22:
        Nếu một hàm được gọi trước khi nó được định nghĩa thì điều kiện là gì?
        A. Kiểu trả về của hàm phải là kiểu void
        B. Kiểu đầu vào của hàm phải là kiểu void
        C. Trước khi gọi hàm nó phải được khai báo
        D. Không thể được.
        Dap an: C

    Bai 23:
        Hàm main() là một ví dụ về
        A. Hàm sơ cấp
        B. Hàm kiểu void
        C. Hàm do người dùng định nghĩa
        D. Hàm thư viện (pre-defined)
        Dap an: C

    Bai 24:
        Một hàm không trả về giá trị thì không thể có mặt trong biểu thức
        A. Đúng
        B. Sai
        Dap an: B

    Bai 25:
        Phát biểu nào sau đây là không đúng?
        A. Hàm có thể được định nghĩa trong hàm main()
        B. Hàm có thể được khai báo trong hàm main()
        C. Hàm có thể được gọi trước khi nó được định nghĩa
        D. Hàm chỉ có thể được định nghĩa bên ngoài hàm main()
        Dap an: C

    Bai 26:
        Phát biểu nào sau đây về hàm main() là đúng
        A. Là hàm được khai báo đầu tiên khi thực hiện chương trình
        B. Là hàm luôn được gọi đầu tiên khi chương trình thực hiện
        C. Là hàm không được phép truyền tham số vào
        D. Là hàm có thể gọi bình thường như các hàm người dùng định nghĩa khác.
        Dap an: B
Phan C:
    Bai 1:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n, m, k;
            cin >> n >> m >> k;
            int arr[n][m];
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    arr[i][j] =0;
                }
            }
            while(k>0){
                int i = rand()%n;
                int j = rand()%m;
                if(arr[i][j] ==0){
                    arr[i][j]= -1;
                }
                k--;
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(arr[i][j]>=0){
                        if(i>=1 && arr[i-1][j]<0){
                            arr[i][j]++;
                        }
                        if(i<=n-2 && arr[i+1][j]<0){
                            arr[i][j]++;
                        }
                        if(j>=1 && arr[i][j-1]<0){
                            arr[i][j]++;
                        }
                        if(j<=m-2 && arr[i][j+1]<0){
                            arr[i][j]++;
                        }
                        if(i>=1 && j>=1 && arr[i-1][j-1]<0){
                            arr[i][j]++;
                        }
                        if(i<=n-2 && j>=1 && arr[i+1][j-1]<0){
                            arr[i][j]++;
                        }
                        if(i>=1 && j<=m-2 && arr[i-1][j+1]<0){
                            arr[i][j]++;
                        }
                        if(i<= n-2 && j<= m-2 && arr[i+1][j+1]<0){
                            arr[i][j]++;
                        }
                    }
                }
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cout << arr[i][j]<< " ";
                }
                cout <<endl;
            }
        }
    Bai 2:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n, m, k;
            cin >> n >> m >> k;
            int arr[n][m];
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    arr[i][j] =0;
                }
            }
            while(k>0){
                int i = rand()%n;
                int j = rand()%m;
                if(arr[i][j] ==0){
                    arr[i][j]= -1;
                }
                k--;
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(arr[i][j]>=0){
                        if(i>=1 && arr[i-1][j]<0){
                            arr[i][j]++;
                        }
                        if(i<=n-2 && arr[i+1][j]<0){
                            arr[i][j]++;
                        }
                        if(j>=1 && arr[i][j-1]<0){
                            arr[i][j]++;
                        }
                        if(j<=m-2 && arr[i][j+1]<0){
                            arr[i][j]++;
                        }
                        if(i>=1 && j>=1 && arr[i-1][j-1]<0){
                            arr[i][j]++;
                        }
                        if(i<=n-2 && j>=1 && arr[i+1][j-1]<0){
                            arr[i][j]++;
                        }
                        if(i>=1 && j<=m-2 && arr[i-1][j+1]<0){
                            arr[i][j]++;
                        }
                        if(i<= n-2 && j<= m-2 && arr[i+1][j+1]<0){
                            arr[i][j]++;
                        }
                    }
                }
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cout << arr[i][j]<< " ";
                }
                cout <<endl;
            }
        }
    Bai 3:
        #include<bits/stdc++.h>

        using namespace std;

        void chooseAlphabets(char x, int row){
            switch(row){
            case 1:
                switch(x){
                case 'A':
                    cout << "    *     ";
                    break;
                case 'B':
                    break;
                }
                break;
            case 2:
                 switch(x){
                case 'A':
                    cout << "   * *    ";
                    break;
                case 'B':
                    break;
                }
                break;
            case 3:
                 switch(x){
                case 'A':
                    cout << "  *****   ";
                    break;
                case 'B':
                    break;
                }
                break;
            case 4:
                 switch(x){
                case 'A':
                    cout << " *     *  ";
                    break;
                case 'B':
                    break;
                }
                break;
            case 5:
                 switch(x){
                case 'A':
                    cout << "*       * ";
                    break;
                case 'B':
                    break;
                }
                break;
            }
        }

        int main(){
            string s;
            cin >> s;
            for(int j=1; j<=5; j++){
                for(int i=0; i<s.size(); i++){
                    chooseAlphabets(s[i], j);
                }
            }
        }
    Bai 4:
        Trong chương trinh hangman da lam.
    Bai 5:
        bool isPrime(int n){
            if(n ==0 || n ==1){
                return false;
            } else {
                for(int i=2; i<n; i++){
                    if(n%i==0){
                        return false;
                    }
                }
            }
            return true;
        }
    Bai 6:
        int UCLN(int a, int b){
            if(b==0){
                return a;
            } else {
                return UCLN(b, a%b);
            }
        }
    Bai 7:
        void printTriagle(int m, int n){
            for(int i=0; i<m+n; i++){
                if(i<m){
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
            cout << endl;
        }

        int main(){
            int n =5;
            for(int i =0; i<5; i++){
                printTriagle(n-i, 1+2*i);
            }
        }
    Bai 8:
        int round1(double n){
            return (n>0.0)? floor(n+0.5) : ceil(n-0.5);
        }
        int round2(double n) {
            int n_ = (int)n;
            double delta_n = n - n_;
            if (n >= 0) {
                return (delta_n >= 0.5) ? (n_ + 1) : n_;
            } else {
                return (delta_n <= -0.5) ? (n_ - 1) : n_;
            }
        }
    Bai 9:
        int randomNum(int n){
            return rand()%n;
        }
    Bai 10:
        # include <bits/stdc++.h>

        using namespace std;

        bool isSumDivisibleBy25(int a, int b, int c) {
            return ((a + b + c)%25 ==0);
        }

        int main(){
            int n;
            cin >> n;
            int arr[n];
            for(int i=0; i<n; i++){
                arr[i] = rand()%50;
            }
            for (int i = 0; i < n - 2; i++) {
                for (int j = i + 1; j < n - 1; j++) {
                    for (int k = j + 1; k < n; k++) {
                        if (isSumDivisibleBy25(arr[i], arr[j], arr[k])) {
                            cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        }
                    }
                }
            }
        }
    Bai 11:
        string TranToBinary(int n){
            string result;
            for(;n!=0;n/=2){
                if(n%2==0){
                    result +='0';
                } else {
                    result +='1';
                }
            }
            return result;
        }

        int TranToNumber(string s){
            int n = s.length();
            int result =0;
            for(int i=0; i<n; i++){
                if(s[i] == '0'){
                    result = result*2;
                } else {
                    result = result *2 + 1;
                }
            }
            return result;
        }
    Bai 12:
        int giaithua(int n){
            if(n ==0 || n==1){
                return 1;
            } else {
                return n*giaithua(n-1);
            }
        }
        int C(int k, int n){
            return (giaithua(n)/giaithua(k))/giaithua(n-k);
        }
