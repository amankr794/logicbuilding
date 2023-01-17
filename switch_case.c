/* Lec-15 (Switch case) */
// switch case is used when we have multiples options and we have to choose/run only one option

// Q> Write a program which takes month number as an input from user, and display number of days in that month
// main(){
//   int month;
//   printf("Enter Month number: ");
//   scanf("%d",&month);

//   switch(month){
//     case 1:
//     printf("Month is January\nNo. of days = 31");
//     break;
//     case 2:
//     printf("Month is February\nNo. of days = 28/29");
//     break;
//     case 3:
//     printf("Month is March\nNo. of days = 31");
//     break;
//     case 4:
//     printf("Month is April\nNo. of days = 30");
//     break;
//     case 5:
//     printf("Month is May\nNo. of days = 31");
//     break;
//     case 6:
//     printf("Month is Jun\nNo. of days = 30");
//     break;
//     case 7:
//     printf("Month is July\nNo. of days = 31");
//     break;
//     case 8:
//     printf("Month is August\nNo. of days = 31");
//     break;
//     case 9:
//     printf("Month is September\nNo. of days = 30");
//     break;
//     case 10:
//     printf("Month is October\nNo. of days = 31");
//     break;
//     case 11:
//     printf("Month is November\nNo. of days = 30");
//     break;
//     case 12:
//     printf("Month is December\nNo. of days = 31");
//     break;
//     default:
//     printf("Enter a valid month number");
//   }
// }

// We can make this program more simple we have only to print no. of days in month
// main(){
//   int month;
//   printf("Enter the month number: ");
//   scanf("%d",&month);
//   switch(month){
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//     printf("No. of days = 31");
//     break;
//     case 2:
//     printf("Month February\n Days 28");
//     break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//     printf("No. of days = 30");
//     break;

//     default:
//     printf("Invalid Month Number");
//   }
//   getch();
// }

// Q>> Can we write multiple constant in cases separated by comma
// case 1,3,5,7,8,10,12: ---> no we got error for this
// case 1:3:5:7:8:10:12: ---> in this we also got error
// case 1||3||5||7||8||10||12: ---> in this case program run karega but output wrong aayega
// program "31 days" sirf month number 1 ke liye print karega 3 5 7 8 10 12 ke liye invalid month number print kar dega

// main(){
//   int month;
//   printf("Enter the month number: ");
//   scanf("%d",&month);
//   switch(month){
//     case 1||3||5||7||8||10||12:  // the result of the exp. 1||3||5||7||8||10||12 will be 1 (b/c every non-zero value is true.
//     printf("No. of days = 31");  // It is written as       true||true||true||true||true||true||true ). So this whole expression will be treated as 1. Henc result comes true only for month no.1
//     break;
//     case 2:
//     printf("Month February\n Days 28");
//     break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//     printf("No. of days = 30");
//     break;

//     default:
//     printf("Invalid Month Number");
//   }
//   getch();
// }

/*
  Q> write a program which takes marks obtained in an examination (out of 100) from user
     and display the appropriate Grade
     90<marks<=100  A
     80<marks<=90  B
     70<marks<=80  C
     60<marks<=70  D
     50<marks<=60  E
     marks<=50     F
*/
// note: for this type of question we have to use three dot ... for making range of value in every case
// value must in contiuation for making range
// in switch case three dot ... helps us to writing the range
// main()
// {
//     int marks;
//     printf("Enter your marks: ");
//     scanf("%d", &marks);
//     switch (marks)
//     {
//     case 91 ... 100:
//         printf("Grade A");
//         break;
//     case 81 ... 90:
//         printf("Grade B");
//         break;
//     case 71 ... 80:
//         printf("Grade C");
//         break;
//     case 61 ... 70:
//         printf("Grade D");
//         break;
//     case 51 ... 60:
//         printf("Grade E");
//         break;
//     case 0 ... 50:
//         printf("Grade F");
//         break;
//     default:
//         printf("Enter valid marks");
//     }
// }

/* menu driven programs */
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int x, r, l, b, ar, p, q, s;
//     float area, avg;
//     while (1)
//     {   // these are menues
//         printf("\n1. Area of circle");
//         printf("\n2. Area of rectangle");
//         printf("\n3. Average of three numbers");
//         printf("\n4. Exit");
//         printf("\n\nEnter your choice: ");
//         scanf("%d", &x);
//         switch (x)
//         {
//         case 1:
//             printf("Enter radius of circle: ");
//             scanf("%d", &r);
//             area = 3.14 * r * r;
//             printf("Area is %f\n", area);
//             break;
//         case 2:
//             printf("Enter length and breadth of a rectangle: ");
//             scanf("%d%d", &l, &b);
//             ar = l * b;
//             printf("Area of rectangle is %d\n", ar);
//             break;
//         case 3:
//             printf("Enter three numbers: ");
//             scanf("%d%d%d", &p, &q, &s);
//             avg = (p + q + s) / 3.0;
//             printf("Average of three numbers is %f\n", avg);
//         case 4:
//             exit(0);
//         default:
//             printf("\n Invalid choice\n");

//         } // end of switch
//     }     // end of while
// }

/* we can also declare variable in case body  for this we have to put curley braces in case body*/

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     while (1)
//     {
//         int x;
//         // these are menues
//         printf("\n*************** MENU ********************");
//         printf("\n1. Area of circle");
//         printf("\n2. Area of rectangle");
//         printf("\n3. Average of three numbers");
//         printf("\n4. Exit");
//         printf("\n*************************************");
//         printf("\n\nEnter your choice: ");
//         scanf("%d", &x);
//         switch (x)
//         {
//         case 1:
//         {
//             int r;
//             float area;
//             printf("Enter radius of circle: ");
//             scanf("%d", &r);
//             area = 3.14 * r * r;
//             printf("Area is %f\n", area);
//             break;
//         }
//         case 2:
//         {
//             int l, b;
//             int ar;
//             printf("Enter length and breadth of a rectangle: ");
//             scanf("%d%d", &l, &b);
//             ar = l * b;
//             printf("Area of rectangle is %d\n", ar);
//             break;
//         }
//         case 3:
//         {
//             int p, q, s;
//             float avg;
//             printf("Enter three numbers: ");
//             scanf("%d%d%d", &p, &q, &s);
//             avg = (p + q + s) / 3.0;
//             printf("Average of three numbers is %f\n", avg);
//             break;
//         }
//         case 4:
//             exit(0);
//         default:
//             printf("\n Invalid choice\n");

//         } // end of switch
//     }     // end of while
// }

// Using same variable in each case
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     while (1)
//     {
//         int x;
//         // these are menues
//         printf("\n*************** MENU ********************");
//         printf("\n1. Area of circle");
//         printf("\n2. Area of rectangle");
//         printf("\n3. Average of three numbers");
//         printf("\n4. Exit");
//         printf("\n*************************************");
//         printf("\n\nEnter your choice: ");
//         scanf("%d", &x);
//         switch (x)
//         {
//         case 1:
//         {
//             int r;
//             float area;
//             printf("Enter radius of circle: ");
//             scanf("%d", &r);
//             area = 3.14 * r * r;
//             printf("Area is %f\n", area);
//             break;
//         }
//         case 2:
//         {
//             int l, b;
//             int area;
//             printf("Enter length and breadth of a rectangle: ");
//             scanf("%d%d", &l, &b);
//             area = l * b;
//             printf("Area of rectangle is %d\n", area);
//             break;
//         }
//         case 3:
//         {
//             int x, y, z;
//             float avg;
//             printf("Enter three numbers: ");
//             scanf("%d%d%d", &x, &y, &z);
//             avg = (x + y + z) / 3.0;
//             printf("Average of three numbers is %f\n", avg);
//             break;
//         }
//         case 4:
//             exit(0);
//         default:
//             printf("\n Invalid choice\n");

//         } // end of switch
//     }     // end of while
// }
