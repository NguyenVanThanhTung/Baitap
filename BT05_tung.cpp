# include <bits/stdc++.h>

using namespace std;

//Cau A1:
//int a[100];
//int c[5] = {1,2,3,4};
////int c[3] = {1,2,3,4}
//int e[] = {1,2,3,4};
//int main()
//{
//    int b[10];
//    int d[5] = {1,2,3,4};
//    //int d[3] = {1,2,3,4};
//    int f[] = {1,2,3,4};
//    for (int i= 0;i<5;i++) {
//        cout << c[i] << d[i] << e[i] << f[i];
//    }
//
//}

//Cau A2:
//char a[10];
////char c[4] = "abcd";
//char e[] = "abcd";
//using namespace std;
//int main() {
//   char a[10];
//   char d[5] = "abcd";
//   char e[] = "abcd";
//   for (int i= 0;i<5;i++) {
//    cout <<  d[i] << e[i];
//   }
//   cout << sizeof(e);
//}

//Cau A3:
//int main() {
//    char daytab[][12] = {
//      {31,28,31,30,31,30,31,31,30,31,30,31},
//      {31,29,31,30,31,30,31,31,30,31,30,31}
//    };
//    char daytab1[] = {
//      31,28,31,30,31,30,31,31,30,31,30,31,
//      31,29,31,30,31,30,31,31,30,31,30,31
//    };
//    for(int i = 0;i<2;i++) {
//        for (int j =0;j<12;j++) {
//            cout << daytab1[i] << ' ';
//
//        }
//        cout << endl;
//    }
//}

//Cau C1:
//int main(){
//    int n, temp;
//    cin >> n;
//    int arr[n], counter[n];
//    for (int i = 0; i < n; i++){
//        counter[i] = 0;
//    }
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        counter[temp]++;
//        if (counter[temp] > 1) {
//            cout << "Yes" << endl;
//            return 0;
//        }
//    }
//    cout << "No" << endl;
//    return 0;
//}

//Cau C2:
//int main() {
//    string str;
//    cin >> str;
//    int n = str.size();
//    for (int i = 0; i < n / 2; i++) {
//        if (str[i] != str[n - 1 - i]) {
//            cout << "No" << endl;
//            return 0;
//        }
//    }
//    cout << "Yes" << endl;
//    return 0;
//}

//Cau C3:
//bool f(int num) {
//    string numStr = to_string(num);
//    int n = numStr.size();
//    for (int i = 0; i < n / 2; i++) {
//        if (numStr[i] != numStr[n - 1 - i]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int a, b, cnt = 0;
//        cin >> a >> b;
//        for (int i = a; i <= b; i++) {
//            if (f(i)) {
//                cnt++;
//            }
//        }
//        cout << cnt << endl;
//    }
//    return 0;
//}

//Cau C4:
//int countAdjacentMines(vector<vector<int>>& board, int row, int col, int numRows, int numCols) {
//    int count = 0;
//    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//    for (int i = 0; i < 8; ++i) {
//        int newRow = row + dx[i];
//        int newCol = col + dy[i];
//        if (newRow >= 0 && newRow < numRows && newCol >= 0 && newCol < numCols) {
//            if (board[newRow][newCol] == -1) {
//                count++;
//            }
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    vector<vector<int>> arr(m, vector<int> (n));
//    for (int i  = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            char ch;
//            cin >> ch;
//            if (ch == '*') {
//                arr[i][j] = -1;
//            } else if (ch == '.') {
//                arr[i][j] = 0;
//            }
//        }
//    }
//
//    for (int i  = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if (arr[i][j] == -1) {
//                cout << "* ";
//            } else {
//                int cnt = countAdjacentMines(arr, i, j, m, n);
//                cout << cnt << " ";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

//Cau C5:
//int main() {
//    int x, y;
//    cin >> x >> y;
//    int arr[x][y];
//
//    int top = 0, bottom = x - 1, left = 0, right = y - 1;
//    int num = 1;
//
//    while (top <= bottom && left <= right) {
//        for (int i = left; i <= right; ++i) {
//            arr[top][i] = num++;
//        }
//        top++;
//
//        for (int i = top; i <= bottom; ++i) {
//            arr[i][right] = num++;
//        }
//        right--;
//
//        if (top <= bottom) {
//            for (int i = right; i >= left; --i) {
//                arr[bottom][i] = num++;
//            }
//            bottom--;
//        }
//
//        if (left <= right) {
//            for (int i = bottom; i >= top; --i) {
//                arr[i][left] = num++;
//            }
//            left++;
//        }
//    }
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//Cau C6:
//int main(){
//    int n;
//    cin >> n;
//    int arr[n][n];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//            arr[i][j] = 0;
//    }
//
//    int i = 0, j = n / 2, cnt = 2;
//    arr[i][j] = 1;
//
//    while (cnt <= n * n)
//    {
//        int tempj = (j + 1) % n;
//        int tempi = ((i - 1) + n) % n;
//        if (!arr[tempi][tempj])
//        {
//            i = tempi; j = tempj;
//            arr[i][j] = cnt;
//        }
//        else
//        {
//            i = (++i) % n;
//            arr[i][j] = cnt;
//        }
//
//        cnt++;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
