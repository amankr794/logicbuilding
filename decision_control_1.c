/*     lec 5 (decision control)     */

// 1> Write a program to check whether a given number is positive or non-positive
// if(num>0) positive;
// else non-positive;

// 2> what will be the output of the program

// main()
// {
//     if (5 > 4)
//     printf("hello");
//     printf("welcome");
//     else printf("bye");
//     getch();             //output: error
// }

// main(){
//     if(3!=2);
//     printf("Hello");
//     else
//     printf("Bye");
//     getch();             //output: error
// }

// main(){
//     if(3!=2);
//     else
//     printf("Bye");
//     getch();            //output: blank screen
// }

// 3> write a program to check whether a given number is even or odd

// if(num%2==0) even;
// else odd;

// if(num%2) odd;
// else even;

//using * and / operator
// logic num/2*2==num
// main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num/2*2==num)
//     printf("Even");
//     else
//     printf("odd");
//     getch();
// }

//using bitwise operator(& operator)
/*
Even no. = xxxxxxx0;
           00000100=4
           00010100=20
           00110110=54
           the least significant bit of even no. is always 0
Odd no. = xxxxxxx1 
          00000011=3 
          00010101=21
          00110101=53
          the least significant bit of odd no. is always 1

    x&1   1=00000001
*/
// main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num&1)
//     printf("Odd");
//     else
//     printf("Even");
//     getch();
// }


//Addition of two number without the use of + operator
// logic --> a-(-b)
main(){
    printf("%d\n",10-(-20));
}