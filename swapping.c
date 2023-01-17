/*   lec-4     */
// 1st logic
/*
   kitchen rule
   a=10,b=20
   c=a;
   a=b;
   b=c
*/

// 2nd logic
/*
  using + - operator
   a=10,b=20
   a=a+b;
   b=a-b;
   a=a-b;
*/

// 3rd logic
/*
  using * / operator
  a=10,b=20
  a=a*b;
  b=a/b;
  a=a/b;
*/

// 4th logic
/*
  using bitwise operator(xor operator)
  a=10,b=20;
  eg- 10=01010
      20=10100

      01010
    ^ 10100
      -----
      11110=30

  now take xor of 30 with 10 or 20
   30=11110        30=11110
 ^ 20=10100      ^ 10=01010
      -----           -----
      01010=10        10100=20

    so logic is
    a=a^b;
    b=a^b;
    a=a^b;
*/
main()
{
  int a, b;
  printf("Enter a and b: ");
  scanf("%d%d", &a, &b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("%d %d", a, b);
}

// 5th logic
/*
   a=10,b=20;
   you can use + and - but there will be single line of code

   b=(a+b)-(a=b);
   b=30-(a=b); ---> a=20
   b=30-20;  ------>b=10


*/