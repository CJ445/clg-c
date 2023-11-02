#include <stdio.h>

float rectangle(float l, int b) {
  return l * b;
}

float circle(int r) {
  return 3.14 * r * r;
}

float triangle(float a, float b, float c) {
  return (a + b + c) / 2 * (a - b + c - a);
}

int main() {
  float a, b, c;
  printf("Enter r or c or t for Rectangle or Circle or Triangle: ");
  char shape;
  scanf(" %c", & shape);
  switch (shape) {
  case 'r':
    printf("Enter length and breadth: ");
    scanf("%f %f", & a, & b);
    printf("Area of Rectangle is: %f", rectangle(a, b));
    break;
  case 'c':
    printf("Enter radius: ");
    scanf("%f", & a);
    printf("Area of Circle is: %f", circle(a));
    break;
  case 't':
    printf("Enter three side: ");
    scanf("%d%d%d", & a, & b, & c);
    printf("Area of Triangle is: %d", triangle(a, b, c));
    break;
  default:
    printf("Invalid Input");
  }
  return 0;

}
