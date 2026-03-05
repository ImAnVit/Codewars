#include <stdio.h>

char get_grade(int a, int b, int c) {

    int average = (a + b + c) / 3; //  <----  hajime!
      
    if (average >= 90)
      return 'A';
    else if (average >= 80)
      return 'B';
    else if (average >= 70)
      return 'C';
    else if (average >= 60)
      return 'D';
    else
      return 'F';
}