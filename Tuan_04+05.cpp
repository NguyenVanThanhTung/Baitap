Phan B:
    1.	Khai báo nào sau đây là hợp lệ:
        i.	double a[];
        ii.	double[] a;
        iii.	double a{5};
        iv.	double a[5];
        Dap an: IV

    2.	Khai báo nào sau đây là hợp lệ
        i.	int a[3] = { 1, 5, 8, 4};
        ii.	int a[5] = { 1, 5, 8, 4};
        iii.	int[] a =  { 1, 5, 8, 4};
        iv.	int a[] =  { 1, 5, 8, 4};
        Dap an: II, IV

    3.	Khai báo nào sau đây là khai báo một mảng 2 chiều
        i.	array a[20][20];
        ii.	int a[20][20];
        iii.	int a[20, 20];
        iv.	char a[20];
        Dap an: II

    4.	Mảng foo có 100 phần tử, câu lệnh nào sau đây dung truy cập phần tử thứ 7:
        i.	foo[6];
        ii.	foo[7];
        iii.	foo(7);
        iv.	foo{6};
        Dap an: I

    5.	Câu lệnh nào sau đây trả về địa chỉ của phần tử đầu tiên trong mảng foo
        i.	foo[0];
        ii.	&foo[1];
        iii.	&foo;
        iv.	foo;
        Dap an: III

    6.	Hai chỉ số [5] & [4] trong int a[5]; & a[4]++; diễn tả:
        i.	Cả hai chỉ số diễn tả độ dài của mảng a
        ii.	Cả hai chỉ số diễn tả chỉ số phẩm tử của mang a
        iii.	[5] diễn tả độ dài của mảng a & [4] diễn tả chỉ số phần tử của mảng a
        iv.	[5] diễn tả chỉ số phần tử của mảng a & [4] diễn tả độ dài của mảng a
        Dap an: III

    7.	Mảng được truyền như một đối số cho hàm được hiểu như thế nào
        i.	Mảng được truyền
        ii.	Giá trị của phần tử đầu tiên của mảng được truyền
        iii.	Địa chỉ của phần tử đầu tiên của mảng được truyền
        iv.	Số phần tử của mảng được truyền.
        Dap an: III

    8.	Những phát biểu nào xong đây là chính xác
        i.	Độ dài của mảng phải xác định ngay khi khai báo
        ii.	Không thể thay đổi độ dài của mảng bằng cách khai báo lại mạng
        iii.	Khi truyền mảng cho hàm, độ dài của mảng cũng cần được truyền theo
        iv.	Tất cả các phát biểu trên
        Dap an: II

    9.	Có lỗi nào xảy ra với đoạn chương trình sau
        int sampleArray[10];
        for (int index = 1; index <= 10; index++)
            sampleArray[index] = 3*index;
        i.	Lỗi khi dịch: chưa khởi tạo mảng
        ii.	Lỗi khi dịch: truy cập phần tử vượt khoảng cho phép
        iii.	Lỗi khi chạy: truy cập phần tử vượt khoảng cho phép
        iv.	Không có lỗi nào trong khi dịch và chạy
        Dap an: III

    10.	Những khai báo nào xong đây là chính xác
        i.	void clearBoard(char aChar[][]);
        ii.	void clearBoard(char[][] aChar);
        iii.	void clearBoard(char[][10] aChar);
        iv.	void clearBoard(charaChar[][10]);
        Dap an: I

    11.	Cho hàm tripler và 2 khai báo như sau, lệnh gọi hàm nào không đúng
        void tripler(int& n){ n = 3*n; }
        int a[3] = {4, 5, 6}, number = 2;
        i.	triple(a[2]);
        ii.	triple(a[number]);
        iii.	triple(a);
        iv.	triple(number);
        Dap an: III

    12.	Đoạn mã sau in ra như thế nào:
        double a[3] = {1.1, 2.2, 3.3};
        cout <<a[0]<<" "<<a[1]<<" "<<a[2]<< endl; a[1] = a[2];
        cout <<a[0]<<" "<<a[1]<<" "<<a[2]<< endl;
        i.	1.12.23.3
            1.12.23.3
        ii.	1.1 2.2 3.3
            1.1 2.2 3.3
        iii.	1.1 2.2 3.3
            2.2 2.2 3.3
        iv.	1.1 2.2 3.3
            1.1 3.3 3.3
        Dap an: IV

    13.	Đoạn mã sau in ra như thế nào:
        int a[3] = {5, 10, 15};
        for (int i = 2; i >= 0; i--)
            cout << a[i] << “ “;
        i.	5 10 15
        ii.	15 10
        iii.	15 10 5
        iv.	2 1 0
        Dap an: III

    14.	Sau khi chạy đoạn mã sau giá trị của phần tử thứ 2 trong mảng là gì:
        int a[5];
        for (int i = 0; i <5; i++)
        {
           a[i] = i + 2;
           if (i >= 2) a[i-1] = a[i] + 3;
        }
        i.	2
        ii.	3
        iii.	7
        iv.	8
        Dap an: III

    15.	Mảng a có 100 phần tử, lệnh nào có thể dùng để in giá trị a[0],  a[2], a[4],…
        i.	for (i=0; i<5000; i=i+2) cout << beta[i] << endl;
        ii.	for (i=0; i<2500; i++) cout << beta[i*2] << endl;
        iii.	for (i=0; i<2500; i++) cout << beta[i]*2 << endl;
        iv.	tất cả các đoạn lệnh trên
        Dap an: I, II

    16.	Đếm số lần xuất hiện các ký tự ASCII (256 ký tự), khai báo nào là hợp lý
        i.	int freq[char];
        ii.	char freq[256];
        iii.	int freq[256];
        iv.	char freq[int];
        Dap an: III

    17.	Cho đoạn chương trình sau, khai báo hàm nào là hợp lý nhất:
        char a[200];
        char b[200];
        copy(a, b, 200); // sao toàn bộ nội dung mảng b sang mảng a
        i.	copy(char a1[], char a2[], int size);
        ii.	copy(const char a1[], char a2[], int size);
        iii.	copy(const char a1[], const char a2[], int size);
        iv.	copy(char a1[], const char a2[], int size);
        Dap an: IV

    18.	Cho khai báo hàm như sau, phát biểu nào không chính xác:
        void SapXep(int a[], int N);
        i.	Độ dài của mảng truyền vào là N
        ii.	Mảng truyền vào có N phần tử
        iii.	Phải truyền vào độ dài của mảng trong ngoặc vuông [] cùng tên mảng
        iv.	Mảng được truyền vào theo kiểu truyền giá trị
        Dap an: III

    19.	Khai báo hàm cho việc đổi chỗ 2 phần tử của mảng trong quá trình sắp xếp, khai báo nào sau đây là đúng:
        i.	int swap(int a, int b);
        ii.	void swap(int a, int b);
        iii.	int swap(int &a, int &b);
        iv.	void swap(int &a, int &b);
        Dap an: IV

    20.	Truyền mảng 2 chiều cho hàm, khai báo nào sau là đúng:
        i.	void timkiem(int a[][]);
        ii.	void timkiem(int a[10][]);
        iii.	void timkiem(int a[][10]);
        iv.	void timkiem(int[10][10] a);
        Dap an: I

Phan C:
    Bai 1:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n;
            cin >> n;
            bool arr[n+1], a(0);
            for(int i=0; i<=n; i++){
                arr[i] = 0;
            }
            for(int i=0; i<=n; i++){
                int x;
                cin >> x;
                if(arr[x] == 1){
                    a =1;
                }
                arr[x] =1;
            }
            if(a){
                cout << "Yes" <<endl;
            } else {
                cout << "No" << endl;
            }
        }
    Bai 2:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            string s;
            cin >> s;
            int n = s.length();
            bool x(1);
            for(int i=0; i<(n/2); i++){
                if(s[i] != s[n-i-1]){
                    x = 0;
                }
            }
            if(x){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    Bai 3:
        # include <bits/stdc++.h>

        using namespace std;

        bool checkOpposite(int i){
            int j(i), sum(0);
            for(;j!=0; j/=10){
                sum = sum*10 +=j;
            }
            if(i ==sum){
                return true;
            }
            return false;
        }

        int main(){
            int a, b, cou;
            cin >> a >> b;
            for(int i=a; i<=b; i++){
                if(checkOpposite(i)){
                    cou ++;
                }
            }
            cout << cou;
        }
    Bai 4:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n, m;
            int boom_x, boom_y;
            cin >> n >> m;
            cin >> boom_x >> boom_y;
            int arr [n][m];
            arr[boom_x-1][boom_y-1] = -1;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
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
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    Bai 5:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n, m, cou(1);
            bool left(0), right(1), up(0), down(0);
            cin >> n >> m;
            int arr[n][m];
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    arr[i][j] =0;
                }
            }
            for(int i=0;cou != m*n+1;){
                for(int j=0;cou != m*n+1;){
                    arr[i][j] = cou;
                    if((i ==0 || arr[i-1][j] !=0) && left ==1){
                        left =0;
                        up =1;
                    }
                    if((j ==0 || arr[i][j-1] !=0) && up ==1){
                        up =0;
                        right =1;
                    }
                    if((i == n-1 || arr[i+1][j] && right ==1){
                        right =0;
                        down =1;
                    }
                    if((j == m-1 || arr[i][j+1] && down =1){
                        down = 0;
                        left =1;
                    }
                    if(right ==1){
                        i++;
                    }
                    if(left ==1){
                        i--;
                    }
                    if(up ==1){
                        j--;
                    }
                    if(down ==1){
                        j++;
                    }
                    cou++;
                }
            }

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
    Bai 6:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            cin >> n;
            int a[n][n] = {};

            a[0][n/2] = 1;

            int i = 0;
            int j=n/2;
            while(1){
                if(a[(i-1+n)%n][(j+1+n)%n] == 0 ){
                    a[(i-1+n)%n][(j+1+n)%n] =  a[i][j]+1;
                    i=(i-1+n)%n;
                    j=(j+1+n)%n;
                } else if(a[(i-1+n)%n][(j+1+n)%n] != 0 && a[i+1][j] == 0){
                    a[i+1][j] = a[i][j]+1;
                    i=i+1;
                    j=j;
                } else if(a[(i-1+n)%n][(j+1+n)%n] != 0 && a[i+1][j] != 0){
                    break;
                }
            }

            for (int x = 0; x<n; x++){
                for(int y = 0; y<n; y++){
                    cout << a[x][y] << " ";
                }
                cout << endl;
            }
        }
    Bai 7:
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
    Bai 8:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            cin >> n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }
            sort(arr, arr+n);
            int sum =0;
            for(int i=0; i<n; i++){
                sum = sum*2+arr[i];
            }
            cout << sum;
        }

Bai thay Khoi:
    Bai 1:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n;
            cin >> n;
            double arr[n];
            double sum =0;
            for(int i=0; i<n; i++){
                cin >> arr[i];
                sum += arr[i];
            }
            double x_ = sum/=n;
            sum =0;
            for(int i=0; i<n; i++){
                sum+= (arr[i]-x_)*(arr[i]-x_);
            }
            double phi = sum/=n;
            cout << x_ << " " << phi << endl;
        }
    Bai 2:
        #include<bits/stdc++.h>

        using namespace std;

        int main() {
            int n, maxi(-100000), mini(100000), sumc(0), sụml(0);
            cin >> n;
            for(int i=0; i<n; i++){
                int x;
                cin >> x;
                maxi = max(maxi, x);
                mini = min(mini, x);
                if(x%2==0){
                    sumc+=x;
                } else {
                    suml+=x;
                }
            }
            cout << maxi << " " << mini << " " << sumc << " " << suml << endl;
        }
    Bai 3:
        # include <bits/stdc++.h>

        using namespace std;

        int main(){
            int n,maxi(0);
            cin >> n;
            map <int, int> mp;
            for(int i=0; i<n; i++){
                int x;
                cin >> x;
                mp[x]++;
                maxi = max(maxi, mp[x]);
            }
            for(int i=0; i<= 9; i++){
                if( maxi == mp[i]){
                    cout << i << endl;
                    break;
                }
            }
        }
    Bai 4:
        # include <bits/stdc++.h>

        using namespace std;

        int giaithua(int n){
            if(n ==0 || n==1){
                return 1;
            } else {
                return n* giaithua(n-1);
            }
        }

        int main(){
            int n;
            cin >> n;
            for(int i=0; i<=n; i++){
                for(int j=0; j<=i; j++){
                    cout << (giaithua(n)/giaithua(k))/giaithua(n-k) << " ";
                }
                cout <<endl;
            }
        }
