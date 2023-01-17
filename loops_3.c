            /*   lec-9(loops)   */
// Q> find out the output of the following program using dry run

// main(){
//     int i,j;
//     for(i=1;i<=5;i++)
//      for(j=i+1;j<=4;j++)
//       printf("%d ",2*j-1);
//     getch();
// }

// main(){
//     int i=5,j=1;
//     while(i){
//         j=i*j;
//         i--;
//     }
//     printf("%d %d",i,j);
//     getch();
// }

// main(){
//     int x=1,y=10;
//     while(x<y){
//         x++;
//         y--;
//     }
//     printf("%d %d",x,y);
//     getch();
// }

main(){
    int i=2,x=36;
    while(x>1)
    {
        while(x%i==0)
        {
            x/=i;
            printf("%d",i);
        }
        i++;
    }
}