#include <stdio.h>
void main()
{
    int rnum = 9109;
    switch (rnum % 4)
    {
    case 1:
        printf("1\n");
    case 2:
        printf("2\n");
    case 3:
        printf("3\n");
    case 0:
        printf("4\n");
    }
}
    /* My Roll No. is 19109. So the last 4 digits are 9109. Therefore rnum=9109. The % operator gives the remainder when operated 
      between 2 numbers. So rnum%4 in this case is the remainder when 4 divides 9109, which is 1. Therefore rnum%4= 1. The 
      switch operator will switch to case:1, which will print 1. Since the code doesn't contain any 'Break' statement, all the 
      subsequent cases will be executed. So the expected output is
      1
      2
      3
      4
      */