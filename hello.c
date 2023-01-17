                                /*             lec-2(Ability to trace the code)                 */

/*
 main(){

  }
*/


/*
main(){
  getch();
}
*/


// main(){
//     printf("Hello");
// }


// main(){
//     printf("Hello");
//     getch();
// }

// Q> can we write more than one getch() function in a program ?
/*
main(){
    getch();
    printf("Hello");
    getch();
}
*/

// Q> Write a program to print "MySirG" on the screen
/*
main(){
    printf("\"MySirG\"");
    getch();
}
*/


// main(){
//     int x=5;
//     printf("value of x is %d",x);
//     getch();
// }

// main(){
//  int x=5,y=6;
//  printf("Sum of %d and %d is %d",x,y,x+y);
//  getch();
// }

// Q> write a program which takes one character from keyboard using getch() function and display its ASCII code.
main(){
    char ch;
    printf("Enter a character: ");
    ch=getch(); // getch() function jo bhi character input leta hai usiko return kar deta hai  [getch() function echo nahi karta hai.]
    printf("\nASCII code of %c is %d",ch,ch);
    getch();

}