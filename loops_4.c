/*   lec-10(loops)   */
// Q> find out the output of the following program using dry run
// main(){
//     int x=(1,2,3);
//     while(x)
//     {
//         printf("%d",x);
//         x--;
//     }
// }

/*
   int x=1,2,3;  error
   int x=(1,2,3) --> jab bhi hm is tarah se likhenge to always last wali vlaue variable me assign hogi so x=3
   note : jab bhi paranthesis() me multiple values separate karke likhi jati hai to last wali value oos expression ka result banti hai isliye x=3 hoga
   x=1,2,3; --->x=1;
*/

// main(){
//     int x;
//     x=(1,2,3);
//     while(x)
//     {
//         printf("%d",x);
//         x--;
//     }
// }

// main(){
//     int x;
//     x=1,2,3;
//     while(x)
//     {
//         printf("%d",x);
//         x--;
//     }
// }

// Q> write a program to calculate sum of first N odd natural numbers

// main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i,sum;
//     for(i=1,sum=0;i<=n;i++)
//         sum=sum+(2*i-1);
//     printf("Sum is %d",sum);
// }

// main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int i,sum;
//     for(i=1,sum=0;i<=n;sum=sum+(2*i-1),i++);
//     printf("Sum is %d",sum);
// }

// main()
// {
//     int n, i, s = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 1; 2 * n >= i; i++)
//     {
//         if (i & 1)
//             s = s + i;
//     }
//     printf("Sum is %d", s);
// }

// Q> find out the output of the following program using dry run

// main(){
//     int x=128;
//     for(;x;x>>=1)
//      printf("%d ",x);
// }

// main()
// {
//     int x = 1, a, s;
//     for (s = 0, a = 5; a; x <<= 1, a--)
//     {
//         s = s + x;
//     }
//     printf("%d", s);
// }

main(){
    int i=1;
    do{
        printf("%d",i);
        i++;
    }while(i=i-2);
}