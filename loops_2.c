                                         /*  lec-8(loops)   */

// Q> Write a program to print Englsh alphabet in lower case
// main(){
//   char x;
//   for(x='a';x<='z';x++)
//    printf("%c ",x);
// }

// main(){
//   for(int x=97;x<=122;x++)
//    printf("%c ",x);
// }

// Q> Write a program to calculate sum of first N natural numbers
// main(){
//     int i,sum,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1,sum=0;i<=n;i++)
//         sum=sum+i;
//     printf("%d",sum);
//     getch();
// }

// main(){
//     int i,sum,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1,sum=0;i<=n;sum=sum+i,i++);   // for(i=1,sum=0;i<=n;i++,sum=sum+i); ---> isme phele i++ execute hoga phir sum=sum+i ,so exact ans nahi aayega . Hence phele hm sum=sum+i likhenge phir i++ likhenge 
//     printf("%d",sum);
//     getch();
// }

// Q> Write a program to print first N terms of the series
//    1 3 6 10 15 .....
// slon: in this series har iteration pe jo fist N natural numbers ka sum aa raha tha uski ko print karwa rahe hai
// main(){
//     int i,sum,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1,sum=0;i<=n;printf("%d ",sum=sum+i),i++);   
//     /*
//        sum=sum+i;
//        printf("%d",sum);
//     */
//     getch();
// }

// Q> Write a program to print first N terms of the series
//    2 5 10 17 26 37 ....
//    soln: take square of fist N natural numbers and the add 1 in evey square
// eg  teke square of N natural numbers
//      2 2 2 2 2
//     1 2 3 4 5
//     1 4 9 16 25

//    then add 1 in every square
//    2 5 10 17 26 <--- req series

main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     printf("%d ",i*i+1); // logic i*i+1
    // getche();
    getch(); 
}

// Q> difference between getch() and getche()