# include <iostream>
# include <cmath>
# include <iomanip>

using namespace std;

//Bai 1:
//void checkPrime(int x, bool arr[]){
//    if(arr[x] == true){
//        cout << "yes";
//    } else {
//        cout << "no";
//    }
//}
//
//int main(){
//    bool arr[10000];
//    for(int i=0; i<10000 ; i++){
//        arr[i] = true;
//    }
//    arr[0] = false;
//    arr[1] = false;
//    for(int i=2; i<10000; i++){
//        if(arr[i]== true){
//            for(int j = i*i; j<10000; j += i){
//                arr[j]= false;
//            }
//        }
//    }
//
//    int x;
//    cin >> x;
//    checkPrime(x, arr);
//}

//Bai 2:
//int main(){
//    int n;
//    cin >> n;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            if(j<i){
//                cout << " ";
//            } else {
//                cout << "*";
//            }
//        }
//        cout<< endl;
//    }
//}

//Bai 3:
//int main(){
//    int n;
//    cin >> n;
//    for(int i=0; i<n; i++){
//        for(int j=-n+1; j<n; j++){
//            if(i<abs(j)){
//                cout << " ";
//            } else {
//                cout << "*";
//            }
//        }
//        cout<< endl;
//    }
//}

//Bai 4:
//int main(){
//    int n;
//    cin >> n;
//    for(int i=n-1; i>=0; i--){
//        for(int j=-n+1; j<n; j++){
//            if(i<abs(j)){
//                cout << " ";
//            } else {
//                cout << "*";
//            }
//        }
//        cout<< endl;
//    }
//}

//Bai 6:
//int main(){
//    int n;
//    cin >> n;
//    for(int i=0; i<n;i++){
//        for(int j=0; j<n; j++){
//            if(i+j+1 >n){
//                cout << i+j+1-n <<" ";
//            } else {
//                cout << i+j+1 << " ";
//            }
//        }
//        cout << endl;
//    }
//}

//Bai 7:
//void distinctNumbers(int n, int &n_old){
//    if(n != n_old){
//        cout << n << " ";
//    }
//    n_old = n;
//}
//
//int main(){
//    int n;
//    int n_old = -1;
//    while(n!=-1){
//        cin >> n;
//        distinctNumbers(n, n_old);
//    }
//}

//Bai 8:
//int main(){
//    int n;
//    cin >> n;
//    int arr[1000][1000];
//    for(int i=1; i<1000; i++){
//        for(int j=1; j<1000; j++){
//            arr[i][j]=0;
//        }
//    }
//    for(int i=0; i<n; i++){
//        int a, b;
//        cin >> a >> b;
//        for(int j=1; j<=a; j++){
//            for(int k=1; k<=b; k++){
//                arr[j][k]++;
//            }
//        }
//    }
//    int max =0;
//    for(int i=1; i<1000; i++){
//        for(int j=1; j<1000; j++){
//            if(arr[i][j]>max){
//                max = arr[i][j];
//            }
//        }
//    }
//    cout << max;
//}

//PHAN 2:
//Bai 2:
//double pow(double x, int y){
//    double mul =1;
//    for(int i=0; i<y; i++){
//        mul = mul* x;
//    }
//    return mul;
//}
//
//int main(){
//    double x;
//    int y;
//    cin >> x >> y;
//    cout << fixed << setprecision(5) << pow(x, y);
//}

//Bai 3:
//int main(){
//    double a, b, c;
//    cin >> a >> b >> c;
//    if(a+b>c && b+c >a && c+a > b){
//        bool can = false;
//        bool deu = false;
//        bool vuong = false;
//        if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
//            vuong = true;
//        }
//        if(a ==b || b == c || c == a){
//            can = true;
//        }
//        if(a == b && b == c){
//            deu = true;
//        }
//        if(deu == true){
//            cout << "tamgiacdeu";
//        } else {
//            if( can == true && vuong == true){
//                cout << "tamgiacvuongcan";
//            } else {
//                if( can == true){
//                    cout << "tamgiaccan";
//                } else {
//                    if(vuong == true){
//                        cout << "tamgiacvuong";
//                    } else {
//                        cout << "tam giac thuong";
//                    }
//                }
//            }
//        }
//    } else {
//        cout << "khongphaitamgiac" ;
//    }
//}

//Bai 4:
//int main(){
//    int x, y;
//    cin >> x >> y;
//    int UCLN =1;
//    for(int i=2; i<x && i<y; i++){
//        if(x %i==0 && y%i ==0){
//            UCLN = i;
//        }
//    }
//    cout << x*y/UCLN;
//}

//Bai 5:
//int main(){
//    int x, y;
//    cin >> x >> y;
//    int UCLN =1;
//    for(int i=2; i<x && i<y; i++){
//        if(x %i==0 && y%i ==0){
//            UCLN = i;
//        }
//    }
//    cout << UCLN
//}

//Bai 6:
//int main(){
//    int x, y;
//    cin >> x >> y;
//    int UCLN =1;
//    for(int i=2; i<x && i<y; i++){
//        if(x %i==0 && y%i ==0){
//            UCLN = i;
//        }
//    }
//    cout << x/UCLN <<" / " << y/UCLN;
//}

//Bai 7:
//void checkSoNghiem1(int a1, int a2, int b1, int b2, int c1, int c2){
//    double d = a2/a1;
//    b2 = b2 - b1*d;
//    c2 = c2 - c1*d;
//    if(b2 ==0 && c2 ==0){
//        cout << "vo so nghiem";
//    } else {
//        if(b2 ==0){
//            cout << "vo nghiem";
//        } else {
//            cout << "mot nghiem duy nhat";
//        }
//    }
//}
//
//void checkSoNghiem(int a1, int a2, int b1, int b2, int c1, int c2){
//    if(a1 ==0 & a2 ==0){
//        if(b2/c2 == b1/c1){
//            cout << "vo so nghiem";
//        } else {
//            cout << "vo nghiem";
//        }
//    } else {
//        if(a1 ==0){
//            swap(a1, a2);
//            swap(b1, b2);
//            swap(c1, c2);
//            checkSoNghiem1(a1, a2, b1, b2, c1, c2);
//        } else {
//            checkSoNghiem1(a1, a2, b1, b2, c1, c2);
//        }
//    }
//}
//
//int main(){
//    double a1, a2, b1, b2, c1, c2;
//    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
//    checkSoNghiem(a1, a2, b1, b2, c1, c2);
//}
