# include <bits/stdc++.h>

using namespace std;

//Phan 1:
//struct Point {
//    int x, y;
//
//    void in(){
//        cin >> x;
//        cin >> y;
//    }
//
//    void print(){
//        cout << "(" << x << "," << y << ")";
//    }
//};
//
//Point mid_point1(const Point p1, const Point p2) {
//    Point mid;
//    mid.x = (p1.x + p2.x) / 2;
//    mid.y = (p1.y + p2.y) / 2;
//    return mid;
//}
//
//Point mid_point2(const Point& p1, const Point& p2) {
//    Point mid;
//    mid.x = (p1.x + p2.x) / 2;
//    mid.y = (p1.y + p2.y) / 2;
//    return mid;
//}
//
//int main() {
//    Point p1,p2;
//    p1.in();
//    p2.in();
//    p1.print();
//    p2.print();
//    cout << "Trung diem su dung tham bien: ";
//    Point mid1 = mid_point1(p1,p2);
//    mid1.print();
//    cout << endl;
//    cout << "Trung diem su dung tham tri: ";
//    Point mid2 = mid_point2(p1,p2);
//    mid2.print();
//    cout << endl;
//
//    return 0;
//}

//Phan 2:
//struct Rect {
//    int x, y, w, h;
//    bool contains(const Point& point) const {
//        return (point.x >= x && point.x <= x + w && point.y >= y && point.y <= y + h);
//    }
//};
//
//struct Ship {
//    Rect rect;
//    string id;
//    int dx, dy;
//
//    void move() {
//        rect.x += dx;
//        rect.y += dy;
//    }
//
//    void in(){
//        cin>>id;
//        cin>>rect.x>>rect.y;
//        cin>>rect.w>>rect.h;
//        cin>>dx>>dy;
//    }
//
//};
//
//void display(const Ship& ship) {
//    cout << "ID: " << ship.id << ", Toa do: (" << ship.rect.x << "," << ship.rect.y << ")\n";
//}
//
//int main(){
//    Ship ship1,ship2;
//    ship1.in();
//    ship2.in();
//
//    for (int loop = 0; loop < 10; ++loop) {
//        ship1.move();
//        ship2.move();
//        display(ship1);
//        display(ship2);
//    }
//
//}
