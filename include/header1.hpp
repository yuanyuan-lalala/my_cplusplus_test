#include "iostream"
class A {
// class A final{//类名后面加上final关键字不能作为基类
public:
  A() = default;
  A(int a_a, int b_b, int c_c, float f_f);

  virtual ~A() = default; // 析构函数进行动态绑定

  virtual void fun1(); // 继承过去之后有可能要覆写
  void fun2();

  int a = 3;
  int b = 4;
  int c;
  float f;

protected:
  double d = 0.0;
};

//进行继承
class B :public A{
    
public:

    B(int a_a,int b_b,int c_c,float f_f,int g_g,int h_h);
    void fun1() override;
    void fun3();
    void fun4();
    int g,h;

};

class SmallInt{
    public:
    SmallInt(int i = 0):val(i){
        if(i < 0 || i > 255)
        throw std::out_of_range("Bad SmallInt value");
    }
    operator int() const{return val;}
    private:
    std::size_t val;
};

