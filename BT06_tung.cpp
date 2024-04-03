#include<bits/stdc++.h>
using namespace std;

////Bai 5:
//long long n;
//bool Prime(long long x)
//{
//    if(x<2){
//        return false;
//    }
//    for(int i=2;i*i<=x;i++){
//        if(x%i==0){
//            return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//    cin>>n;
//    for(int i=2;i<=n;i++){
//        if(Prime(i)){
//            cout<<i<<" ";
//        }
//    }
//}

////Bai 6:
//long long a,b;
//long long GCD(long long x, long long y){
//    if(x%y==0){
//        return y;
//    }
//    if(y%x==0){
//        return x;
//    }
//    while(x!=y && (x!=1 && y!=1)){
//        if(x<y){
//            y%=x;
//        } else {
//            x%=y;
//        }
//    }
//    return min(x,y);
//}
//
//int main(){
//    cin>>a>>b;
//    if(GCD(a,b)==1){
//        cout<<"a,b nguyen to cung nhau";
//    } else {
//        cout<<"khong nguyen to cung nhau";
//    }
//    return 0;
//}

////Bai 7:
//int t;
//void printf(int m,int n){
//    for(int i=1;i<=m;i++){
//        cout<<" ";
//    }
//    for(int i=1;i<=n;i++){
//        cout<<"*";
//    }
//    cout<<endl;
//}
//
//int main(){
//    cin>>t;
//    for(int i=1;i<=t;i++){
//        printf(t-i,i*2-1);
//    }
//    return 0;
//}

////Bai 8:
//int round1(double x){
//    double z= x-int(x);
//    if(z>=0.5){
//        return ceil(x);
//    } else {
//        return floor(x);
//    }
//}
//
//int round2(double x){
//    double z=x-int(x);
//    if(z>=0.5){
//        return int(x)+1;
//    } else {
//        return int(x);
//    }
//}
//
//int main(){
//    double n;
//    cin>>n;
//    cout<<round1(n)<<" "<<round2(n);
//    return 0;
//}

////Bai 9:
//int randN(int n){
//   return rand()%n;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    srand(time(0));
//    cout<<randN(n);
//}

////Bai 11:
//long long BinToDem(string s){
//    long long ans=0;
//    reverse(s.begin(),s.end());
//    for(int i=0;i<s.length();i++){
//        ans+=(s[i]-'0')*pow(2,i);
//    }
//    return ans;
//}
//
//string DemToBin(long long x){
//    string ans="";
//    while(x){
//        ans+=char(x%2+'0');
//        x/=2;
//    }
//    reverse(ans.begin(),ans.end());
//    return ans;
//}
//
//int main(){
//    string s;
//    cin >> s;
//    cout << BinToDem(s) << endl;
//    long long x;
//    cin >> x;
//    cout << DemToBin(x);
//    return 0;
//}
