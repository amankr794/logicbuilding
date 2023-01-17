           /* lec-16 (Function in c language) */

// Q1> Write a function to calculate sum of two numbers (TNRN)
//void sum(){
//int a,b,c;
// printf("Enter two numbers: ");
// scanf("%d%d",&a,&b);
// c=a+b;
//  printf("Sum is %d",c);
// }
// // Driver code to check this function
// main(){
//     sum();
//     getch();
// }


// Q2> Write a function to calculate sum of two numbers (TSRN)
// void sum(int a,int b){
//     int c;
//     c=a+b;
//     printf("Sum is %d",c);
// }
// // Driver code to check this function
// main(){
//     int x,y;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&x,&y);
//     sum(x,y);
//     getch();
// }

// Q3> Write a function to calculate sum of two numbers (TNRS)
// int sum(){
// int a,b,c;
// printf("Enter two numbers: ");
// scanf("%d%d",&a,&b);
// c=a+b;
// return c;
// }
// // Driver code to check this function
// main(){
//     int s;
//     s=sum();
//     printf("Sum is %d",s);
//     getch();
// }


// Q4> Write a function to calculate sum of two numbers (TSRS)
// int sum(int a,int b){
//     int c;
//     c=a+b;
//     return c;
// }
// // Driver code to check this function
// main(){
//     int x,y,s;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&x,&y);
//     s=sum(x,y);
//     printf("Sum is %d",s);
//     getch();
// }

/* NOTE: By using return keyword we can return only one value from function
         
         Q>> How can we return multiple values from a function ?
         Ans>> We can return multiple values from a function using Pointer or Structure
*/

// 5> Write a function to calculate area of a circle (TSRS).

// 6> Write a function to check whether a given number is even or odd
//    Function will return 1 if number is even and will return 0 if number is odd.(TSRS)
      
    //   int isEven(int x){
      
    //    /* if(x%2==0)
    //         return 1;
    //       else
    //         return 0;   
    //   */
        
    //     //Agar mai else keyword remove kar do to kya program sahi hoga ?

    //   /*  if(x%2==0)
    //         return 1;   
    //                      // yes this program works fine it is 100% right program. Agar no. even hua to return 1 chlega
    //         return 0;    // Agar no. odd hua to return 1 nahi chlega return 0 chlega
    //   */
      
    //   // We can also write aithout if condition
    //   //  return x%2==0;  // relation operator ka result 0 ya 1 hi aata hai.
    //                       // hence jab exp. x%2==0 solve hoga to iska return 1 hoga agar no. even hua to
    //                       // nahi to return 0 hoga agar no. odd hua to.
    //   return !(x%2);      // !(true) --> 0 (i.e false)
    //                     // !(false) --> 1 (i.e true)
    //   }

//  7> Write a function to calculate factorial of a number
// int fact(int n){
//     int f=1;
//     while(n){
//       f*=n;
//       n--;
//     }
//     return f;
// }

// 8> write a function to calculate number of combinations which can be made from n items, selected r at a time.(TSRS)
int fact(int n){
    int f=1;
    while(n){
      f*=n;
      n--;
    }
    return f;
}
int combi(int n, int r){
    return fact(n)/fact(n-r)/fact(r);
}
// driver function to test this code
main(){
    printf("No. of Combinations: %d",combi(5,2));
}