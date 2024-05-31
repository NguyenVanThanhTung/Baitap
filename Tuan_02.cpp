Phan B:
    Câu 1.  Đoạn mã nào phía dưới có thể thay thế cho lệnh (tam nguyên) sau:
    min = (a<b) ? a : b;
    a.	if (a>b) min = a;
        else min = b;
    b.   if (a<b) min = a;
        else min = b;
    c.	(a>b) min = a;
        else min = b;
    d.   Không có đáp án đúng
    Dap an: B

    Câu 2.  Khoanh tròn đáp án đúng:
    a.	Nhãn default là bắt buộc phải có trong cấu trúc lệnh switch.
    b.   Lệnh ngắt break là bắt buộc có trong tập lệnh mặc định của  nhãn default trong cấu trúc lệnh switch.
    c.	Quên lệnh ngắt break trong cấu trúc lệnh switch là mắc lỗi biên dịch.
    d.   Ứng dụng hay gặp của cấu trúc lệnh switch là tạo MENU.
    Dap an: B

    Câu 3.  Các nhãn case  trong cấu trúc switch phải là:
    a.    Biểu thức trả về kiểu số nguyên
    b.   Biểu thức trả về kiểu ký tự
    c.    Phải là hằng (kiểu số nguyên hoặc kiểu ký tự), chứ không thể là biến hay biểu thức chứa biến.
    d.   Kiểu số thực
    Dap an: C

    Câu 4.  Khoanh tròn đáp án đúng cho đoạn mã lệnh sau:
    int n = 5, k;
      for (k = 1; k <= 50; k++) {
        if ( (k%n)) continue;
          cout << k << “\t”;
      }
    a.	In ra các số nguyên không chia hết cho 5 nằm trong khoảng từ 1 tới 50.
    b.   In ra các số nguyên chia hết cho 5 nằm trong khoảng từ 1 tới 50.
    c.	In ra các số nguyên nằm trong khoảng từ 1 tới 50.
    d.   Không in ra gì vì biểu thức logic trong phần điều kiện của lệnh if sai.
    Dap an: B

    Câu 5.  Trong cấu trúc của vòng lặp for (khởi_tạo; điều_kiện_lặp; cập_nhật)
    a.	Nhất định phải đủ cả ba biểu thức  khởi_tạo, điều_kiện_lặp và cập_nhật.
    b.   Có thể thiếu hai trong ba biểu thức trên
    c.	Có thể thiếu một trong ba biểu thức trên
    d.   Có thể thiếu bất cứ biểu thức nào trong ba biểu thức trên.
    Dap an: A

    Câu 6.  Để kết thúc sự lặp lại hiện hành mà không thực thi các câu lệnh còn lại trong khối vòng lặp. Sự điều khiển trở về ngay lập tức với điều kiện kiểm tra, xác định xem có cần kết thúc chính vòng lặp hoặc tiếp tục với sự lặp lại kế tiếp hay không, ta gọi lệnh nào sau đây:
    a.	break;
    b.   continue;
    c.	goto;
    d.   return  (0);
    Dap an: B

    Câu 7.  Khoanh tròn đáp án đúng cho đoạn mã lệnh sau:
            int x = 10;
            for (int x = 0; x <= 20; x ++);
            cout << x;
    a.    In ra 20
    b.   In ra 21
    c.    In ra 10
    d.   Các đáp án trên đều sai, đoạn mã lệnh có lỗi
    Dap an: C

    Câu 8.  Khoanh tròn các đáp án sai:
    a.  Trong 3 kiểu lặp: while, do- while và for thì do- while là linh hoạt nhất.
    b. Trong 3 kiểu lặp: while, do- while và for thì while là linh hoạt nhất
    c.  Trong 3 kiểu lặp: while, do- while và for thì for là linh hoạt nhất
    d.       Một đoạn code bất kỳ sử dụng một trong 3 kiểu lặp while, do- while hoặc for thì nó cũng có thể được xây dựng bằng một trong hai kiểu lặp còn lại.
    e.  for là phép lặp “đếm” tự nhiên.
    Dap an: A B C

    Câu 9.  Cho đoạn chương trình sau:
    if (i == j) {
        cout << "A" << endl;
    }
    else if ((i % j) < 3) {
        cout << "B" << endl;
    }
    else if (i < (j-1)) {
        cout << "C" << endl;
    }
    else {
        cout << "D" << endl;
    }
    Nếu i =4 và j = 9, kết quả xuất ra màn hình sẽ là?
    a.       A
    b.  	D
    c.   	B
    d.  	C
    Dap an: D

    Câu 10.    Cho đoạn chương trình sau:
    #include <iostream>
    using namespace std;

    int main()
    {
       int x=7,y=45,z=63,min_num;
        if (x<z)
          min_num=x;
        else
          min_num=z;
        if(y<z)
          min_num=y;
        else
           min_num=z;

       cout<<"The minimum is:" <<min_num;
       system ("pause");
       return 0;
    }
    a.   	7
    b.  	45
    c.   	63
    d.  	Tất cả các đáp trên đều sai
    Dap an: B

    Câu 11.    Kết quả xuất ra khi biên dịch khối lệnh sau:
    int num = 5, sum = 0;
    while (num > 0)
    {
        if (num %2 !=0)
          sum+=num;
        --num;
    }
    cout << "The sum is " << sum << endl;

    a.   The sum is 0
    b.  	The sum is 5
    c.   	The sum is 9
    d.  	The sum is 15
    Dap an: C

    Câu 12.    Cho biết kết quả xuất ra của đoạn chương trình sau đây trên màn hình là gì?
    int1 = 120;
    cin >> int2;        	// Giả sử người sử dụng nhập vào 30
    if ((int1 > 100) && (int2 = 50))
    int3 = int1 + int2;
    else
    int3 = int1 - int2;
    cout << int1 << ' ' << int2 << ' ' << int3;
    a.       120   30  150
    b.      120   50  170
    c.       120   30  170
    d.      120   30  90
    Dap an: B

    Câu 13.    Cho biết kết quả xuất ra của đoạn chương trình sau đây trên màn hình là gì?
    int a=1,b=2;
    if (a<b)
       if (a>b) 	a=a+1;
       else       	b=b+1;
    else          	a=a+b;
    cout<<a*b;
    a.       2
    b.      3
    c.       6
    d.      12
    Dap an: B

    Câu 14.    Trong các đoạn code phía dưới, đoạn nào không có lỗi?
    a.       while ( c <= 5 )
            {
                    product *= c;
                    c++;

    b.      if ( gender == 1 )
          cout << "Woman" << endl;
            else;
          cout << "Man" << endl;

    c.       while ( z >= 0 ) // nguoi dung khoi tao z = 2
                            sum += z;

    d.      while ( i <= y )
                {
                            power *= x;
    i++;
    }
    Dap an: B

    Câu 15.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
    int x = -1;
            do {
                    cout<<"Hello, world!\t";
                    x++;
            } while ( !x );
    In ra màn hình:
    a.       Hello, world!
    b.      Hello, world!   Hello, world!
    c.       Hello, world!   Hello, world!           	Hello, world!
    d.      Không in gì
    Dap an: B

    Câu 16.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
    int x = -3;
            do {
                    cout<<"Hello, world!\t";
                    x++;
            } while ( x );
    In ra màn hình:
    a.       Hello, world!
    b.      Hello, world!   Hello, world!
    c.       Hello, world!   Hello, world!           	Hello, world!
    d.      Không in gì
    Dap an: C

    Câu 17.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
    int x = -3;
            while (x) {
                    cout<<"Hello, world!\t";
                    x++;
            }
    In ra màn hình:
    a.       Hello, world!
    b.      Hello, world!   Hello, world!
    c.       Hello, world!   Hello, world!           	Hello, world!
    d.      Không in gì
    Dap an: C

    Câu 18.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
    int x = -3;
            while (!x) {
                    cout<<"Hello, world!\t";
                    x++;
            }
    In ra màn hình:
    a.       Hello, world!
    b.      Hello, world!   Hello, world!
    c.       Hello, world!   Hello, world!           	Hello, world!
    d.      Không in gì
    Dap an: D

    Câu 19.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
    int x = -3;
            while (-3) {
                    cout<<"Hello, world!\t";
                    x++;
                    if (!x)
                                break;
            }
    In ra màn hình:
    a.       Hello, world!
    b.      Hello, world!   Hello, world!
    c.       Hello, world!   Hello, world!           	Hello, world!
    d.      Không in gì
    Dap an: C

    Câu 20.    Khoanh tròn đáp án đúng cho đoạn code bên dưới:
    int i = -3;
                for( ; ; ) {
                            cout<<"Hello, world!\n";
                            i ++;
                            if (i == 0) break;
                } ;
    In ra màn hình:
    a.       Hello, world!   Hello, world!
    b.      Hello, world!   Hello, world!           	Hello, world!
    c.       Đoạn code có lỗi.
    d.      Không in gì.
    Dap an: B

Phan C:
    Cau 1:
        # include <bits/stdc++.h>

        using namespace std;

        bool Prime(int n){
            for(int i=2; i<n; i++){
                if(n%i==0){
                    return false;
                }
            }
            return true;
        }

        int main(){
            int n;
            cin >> n;
            if(Prime(n)){
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    Cau 2:
        # include <bits/stdc++>

        using namespace std;

        void TriagleOne(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(j<i){
                        cout << " ";
                    } else {
                        cout << "*";
                    }
                }
            }
        }

        int main(){
            int n;
            cin >> n;
            TriagleOne(n);
        }

    Cau 3:
        # include <bits/stdc++>

        using namespace std;

        void TriagleTwo(int n){
            for(int i=0; i<n; i++){
                for(int j=1-n; j<n; j++){
                    if(abs(j)>i){
                        cout << " ";
                    } else {
                        cout << "*";
                    }
                }
            }
        }

        int main(){
            int n;
            cin >> n;
            TriagleTwo(n);
        }
    Cau 4:
        # include <bits/stdc++>

        using namespace std;

        void TriagleThree(int n){
            for(int i=n-1; i>=0; i--){
                for(int j=1-n; j<n; j++){
                    if(abs(j)>i){
                        cout << " ";
                    } else {
                        cout << "*";
                    }
                }
            }
        }

        int main(){
            int n;
            cin >> n;
            TriagleThree(n);
        }
    Cau 6:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            cin >> n;
            for(int i=0; i<n; i++){
                for(int j=0; i<n; j++){
                    cout <<((i+j)%n)+1 << " ";
                }
                cout << endl;
            }
        }
    Cau 7:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n, pre;
            for(;n>0;){
                cin >> n;
                pre = n;
                if(n != pre){
                    cout << n << " ";
                }
            }
        }
    Cau 9:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            unsigned int res = 0, n, a, b, x = INT_MAX, y = INT_MAX;
            cin >> n;
            while (n--)
            {
                cin >> a >> b;
                x = min(x,a);
                y = min(y,b);
            }

            res = x*y;
            cout << res;
            return 0;
        }
    Bài 1. Tìm lỗi trong mỗi vòng lặp sau:
        while (n<20);
           cout << n++ <<endl;
        Dap an: khong co {} la vong lap trong k thuc hien dc

        for (int i = 1, i <= 8, ++i)
           cout << 1.0/i << endl;
        Dap an: trong cau lenh for phai dung ";" chu k dung ","

        int n = 10;
           do
                  cout << 1.0/n ;
                          n++;
                       while (n < 20);
        Dap an: khong co {}

        for (int i=10; i<20; ) {
           cout << i*i <<endl;
           i--;
        }
        Dap an: la vong lap vo han

    Bài 2. Pow:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int x, y;
            cin >> x >> y;
            long result = 1;
            for(int i = 0; i<y; i++){
                result*=x;
            }
            cout << result << " " << pow(x, y);
        }
    Bai 3. Triagle:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            double a, b, c;
            cin >> a >> b >> c;

            if (a + b > c && a + c > b && b + c > a) {
                cout << a << ", " << b << ", " << c << " la 3 canh cua 1 tam giac" << endl;

                int chuVi = a + b + c;
                cout << "Chu vi tam giac la: " << chuVi << endl;

                if (a == b && b == c) {
                    cout << "Tam giac deu" << endl;
                }
                else if (a == b || b == c || a == c) {
                    cout << "Tam giac can" << endl;
                }
                else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                    cout << "Tam giac vuong" << endl;
                }
                else {
                    cout << "Tam giac thuong" << endl;
                }
            } else {
                cout << a << ", " << b << ", " << c << " khong phai la 3 canh cua tam giac." << endl;
            }
        }
    Bai 4. UCLN:
        #include<bits/stdc++.h>

        using namespace std;

        int ucln(int a, int b) {
            if(b == 0) return a;
            return ucln(b, a%b);
        }
        int main() {
            int a,b;
            cin >> a >> b;
            cout << ucln(a,b) << endl;
            return 0;
        }
    Bai 5. BCNN:
        #include<bits/stdc++.h>

        using namespace std;

        int ucln(int a, int b) {
            if(b == 0) return a;
            return ucln(b, a%b);
        }
        int main() {
            int a,b;
            cin >> a >> b;
            cout << a*b/ucln(a,b) << endl;
            return 0;
        }
    Bai 6. Phan so toi gian:
        #include<bits/stdc++.h>

        using namespace std;

        int ucln(int a, int b) {
            if(b == 0) return a;
            return ucln(b, a%b);
        }
        int main() {
            int a,b;
            cin >> a >> b;
            if(!(a%b)) cout << a/b << endl;
            else cout << a/ucln(a,b) << "/" << b/ucln(a,b);
            return 0;
        }
    Bai 7. Phuong trinh tuyen tinh bac 2:
        #include<bits/stdc++.h>

        using namespace std;

        int main(){
            double a1, a2, b1, b2, c1, c2;
            cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

            if(a1*b2 == a2*b1 && a1*c2 == a2*c1){
                cout << "vo so nghiem" << endl;
            } else {
                if(a1*b2 == a2*b1 && a1*c2 != a2*c1){
                    cout << "vo nghiem" << endl;
                } else {
                    if(a1*b2 != a2*b1){
                        cout << "co nghiem" <<endl;
                    }
                }
            }
        }
    Bai 8. Phuong trinh bac 2:
        #include<bits/stdc++.h>

        using namespace std;

        int main(){
            double a, b, c;
            cin >> a >> b >> c;
            double delta = b*b -4*a*c;
            if(delta <0){
                cout << "vo nghiem" << endl;
            } else {
                if(delta ==0){
                    cout << "co 1 nghiem " << -b/(2*a) << endl;
                } else {
                    cout << "co 2 nghiem " << (-b+delta)/(2*a) << " " (-b-delta)/(2*a) << endl;
                }
            }
        }
    Bai 9. Tong chu so:
        #include<bits/stdc++.h>

        using namespace std;

        int main(){
            int n, sum(0);
            cin >> n;
            while(n!=0){
                sum += n%10;
                n/=10;
            }
        }
    Bai 10. Chuyen nhiet do:
        #include<bits/stdc++.h>

        using namespace std;

        int main(){
            double f;
            cin >> f;
            cout << f << " " << (f-32)*5/9 << " "  << (f-32)*5/9 +273.15 << endl;
        }
    Bai 11. Chuyen chuoi nhiet do:
        #include<bits/stdc++.h>

        using namespace std;

        void chuyendo(double f){
            cout << f << " " << (f-32)*5/9 << " "  << (f-32)*5/9 +273.15 << endl;
        }

        int main(){
            double mini, maxi, step;
            cin >> mini, maxi, step;
            for(int i= mini, i<= maxi; i+=step){
                chuyendo(mini);
            }
        }
    Bai 12. SquareNumber:
        #include<bits/stdc++.h>

        using namespace std;

        int main(){
            int n;
            cin >> n;
            if(sqrt(n) == round(sqrt(n))){
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    Bai 13. Square, Prime, Perfect Number:
        # include <bits/stdc++.h>

        using namespace std;

        void checkPrime(int n){
            bool isPrime[n+1];
            for(int i=0; i<=n; i++){
                isPrime[i] = true;
            }
            isPrime[0] = 0;
            isPrime[1] = 0;
            for(int i=2; i<=n; i++){
                if(isPrime[i] == true){
                    for(int j=i*2; j<=n; j+=i){
                        isPrime[j] = false;
                    }
                }
            }

            for(int i=0; i<=n; i++){
                if(isPrime[i]){
                    cout << i << " ";
                }
            }
            cout << endl;
        }

        void checkPerfect(int n){
            bool isPerfect[n+1];
            isPerfect[0] = 0;
            isPerfect[1] = 0;
            isPerfect[2] = 0;
            for(int i=2; i<=n; i++){
                int sum=0;
                for(int j=1; j<i; j++){
                    if(i%j==0){
                        sum+=j;
                    }
                }
                if(sum == i){
                    isPerfect[i] = true;
                } else {
                    isPerfect[i] = false;
                }
            }
            for(int i=0; i<=n; i++){
                if(isPerfect[i]){
                    cout << i << " ";
                }
            }
            cout << endl;
        }

        void checkSquare(int n){
            bool isSquare[n+1];
            isSquare[0] = 0;
            isSquare[1] = 0;
            for(int i=2; i<=n; i++){
                if(sqrt(i) == (int)(sqrt(i))){
                    isSquare[i] = true;
                } else {
                    isSquare[i] = false;
                }
            }
            for(int i=0; i<=n; i++){
                if(isSquare[i]){
                    cout << i << " ";
                }
            }
            cout << endl;
        }

        int main(){
            int n;
            cin >> n;
            checkPrime(n);
            checkPerfect(n);
            checkSquare(n);
        }
    Bai 14. find Min Max:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n;
            cin >> n;
            double maxi(-1000000),mini(1000000);
            for(int i=0; i<n; i++){
                double x;
                cin >> x;
                maxi = max(maxi, x);
                mini = min(mini, x);
            }
            cout << maxi << endl;
            cout << mini << endl;
        }
    Bai 15. Fibonacci:
        # include <bits/stdc++.h>

        using namespace std;

        void checkFibonacci(int n){
            vector<int> arr;
            arr.push_back(1);
            arr.push_back(1);
            int x(2),len(2);
            while(x<=n){
                arr.push_back(x);
                len = arr.size();
                x = arr[len-2]+ arr[len-1];
            }
            if(n == arr[len-1]){
                cout << "Thuoc day Fibonacci" << endl;
            } else {
                cout << "Khong thuoc day Fibonacci" << endl;
            }

            for(int i=0; i<len; i++){
                cout << arr[i] << " ";
            }
        }

        int main(){
            int n;
            cin >> n;
            checkFibonacci(n);
        }
    Bai 16. nhap so duong <10:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            do {
                cout << "Nhap vao mot so trong khoang 0..9: ";
                cin >> n;

                switch (n) {
                    case 0:
                        cout << "Vua nhap chu so khong" << endl;
                        break;
                    case 1:
                        cout << "Vua nhap chu so mot" << endl;
                        break;
                    case 2:
                        cout << "Vua nhap chu so hai" << endl;
                        break;
                    case 3:
                        cout << "Vua nhap chu so ba" << endl;
                        break;
                    case 4:
                        cout << "Vua nhap chu so bon" << endl;
                        break;
                    case 5:
                        cout << "Vua nhap chu so nam" << endl;
                        break;
                    case 6:
                        cout << "Vua nhap chu so sau" << endl;
                        break;
                    case 7:
                        cout << "Vua nhap chu so bay" << endl;
                        break;
                    case 8:
                        cout << "Vua nhap chu so tam" << endl;
                        break;
                    case 9:
                        cout << "Vua nhap chu so chin" << endl;
                        break;
                    default:
                        return 0;
                }
            } while (n >= 0 && n <= 9);
            return 0;
        }
    Bai 17. trungbinhmon:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            int i = 1;
            double res = 0;
            while(i<=5) {
                cout << "Diem mon hoc " << i << ": ";
                cin >> n;
                res += n;
            }
            cout << "Diem trung binh cua 5 mon hoc: " << res/5;
            return 0;
        }
    Bai 18. diemmonhoc:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n=-1;
            int i = 1;
            double res = 0;
            while(true) {
                cout << "Diem mon hoc " << i << ": ";
                cin >> n;
                while (n>10){
                    cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): " ;
                    cin >> n;
                }
                if(n<0) break;
                res += n;
                i++;
            }

            cout << "So mon hoc: " << --i <<endl;
            cout << res/i;
        }
}
