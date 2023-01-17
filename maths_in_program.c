/*         lec-12(Understand importance of mathematics in programming)         */

// Q> find out the output of program using dry run
// main()
// {
//     int a, b;
//     for (a = 1; a <= 5; a++)
//     {
//         for (b = 1; b <= 2 * a - 1; b++)
//             printf("%d", b);
//         printf("\n");
//     }
// }
/*
    output: 1
            123
            12345
            1234567
            123456789
*/

// Q>> Write a program to check whether a given number is Prime or not
// main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int div;
//     for (div = 2; div < num; div++)
//         if (num % div == 0)
//             break;
//     if (div == num)
//         printf("%d is prime", num);
//     else
//         printf("%d is not prime", num);
//     getch();
// }

// how to make above program more efficient
// in order to make program more efficient we have to reduce the no. of loop
//  main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int div;
//     for (div = 2; div <= num / 2; div++)
//       if (num % div == 0)
//             break;
//     //if(num>=2&&div>num/2)
//     if(div==num/2+1)
//      printf("%d is prime",num);
//     else
//      printf("%d is not prime",num);
//      getch();
// }

// make this program/logic more improve from this above one by decreasing no. of loops
// program me calculation kam hokar result aa jana cahiye
// eg -    36  2*18
//             3*12
//             4*9
// sqrt(36)  = 6*6
//             9*4
//             12*3
//             18*2

main()
{
    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // int div, s; // in tis logic we have to typecast the result of sqrt() fun to get proper result
    // s = sqrt(num);
    // for (div = 2; div <= s; div++)
    //     if (num % div == 0)
    //         break;
    // if (div == s + 1)
    //     printf("%d is prime", num);
    // else
    //     printf("%d is not prime", num);
    float a=4.5;
    printf("%f",a);

    getch();
}

// this is one of the best logic till now
// note: loop kitne baar chal raha hai agar usko reduce kar liye to hmara program efficent ho gayega