// swap algorithm example (C++98) 
/*
#include <iostream>     // std::cout
#include <algorithm>    // std::swap
#include <vector>       // std::vector

int main () {

  int x=10, y=20;                              // x:10 y:20
  std::swap(x,y);                              // x:20 y:10

  std::vector<int> foo (4,x), bar (6,y);       // foo:4x20 bar:6x10
  std::swap(foo,bar);                          // foo:6x10 bar:4x20

  std::cout << "foo contains:";
  for (std::vector<int>::iterator it=foo.begin(); it!=foo.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0; 
}*/

#include <stdio.h>
#include <stdlib.h>

 void swap (float*, float*);

 int main()
{
  float x,y;

  printf("n Dame 2 numeros:");
  scanf("%f%f",&x,&y);
  swap(&x,&y);
  printf("n Los numeros son:(%f %f) n",x,y);

      system("PAUSE");
      return 0;
}

void swap(float *p, float *q)
{
  float d;

  d = *p;
  *p = *q;
  *q = d;
}
