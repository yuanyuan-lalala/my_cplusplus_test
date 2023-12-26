#include "header1.hpp"
#include"iostream"

A::A(int a_a,int b_b,int c_c,float f_f):a(a_a),b(b_b),c(c_c),f(f_f){}
void A::fun1(){
        c = a + b;
}
void A::fun2(){
        c = a - b;
}

B::B(int a_a,int b_b,int c_c ,float f_f,int g_g,int h_h):A(a_a,b_b,c_c,f_f),g(g_g),h(h_h){}

void B::fun1() {

  c = a * b;
  std::cout << "c = " << c << std::endl;
}


void B::fun3() { A::fun1(); }

void B::fun4() { A::fun2(); }
