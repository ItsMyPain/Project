#include <iostream>
#include <cmath>
using namespace std;

class Figure{
protected:
    float S, P;
    int n;
public:
    Figure() {
    n = 0;
    S = 0;
    P = 0;
    cout<<endl<<"### Your figure created"<<endl;
    }
    void getAngles() const{
        cout<<endl<<"### Angles = "<<n<<endl<<endl;
    }
    void getArea() const{
        cout<<endl<<"### Area = "<<S<<endl<<endl;
    }
    void getPerimetr() const{
        cout<<endl<<"### Perimeter = "<<P<<endl<<endl;
    }

};

class Quadrangle: public Figure{
public:
    Quadrangle() {
    n = 4;
    cout<<"### Your figure with 4 angles created"<<endl;
    }
};

class Straight: public Quadrangle{
public:
    Straight(float a, float b):Quadrangle() {
    S = a * b;
    P = 2 * (a + b);
    cout<<"### Your straight quadrangle created"<<endl<<endl;
    }
};

class Square: public Straight{
public:
    Square(float a):Straight(a, a) {
    S = a * a;
    P = 4 * a;
    cout<<"### Your square created"<<endl<<endl;
    }
};

class Arbitrary: public Quadrangle{
public:
    Arbitrary(float a, float b, float c):Quadrangle() {
    S = a * b * sin(c/57);
    P = 2 * (a + b);
    cout<<"### Your arbitrary quadrangle created"<<endl;
    }
};

class Rhombus: public Arbitrary{
public:
    Rhombus(float a, float c):Arbitrary(a, a, c) {
    S = a * a * sin(c/57);
    P = 2 * (a + a);
    cout<<"### Your rhombus created"<<endl<<endl;
    }
};

class Triangles: public Figure{
public:
    Triangles() {
        n = 3;
        cout << "### Your figure with 3 angles created" << endl;
    }
};

class Rectangular: public Triangles{
public:
    Rectangular(float a, float b):Triangles() {
    S = (a * b)/2;
    P = a + b + sqrt(a * a + b * b);
    cout<<"### Your rectangular triangle created"<<endl<<endl;
    }
};

class Isosceles: public Triangles{
public:
    Isosceles(float a, float b):Triangles() {
    S = sqrt( (a + b/2) * (b/2) * (b/2)*(a - b/2) );
    P = 2 * a + b;
    cout<<"### Your isosceles triangle created"<<endl<<endl;
    }
};

class Equilateral: public Triangles{
public:
    Equilateral(float a):Triangles() {
    S = a * a * float(sqrt(3)/4);
    P = 3 * a;
    cout<<"### Your equilateral triangle created"<<endl<<endl;
    }
};

class Versatile: public Triangles{
public:
    Versatile(float a, float b, float c):Triangles() {
    S = sqrt( ((a + b + c)/2) * ((a - b + c)/2) * ((a + b - c)/2) * ((-a + b + c)/2)) ;
    P = a + b + c;
    cout<<"### Your versatile triangle created"<<endl<<endl;
    }
};

class Cricles: public Figure{
public:
    Cricles () {
    n = 0;
    cout<<"### Your figure without angles created"<<endl;
    }
};

class Cricle: public Cricles{
public:
    Cricle (float a):Cricles() {
    S = float(3.14) * a * a;
    P = 2 * float(3.14) * sqrt((a * a + a * a) / 2);
    cout<<"### Your cricle created"<<endl<<endl;
    }
};

class Ellipse: public Cricles{
public:
    Ellipse (float a, float b):Cricles() {
    S = float(3.14) * a * b;
    P = 2 * float(3.14) * sqrt((a * a + b * b) / 2);
    cout<<"### Your ellipse created"<<endl<<endl;
    }
};

