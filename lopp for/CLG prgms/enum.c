#include<stdio.h>
enum week{sun,mon,tue,wed,thu,fri,sat};
int main()
{
  enum week today;
  today=tue;
  printf("%d day",today +1);
  return 0;
}