#include <stdio.h>
#include <math.h>
// Q.1 Area of the circle
// int main()
// {
//     float radius;
//     printf("enter the radius : ");
//     scanf("%f",&radius);

//     float area = 3.14 * radius * radius;
//     printf("Area of the circle is %f; ",area);
//     return 0;
// }

// Q.2Diff arthmetic operation
// int main(){
//     int num1, num2;
//     printf("Enter the value of 1st number : ");
//     scanf("%d",&num1);
//     printf("Enter the value of 2st number : ");
//     scanf("%d",&num2);

//     printf("Addition : %d\n",num1 + num2);
//     printf("Subtraction : %d\n",num1 - num2);
//     printf("Division : %d\n",num1 / num2);
//     printf("Miltiplication : %d\n",num1 * num2);

//     return 0;
// }
// Q.3 Physics formula
// int main(){
//     int u, a, t, b, c, p, q;
//     printf("Enter the value of u : ");
//     scanf("%d",&u);
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of t : ");
//     scanf("%d",&t);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     printf("Enter the value of c : ");
//     scanf("%d",&c);
//     printf("Enter the value of p : ");
//     scanf("%d",&p);
//     printf("Enter the value of q : ");
//     scanf("%d",&q);
//     printf("The value of v is :- %d\n",u + (a * t));
//     printf("The value of S is :- %d\n",u * t + (a * t * t)/2);
//     float z =  sqrt(b + 9 * c);
//     printf("The value of T is :- %f\n", 2 * a + z);
//     printf("The value of H is :- %f\n",sqrt(b * b + p * p));

//     return 0;
// }

// Q.4 nested if else example :
// int main(){
//     int num1, num2;
//     printf("Entert two numbers : ");
//     scanf("%d %d",&num1, &num2);
//     if (num1 > num2)
//     {
//         if (num1 == num2){
//             printf("Resul : %d = %d\n", num1, num2);
//         }
//         else{
//             printf("Result : %d > %d", num1, num2);
//         }
//     }
//     else{
//         printf("Result : %d < %d", num1, num2);
//     }
//     return 0;
// }

// Example 1 :
// void main(){
//     if(!printf("")){
//         printf("Hi");
//     }
//     else{
//         printf("Hello");
//     }
// }

// Example 2 :
// void main(){
//     char val = 1;
//     if(val --== 0){
//         printf("True");
//     }
//     else{
//         printf("False");
//     }
//     return 0;
// }

// Q.5 even odd
// int main(){
//     int num;
//     printf("enter a number;");
//     scanf("%d",&num);
//     if(num%2==0)
//     {
//         printf("number is even");

//     }
//     else{
//         printf("number is odd");
//     }
//     return 0;
// }

// Q.6 leap year
// int main(){
//     int num;
//     printf("enter a year:");
//     scanf("%d",&num);
//     if(num%4==0 && num%100!=0 || num%400==0)
//     {
//         printf("YES IT'S A LEAP YEAR");

//     }
//     else{
//         printf("NOT A LEAP YEAR");
//     }
//     return 0;
// }

// Q.7 marks obtain by student in 5 diff. subject are input from keyboard as per following :
// int main()
// {
//     int m1, m2, m3, m4, m5, per;
//     printf("enter the marks of students : ");
//     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
//     per = (m1 + m2 + m3 + m4 + m5) / 5;
//     if (per >= 60)
//     {
//         printf("ist division");
//     }
//     else if (per >= 50)
//     {
//         printf("second division");
//     }
//     else
//     {
//         printf("fail");
//     }
//     return 0;
// }

// Q.8 insarance compney
// int main(){
//     char ms, sex;
//     int age;
//     printf("Enter Your Merital Status : ");
//     scanf("%c", &ms);
//     printf("Enter Your Age : ");
//     scanf("%d", &age);
//     printf("Enter Your SEX : ");
//     scanf("%c", &sex);

//     if((ms == 'M') || (ms == 'U'))
// }

// Q.9 which no. is largest
// int main(){
//     int n1,n2,n3;
//     printf("Enter you numbers : ");
//     scanf("%d  %d %d",&n1,&n2,&n3);

//     int largest_N = (n1>=n2 && n1>=n3) ? n1 : (n2>n3) ? n2 : n3;

//     printf("The largest No. is : %d ", largest_N);
//     return 0;
// }

// Q.10 swap 2 var
// int main()
// {
//     int a, b;
//     printf("Enter the value of a & b : ");
//     scanf("%d %d", &a, &b);
//     printf("value of variable a & b befor swaping : %d %d \n", a, b);

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("After swaping the value of variable a & b : %d %d\n", a, b);
//     return 0;
// }

// Q.11 swaping using temp
// int main() {
//     int a,b,temp;
//     printf("Enter the value of  a: ");
//     scanf("%d", &a);
//     printf("Enter the value of  b: ");
//     scanf("%d", &b);

//     printf("Before swapping:\n");
//     printf("Value of a: %d\n", a);
//     printf("Value of b: %d\n", b);

//     temp =a;
//     a = b;
//     b = temp;

//     printf("After swapping:\n");
//     printf("Value of a: %d\n", a);
//     printf("Value of b: %d\n", b);

//     return 0;
// }

// switch

// Example 1
// int main()
// {
//     int i = 2;
//     switch (i)
//     {
//     case 1:
//         printf("case1\n");
//         break;
//     case 2:
//         printf("case2\n");
//         break;
//     default:
//         printf("default\n");
//         break;
//     }
// }

// Q.12 Calculator

// int main() {
//     int n1, n2;
//     char op;
//     float result;

//     printf("Enter first number: ");
//     scanf("%d", &n1);

//     printf("Enter second number: ");
//     scanf("%d", &n2);

//     printf("Choose operation to perform (+, -, *, /): ");
//     scanf(" %c", &op);

//     switch(op) {
//         case '+':
//             result = n1 + n2;
//             break;
//         case '-':
//             result = n1 - n2;
//             break;
//         case '*':
//             result = n1 * n2;
//             break;
//         case '/':
//             result = (float)n1 / n2;
//             break;
//         default:
//             printf("Invalid operation.\n");
//             return 0;
//     }

//     printf("Result: %d %c %d = %f\n", n1, op, n2, result);

//     return 0;
// }

// Q.13 Calender

// int main() {
//     int month, year;

// // Input month and year from the user
//     printf("Enter month number (1-12): ");
//     scanf("%d", &month);
//     printf("Enter year: ");
//     scanf("%d", &year);

// Q.14 Switch statement to determine the number of days in the input month
//     switch(month) {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             printf("31 Days.\n");
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             printf("30 Days.\n");
//             break;
//         case 2:
//             if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//                 printf("29 Days.\n");
//             else
//                 printf("28 Days.\n");
//             break;
//         default:
//             printf("Invalid Month.\n");
//             break;
//     }

//     return 0;
// }

// Example for 'b--':-
// int main(){
//     int a = 5, b = 7;
//     b--;
//     printf("%d, %d\n",a++, b--);
//     printf("%d, %d\n",++a, --b);
//     return 0;
// }

// Q.15 use switch statment to check that the input is vowel or constent

// int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     switch(ch) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("%c is a vowel.\n", ch);
//             break;
//         default:
//             printf("%c is a consonant.\n", ch);
//     }
// return 0;
// }

// Q.16 use switch statment to check whether the number is positive, negative or zero

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     switch(num > 0 ? 1 : num < 0 ? -1 : 0) {
//         case 1:
//             printf("%d is positive.\n", num);
//             break;
//         case -1:
//             printf("%d is negative.\n", num);
//             break;
//         default:
//             printf("%d is zero.\n", num);
//     }
//     return 0;
// }

// Q17. reverse the entered no.

// Q.18 write a program to enter a no. till the user wants and at the end it should display the count of +ve -ve and zero entered

// int main(){
//     int a = 100, b,c;
//     if(a >= 400)
//     {
//         b = 300;
//         c = 200;
//     }
//     printf("%d %d",b,c);
// }

// int main(){
//     int x =10, y = 2;
//     if (x == 4 );
//     printf("%d %d",x, y);
// }

// Q.19 make it in a single switch statment and use nested switch statment and use int and char too

// int main() {
//     int num;
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch(ch) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("%c is a vowel.\n", ch);
//             break;
//             printf("%c is a consonant.\n", ch);
//             break;
//     }
//     switch(num > 0 ? 1 : num < 0 ? -1 : 0){
//         case 1:
//             printf("%d is positive.\n", num);
//             break;
//         case -1:
//             printf("%d is negative.\n", num);
//             break;
//         default:
//         printf("%d is zero.\n", num);
//     }
//     return 0;
// }

// Q.20 a program to identify whether the insurence of the driver should be included in the police of the compeny
// R1.if driver is M age <= 30 UM
// R2.if driver is F age <= 25 UM
// R3.if driver is M or F age > 30 UM
// int main()
// {
//     int age;
//     char ms, sex;
//     printf("Enter your Marital Status : ");
//     scanf(" %c", &ms);
//     printf("Enter your Gender : ");
//     scanf(" %c", &sex);
//     printf("Enter your Age : ");
//     scanf("%d", &age);
//     if ((ms == 'U') && (sex == 'M') && age <= 30)
//     {
//         printf("Your insurence is included in the police of the compeny");
//     }
//     else if ((ms == 'U') && sex == 'F' && age <= 25)
//     {
//         printf("Your insurence is included in the police of the compeny");
//     }
//     else if ((ms == 'U') && (sex == 'M' || sex == 'F') && age > 30)
//     {
//         printf("Your insurence is not included in the police of the compeny");
//     }
//     else
//     {
//         printf("Invalid input");
//     }
//     return 0;
// }

// loops //

// 1.for loop

// Q.21 print first 10 natural no.
// int main(){
//     int i, count;
//     printf("Enter the Count: ");
//     scanf("%d",&count);
//         for ( i = 1; i < count; i++)
//         {
//             printf("%d\n",i);
//         }
//     return 0;
// }

// Q.22 print any number's table
// int main()
// {
//     int i, count, x;
//     printf("Enter the number for the table: ");
//     scanf("%d", &x);
//     printf("Enter the Count: ");
//     scanf("%d", &count);
//     for (i = 1; i <= count; i++)
//     {
//         printf("%d x %d = %d\n", x, i, x * i);
//     }
//     return 0;
// }

// 2.while loop

// Example
// int main(){
//     int i, n;
//     printf("Enter the value from where you want to print : ");
//     scanf("%d", &i);
//     printf("Enter the value till where you will end the print : ");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         printf("%d\n",i);
//         i++;
//     }
// }

// 3.do while loop

// Example
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("%d\n", i);
//         i++;
//     } while (i <= 5);
//     return 0;
// }

// Q.23 Pattern printing --square of stars--
//  int main(){
//      int i,j;
//      for (i = 1;i<=5;i++){
//          for(j = 1;j<=5;j++){
//              printf("* ");
//          }
//      printf("\n");
//      }
//  }

// Q.24 --triangle star--
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// * Questions for prectice
// to print 1 to n even and odd no.
// to print all upper and lower case alphabets
// reverse and factorial of a num *

// 'for loop variation'
// 1st variation = for (i = 1, j = 2; i <= 10; i++)
// 2nd variation = for (x = 0; x != 456;)
//                          scanf("%d",&x);
// 3rd variation = for(;;){
//     ch = getchar();
//     if (ch == 'A')
//     break;
// }
// 4th variation = for(t = 0; t < 1000; t++);     --pointer's concept--

// Example of continue statement
// int main(){
//     int i = 0, j = 0;
//     for (i = 0; i < 5; i++){
//         printf("i = %d, j = %d\n",i,j);
//         for (j = 0; j < 5; j++){
//             if(j == 2){
//                 continue;
//             }
//             printf("%d",j);
//     }
//     printf("\n");
// }
// return 0;
// }

// Q.25 <print the sum of 1st n natural no. using the while loop>
// int main(){
//     int n, i = 1, sum = 0;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     while (i <= n)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("The sum of 1st %d natural no. is : %d",n,sum);
//     return 0;
// }

// Q.26 write a program to print the following pattern triangle star pattern
// int main(){
//     int i, j;
//     for (i =1; i<=5; i++){
//         for(j = 1; j <= i; j++){
//             printf(".");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// NOTE :- Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

// Q.27 write a program to check whether the given no. is armstrong no. or not
// int main(){
//     int n, r, sum = 0, temp;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     temp = n;   // stored it into temp kyu ki baad me hum ko esko compare karna hn isliye with its real value
//     while (n > 0)
//     {   
//         r = n % 10;
//         sum = sum + (r * r * r);
//         n = n / 10;
//     }
//     if (temp == sum)
//     {
//         printf("The given no. is armstrong no.");
//     }
//     else
//     {
//         printf("The given no. is not armstrong no.");
//     }
//     return 0;
// }

// NOTE :- Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.The Fibonacci sequence is given by 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.

// Q.28 write a program to print the fibonacci series
// int main(){
//     int n, a = 0, b = 1, c, i;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     printf("%d %d",a,b);
//     for (i = 2; i < n; i++)
//     {
//         c = a + b;
//         printf(" %d",c);
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// NOTE :- A palindromic number is a number that remains the same when its digits are reversed. For example, 121 is a palindromic number.

// Q.29 Check whether the given no. is palindromic no. or not
// int main(){
//     int n, r, temp, sum = 0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     temp = n;
//     while (n > 0)
//     {   //logic to reverse the no.
//         r = n % 10;
//         sum = (sum * 10) + r;
//         n = n / 10;
//     }
//     if (temp == sum)
//     {
//         printf("The given no. is palindromic no.");
//     }
//     else
//     {
//         printf("The given no. is not palindromic no.");
//     }
//     return 0;
// }

// NOTE :- A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

// Q.30 write a program to check whether the given no. is prime no. or not
// int main(){
//     int n, i, m = 0, flag = 0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     m = n / 2;
//     for (i = 2; i <= m; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("The given no. is not prime no.");
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("The given no. is prime no.");
//     }
//     return 0;
// }


// Q.31 write a program to print the reverse of a given no.
// int main(){
//     int n, r, sum = 0, temp;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     temp = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = (sum * 10) + r;
//         n = n / 10;
//     }
//     printf("The reverse of the given no. is : %d",sum);
//     return 0;
// }

// Q.32 -- right angle triangle with increasing order of stars --
// int main(){
//     int n, m = 1;
//     printf("Enter the no. of rows: ");
//     scanf("%d",&n);

//     for( int i = n; i >= 1; i--){
//         for(int j = 1; j <= i - 1; j++){
//             printf(" ");
//         }
//         for(int k = 1; k <= m; k++){
//             printf("*");
//         }
//         printf("\n");
//             m++;
//     }
//     return 0;
// }

// Q.33 Diamond pattern
// int main(){
//     int i,j,s,n = 7;
//     for (i =1;i<=(n+1)/2;i++ ){
//         for ( s = 1; s <= (n+1)/2-i; s++)
//         {
//             printf(" ");
//         }
//         for ( j = 1; j <=2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }
//     for (i = 1;i<=(n-1)/2;i++ ){
//         for ( s = 1; s <= i; s++)
//         {
//             printf(" ");
//         }
//         for ( j = 1; j <=n-2*i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//      }
// }

// Q.34 star-zero problem [C.N]
// int main(){
//     int i,j,k,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){      // 1st
//             if(j==i){
//                 printf("*");
//             }
//             else{
//                 printf("0");
//             }
//         }
//         for(k=1;k<=n-i+1;k++){    // 2nd
//             if(k==n-i+1){
//                 printf("*");
//             }
//             else{
//                 printf("0");
//             }
//         }
//         for(k=1;k<=n-i+1;k++){    // 3rd
//             if(k==n-i+1){
//                 printf("*");
//             }
//             else{
//                 printf("0");
//             }
//         }
//         for(int m=1;m<=i-1;m++){    // 4th
//             printf("0");
//         }
//         printf("\n");
//     }
//     return 0;
//}

// Q.35 hollow inverted right angle triangle
// int main()
// {
//     int n, m, j, i = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//             if (j == 1 || j == i || i == n)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         printf("\n");
//     }
//     return 0;
// }

// Q.36 number right angle triangle
// int main() {
//     int n, i, j;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q.37 alphabate triangle
// int main() {
//    int i, j;
//    char input, alphabet = 'A';
//    printf("Enter an uppercase character you want to print in the last row: ");
//    scanf("%c", &input);
//    for (i = 1; i <= (input - 'A' + 1); ++i) {
//       for (j = 1; j <= i; ++j) {
//          printf("%c ", alphabet);
//       }
//       ++alphabet;
//       printf("\n");
//    }
//    return 0;
// }

// write a program using while loop to print the sum of 1st n natural no.
// wirte a program to count the digits of a no. and reverse too
// write a program to check whether the given no. is armstrong no. or not
// write a program to print the fibonacci series
// write a program to print the following pattern triangle star pattern (n = 6)
// write a program to print the following pattern of digits 


// # FUNCTIONS # //

// Baby Example :
// int italy(){
//     printf("Italy\n");
// }
// int brazil(){
//     printf("Brazil\n");
// }
// int india(){
//     printf("India\n");
// }
// int main(){
//     printf("i am in main\n");
//     italy();
//     printf("i am back in main\n");
//     brazil();
//     italy();
//     india();
//     printf("welcom back\n");
// }

// Example of Function :
// int calSum(x,y,z)
// int x,y,z;
// {
//     int d;
//     d = x + y + z;
//     return (d);
// }
// int main(){
//     int a,b,c,sum;
//     printf("Entter the three number : \n");
//     scanf("%d %d %d",&a,&b,&c);
//     sum = calSum(a,b,c);
//     printf("Sum = %d",sum);
// }

// this example show the calling convension inside a (_) whixh is done from R -> L
// int main() {
//     int a = 1;
//     printf("%d %d %d",a,++a,a++);
//     return 0;
// }

#include <stdio.h>

int main()
{
    char c;
    printf("Enter any alphabet: ");
    scanf("%c", &c);

    switch(c)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A': 
        case 'E': 
        case 'I':
        case 'O':
        case 'U': 
            printf("%c is a vowel\n", c);
            break;
        default: 
            printf("%c is a consonant\n", c);
    }

    return 0;
}

//write a program to perform addition,subtraction,division and multiplication of two numbers given as
#include<stdio.h>
int main()
{
    float a,b,sum,difference,division,product;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    sum=a+b;
    printf("Value of a+b:%f\n",sum);
    difference=a-b;
    printf("Value of a-b:%f\n",difference);
    division=a/b;
    printf("Value of a/b:%f\n",division);
    product=a*b;
    printf("Value of a*b:%f\n",product);
    return 0;
}

