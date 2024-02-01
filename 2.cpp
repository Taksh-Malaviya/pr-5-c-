#include<iostream>
 using namespace std;

class A{

public:

virtual void show(){

cout<<"Method from class A...."<<endl;

}

};

class B : public A

{

public:

void show(){

cout<<"Method from class B...."<<endl;

}

};

int main(){

B b1;

A a1;

A *p1;

p1 = &b1;

p1->show();

}
