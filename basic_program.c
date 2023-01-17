/*           Lec-3 (Basic Programs)          */

// Q1> Write a program to calculate araea of circle
// main(){
//     int r;
//     printf("Enter radius: ");
//     scanf("%d",&r);
//     printf("Area of circle is %f",3.14*r*r);  // 3.14*r*r-- is expression ka result float me aayega so %f format specifier use karna hai
// }

// Q2> Write a program to calculate average of three numbers
// main()
// {
//     int a, b, c;
//     float avg; // average ka result point me aa sakta hai so avg ko float type lenge
//     printf("Enter three numbers: ");
//     scanf("%d%d%d", &a, &b, &c);
//     /*   float avg = (a+b+c)/3;  */ // think about this exp.
//     float avg = (a + b + c) / 3.0;
//     printf("average of %d %d and %d is %f", a, b, c, avg);
// }

//  Q3>Write a program to print only last digit of a given number
/* test case -- x=234 -->4  x=86429 -->9  x=5 -->5  */
main(){
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   printf("The last digit of %d is %d",num,num%10);
   getch();
   
}