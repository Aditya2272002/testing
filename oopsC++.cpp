#include<bits/stdc++.h>
using namespace std;

/*

1. Opps Why ? 
In normal functional programming we 



*/


class Test {
    public:
        Test(){cout<<"Constructor call ...\n";}
        ~Test(){cout<<"Destructor call...\n";}
};

int main(){
    
        Test t1;
    
    Test t2;
    return 0;

}









class Test {
  private:
    int *x;
  public:
    Test(){
        x = 0;
    }

    Test(int x){
        this->x = x;
    }

    void set(int x){
      this->x = x;
    }

    void print(){
      cout<<*x<<"\n";
    }

};

// int main(){
//  Test t1(10);

 
//  Test t2(t1);
//  t2.set(400);

//  t1.print();
//  t2.print();


// }


// class Point{
//    private:
//       int x,y,a=0;
//    public:
//       Point(){
//          x = 0;
//          y = 0;
//       }

//       Point(int x,int y){
//          this->x = x;
//          this->y = y;
//       }

//       //constructor using Initilizer List
//       Point(int a):x(100),y(200)
//       {
//          this->a = a; 
//       }

//       void print(){
//          cout<<"a= "<<a<<" "<<"x= "<<x<<" "<<"y= "<<y<<"\n";
//       }

// };


// int main(){
//    Point p1,p2(10,20);

//    Point p3 = Point(50,23);

//    Point *p4 = new Point(43,75); // Dynamically Allocation

//    Point p5 = Point(10);

//    p1.print();
//    p2.print();
//    p3.print();
//    p4->print();    // For Dynamically Allocation
//    p5.print();
// }

