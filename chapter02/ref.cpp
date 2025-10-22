#include<iostream>

int swap(int &a, int& b);

int main(void)
{
  int a=10, b=20;
  int& refa=a;
  int & refb=b;

  std::cout<<"a: "<<refa<<", b: "<<refb<<std::endl;

  int n=swap(refa, refb);
  if(n==-1)
    std::cout<<"swap error!"<<std::endl;

  std::cout<<"a: "<<refa<<", b: "<<refb<<std::endl;

  return 0;
}

int swap(int &a, int& b)
{
  if(/*&a==nullptr||&b==nullptr||*/&a==&b)//null값인지 아닌지, 그리고 같은 주소인지 아닌지 확인
    return -1;
  a^=b;
  b^=a;
  a^=b;

  return 0;
}

