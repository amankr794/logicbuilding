/* Lec-11(Agenda: Understand importance of mathematics in programming)   */

// Q> write a program to reverse a given number

main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int rem, rev = 0, temp = num;
    while (num)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("Reverse of %d is %d", num, rev);
    getch();
}

// main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     int rev=0,temp=num;
//     while(num){
//       rev=rev*10+num%10;
//       num=num/10;
//     }
//     printf("Reverse of %d is %d",num,rev);
// }

/*  using for loop   */
// main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int rev = 0, temp = num;
//     for (; num; rev = rev * 10 + num % 10,num = num / 10);
//     printf("Reverse of %d is %d", num, rev);
// }

/*
    note: if num=1200 then the output is rev=21 according to above logic which is true
    but  there is a condition we also print 0 in reverse so rev=0021

    num=1200  rev=0021 --> what changes we have to made in above program to get 0021 as reverse of 1200
    num=120   rev=021
*/

// main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     int rem,rev=0;
//     while(num){
//      rem=num%10;  /* this is not true logic because is logic se hum remainder ko print karwa rahe hai but mera number reverse nahi ho raha hai so hm actual problem ko solve nahi kar paa rahe hai*/
// rev=rev*10+num;
//       num=num/10;
//       printf("%d",rem);
//     }
// getch();
// }

// condition : printf ko while loop me nahi likhna hai tab kaise karenge
/*
     we have to take count variable initialize to 0 . conut me hm count kare rakhyenge ki kitna baar remainder 0 aaraha hai before non zero remainder aane ke pahele
     count varaible ki value 1 kardenge (i.e 1 se increment kar denge) jab remaider 0 miljayega .
     jaha remainder non zero mil jayega waha count ko lock kar denge count me increment nahi karenge ab count ki value change nahi hogi
     agar baad me remainder phir se zero milega to usme hm count ko consider(i.e increment ) nahi karenge

*/
/* lock - logic  --> vvi */
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int rem, rev = 0, temp = num, count = 0, lock = 1;
    while (num)
    {
        rem = num % 10;
        if (rem == 0 && lock)
            count++;
        else
            lock = 0;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    //   printf("Reverse of %d is ",temp);
    while (count--)
    {
        printf("%c", '0');
    }
    printf("%d", rev);
    getch();
}