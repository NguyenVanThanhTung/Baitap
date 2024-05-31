Phan 1:
    Bai 1,2,3:
        # include <bits/stdc++.h>

        using namespace std;

        struct Point {
            int x, y;
        };

        void print(Point &p) {
            cout << p.x << “ “ << p.y;
        }

        Point mid_point(const Point &p1,const Point &p2){
            Point p;
            p.x = (p1.x + p2.x)/2;
            p.y = (p1.y + p2.y)/2;
            return p;
        }

    int main(){
        Point point;
        point.x = 10;
        point.y = 12;
        print(point);
    }

    Bai 4:
        # include <bits/stdc++.h>

        using namespace std;

        struct Student(){
            int age;
            string first_name;
            string last_name;
            int standard;

            Student(int age_, string first_name_, string last_name_, int standard_){
                age = age_;
                first_name = first_name_;
                last_name = last_name_;
                standard = standard_;
            }

            void printStudent(){
                cout << age << " " << first_name << " " << last_name << " " << standard << endl;
            }
        };

        int main(){
            Student student(15, john, carmack,10);
            student.printStudent();
        }

Phan 2:
    Bai 5:
        struct Rect(){
            int x, y, w, h;

            bool check_in(const Point &p){
                if(p.x >= x && p.y >= y && p.x <= x+w && p.y <= y+h){
                    return true;
                }
                return false;
            }
        };
    Bai 6:
        struct Ship(){
            Rect rect;
            string id;
            int dx, dy;

            void shipMove(){
                rect.x += dx;
                rect.y += dy;
            }
        };

        void display(const Ship ship){
            cout << ship.id <<endl;
            cout << ship.rect.x << " " << ship.rect.y << endl;
        }
    Bai 7:
        int main(){
            Ship ship1, ship2;
            cin >> ship1.id >> ship1.rect.x >> ship1.rect.y >> ship1.rect.w >> ship1.rect.h >> ship1.dx >> ship1.dy;
            cin >> ship2.id >> ship2.rect.x >> ship2.rect.y >> ship2.rect.w >> ship2.rect.h >> ship2.dx >> ship2.dy;

            while (loop < 10) {
                ship1.move(); ship2.move();
                display(ship1); display(ship2);
            }
        }
Phan 3:
    Bai 8:
        int main(){
            Point p;
            p.x = 0;
            p.y = 0;
            cout << &p << " " << &p.x << " " << &p.y << endl;
        }
        Nhan xet: dia chi cua bien dau tien trong struct p la dia chi cua dia chi cua p, cac dia chi cua cac bien tiep theo tang dan theo bien
    Bai 9:
        void displayAdress1(Point p){
            cout << &p << " " << &p.x << " " << &p.y << endl;
        }

        void displayAdress2(Point &p){
            cout << &p << " " << &p.x << " " << &p.y << endl;
        }

        int main(){
            Point p;
            p.x = 0;
            p.y = 0;
            cout << &p << " " << &p.x << " " << &p.y << endl;
            displayAdress1(p);
            displayAdress2(p);
        }
        Nhan xet: dia chi trong ham displayAdress1 khac dia chi cua p, dia chi cua ham displayAdress2 trung dia chi cua p
    Bai 10:
        struct Ship(){
            Rect rect;
            string id;
            int dx, dy;
        };

        void shipMove(Ship ship){
            ship.rect.x += dx;
            ship.rect.y += dy;
            cout << ship.id << " " << ship.rect.x << " " << ship.rect.y << endl;
        }

        int main(){
            Ship ship1;
            cin >> ship1.id >> ship1.rect.x >> ship1.rect.y >> ship1.rect.w >> ship1.rect.h >> ship1.dx >> ship1.dy;
            shipMove(ship1);
        }
        Nhan xet: gia tri trong mang va trong struct bi loi
    Bai 11:
        struct String(){
            int n;
            char *str;

            String(const char* str_){
                str = str_;
                n = str.size();
            }

            void printString(){
                for(int i=0; i<n; i++){
                    cout << *str[i];
                }
            }
            void append(const char*str_ ){
                n_ = str_.size();
                for(int i=0; i<n_; i++){
                    *str[i+n] = *str_[i];
                }
            }

            ~String(){
                delete str;
            }
        };
