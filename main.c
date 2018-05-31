#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sqCu_table();
void car_Pool();
void infinite_2();
void heartRate();
void song();
void tax();
void GlobalWarmingHoax();
unsigned long long iterativeFibonacci(unsigned int);

int main()
{
    //sqCu_table();
    //car_Pool();
    //infinite_2();
    //heartRate();
    //song();
    //tax();
    //GlobalWarmingHoax();
    //printf("%llu",iterativeFibonacci(93));
    return 0;
}
/***************************************************
This function prints out the squares and cubes of a
number in a table.
***************************************************/
void sqCu_table(){
    int i;
    printf("Table of Squares and Cubes\n");
    printf("Num\tsquare\tcube\n");
    for(i = 0; i<11; i++){
        printf("%d\t%d\t%d\n", i, i*i, i*i*i );
    }
}
/*******************OUTPUT**************************
Table of Squares and Cubes
Num     square  cube
0       0       0
1       1       1
2       4       8
3       9       27
4       16      64
5       25      125
6       36      216
7       49      343
8       64      512
9       81      729
10      100     1000

Process returned 0 (0x0)   execution time : 0.036 s
Press any key to continue.

***************************************************/

/***************************************************
This function takes input from the user about
there travel expenses and tells them the total cost
for traveling
***************************************************/
void car_Pool(){
    printf("Car-Pool Savings Calculator\n");
    float miles, cost, mpg, fees, tolls;
    int check = 0;
    do{
        if(check)
            printf("ERROR-PLEASE RE-ENTER NUMBERS\n\n");

        printf("\nPlease enter travel per day in Miles: ");
        scanf("%f", &miles);
        printf("\nPlease enter current gas price: ");
        scanf("%f", &cost);
        printf("\nPlease enter average miles per gallon: ");
        scanf("%f", &mpg);
        printf("\nPlease enter daily parking fees: ");
        scanf("%f", &fees);
        printf("\nPlease enter daily tolls: ");
        scanf("%f", &tolls);
        check = 1;
    }while(miles <= 0 || cost <= 0 || mpg <= 0 || fees < 0 || tolls < 0);
    float total = ((miles/mpg)*cost)+fees+tolls;
    printf("\nYour daily cost to drive to work is: %.2f",total);

}
/*******************OUTPUT**************************
Car-Pool Savings Calculator

Please enter travel per day in Miles: 45

Please enter current gas price: 2.96

Please enter average miles per gallon: 36

Please enter daily parking fees: 0

Please enter daily tolls: 0

Your daily cost to drive to work is: 3.70
Process returned 0 (0x0)   execution time : 20.146 s
Press any key to continue.

***************************************************/

/***************************************************
This function prints out powers of 2 indefinitely
***************************************************/
void infinite_2(){
    int i=2;
    while(1){
        printf("%d\n",i);
        i *= 2;
        //if(i > 100000) break;
    }
}
/*******************OUTPUT**************************
It is indefinite, so I will only show the first few
2
4
8
16
32
64
etc.
***************************************************/

/***************************************************
This function takes in the users birthday and the
current day to determine how old the user is then
it calculates the users max heart rate, and the
users target heart rate range.
***************************************************/
void heartRate(){
    int Bday = 0;
    int Bmonth = 0;
    int Byear = 0;
    int Cday = 0;
    int Cmonth = 0;
    int Cyear = 0;
    int age = 0;
    int MAX = 220;
    int targetMax = 0;
    int targetL = 0;
    int targetH = 0;
    printf("\nPlease enter birth month: ");
    scanf("%d", &Bmonth);
    printf("\nPlease enter birth year: ");
    scanf("%d", &Byear);
    printf("\nPlease enter birth day: ");
    scanf("%d", &Bday);
    printf("\nPlease enter current month: ");
    scanf("%d", &Cmonth);
    printf("\nPlease enter current year: ");
    scanf("%d", &Cyear);
    printf("\nPlease enter current day: ");
    scanf("%d", &Cday);

    if(Cyear<Byear){
        printf("You haven't been born yet\n");
        return;
    }
    if(Cmonth == Bmonth && Cday == Bday){
        printf("Happy Birthday\n");
        age = (Cyear - Byear);
    }
    if(Cmonth > Bmonth){
        age = Cyear - Byear;
    }
    if(Cmonth < Bmonth){
        age = Cyear - Byear - 1;
    }
    if(Cmonth == Bmonth && Cday > Bday){
        age = Cyear - Byear;
    }
    if(Cmonth == Bmonth && Cday < Bday){
        age = Cyear - Byear - 1;
    }
    targetMax = MAX - age;
    targetH = targetMax * 0.85;
    targetL = targetMax * 0.50;
    printf("\nYour age is: %d", age);
    printf("\nYour max heart rate is: %d",targetMax);
    printf("\nYour target heart rate range is: %d to %d",targetL,targetH);
}
/*******************OUTPUT**************************

Please enter birth month: 11

Please enter birth year: 1995

Please enter birth day: 14

Please enter current month: 5

Please enter current year: 2018

Please enter current day: 24

Your age is: 22
Your max heart rate is: 198
Your target heart rate range is: 99 to 168
Process returned 0 (0x0)   execution time : 18.998 s
Press any key to continue.

***************************************************/

/***************************************************
This function uses switch statements to print out
the 12 days of Christmas song.
***************************************************/
void song(){
    int state = 1;
    while(state < 13){
        switch(state){
        case 1:
            printf("On the first day of Christmas my true love gave to me,\n");
            break;
        case 2:
            printf("On the second day of Christmas my true love gave to me,\n");
            break;
        case 3:
            printf("On the third day of Christmas my true love gave to me,\n");
            break;
        case 4:
            printf("On the fourth day of Christmas my true love gave to me,\n");
            break;
        case 5:
            printf("On the fifth day of Christmas my true love gave to me,\n");
            break;
        case 6:
            printf("On the sixth day of Christmas my true love gave to me,\n");
            break;
        case 7:
            printf("On the seventh day of Christmas my true love gave to me,\n");
            break;
        case 8:
            printf("On the eighth day of Christmas my true love gave to me,\n");
            break;
        case 9:
            printf("On the ninth day of Christmas my true love gave to me,\n");
            break;
        case 10:
            printf("On the tenth day of Christmas my true love gave to me,\n");
            break;
        case 11:
            printf("On the eleventh day of Christmas my true love gave to me,\n");
            break;
        case 12:
            printf("On the twelfth day of Christmas my true love gave to me,\n");
            break;
        }
        switch(state){
        case 12:
            printf("Twelve drummers drumming,\n");
        case 11:
            printf("Eleven pipers piping,\n");
        case 10:
            printf("Ten lords a-leaping,\n");
        case 9:
            printf("Nine ladies dancing,\n");
        case 8:
            printf("Eight maids a-milking,\n");
        case 7:
            printf("Seven swans a-swimming,\n");
        case 6:
            printf("Six geese a-laying,\n");
        case 5:
            printf("FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,\n");
        case 4:
            printf("Four colly birds,\n");
        case 3:
            printf("Three french hens,\n");
        case 2:
            printf("Two turtles doves, and \n");
        case 1:
            printf("A partridge in a pear tree.\n\n\n");
        }
        state++;
    }
}
/*******************OUTPUT**************************
On the first day of Christmas my true love gave to me,
A partridge in a pear tree.


On the second day of Christmas my true love gave to me,
Two turtles doves, and
A partridge in a pear tree.


On the third day of Christmas my true love gave to me,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the fourth day of Christmas my true love gave to me,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the fifth day of Christmas my true love gave to me,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the sixth day of Christmas my true love gave to me,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the seventh day of Christmas my true love gave to me,
Seven swans a-swimming,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the eighth day of Christmas my true love gave to me,
Eight maids a-milking,
Seven swans a-swimming,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the ninth day of Christmas my true love gave to me,
Nine ladies dancing,
Eight maids a-milking,
Seven swans a-swimming,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the tenth day of Christmas my true love gave to me,
Ten lords a-leaping,
Nine ladies dancing,
Eight maids a-milking,
Seven swans a-swimming,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the eleventh day of Christmas my true love gave to me,
Eleven pipers piping,
Ten lords a-leaping,
Nine ladies dancing,
Eight maids a-milking,
Seven swans a-swimming,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.


On the twelfth day of Christmas my true love gave to me,
Twelve drummers drumming,
Eleven pipers piping,
Ten lords a-leaping,
Nine ladies dancing,
Eight maids a-milking,
Seven swans a-swimming,
Six geese a-laying,
FIIIVEE GOOOOLDENNNN RIIIIIINGGSSSSSS,
Four colly birds,
Three french hens,
Two turtles doves, and
A partridge in a pear tree.



Process returned 0 (0x0)   execution time : 0.305 s
Press any key to continue.

***************************************************/

/***************************************************
This function calculates the "fair" tax alternative
you would pay with expenses given by the user.
***************************************************/
void tax(){
    float fair = 0.3;//"fair"
    float house = 0;
    float food = 0;
    float clothing = 0;
    float transport = 0;
    float learn = 0;
    float health = 0;
    printf("\nPlease enter Housing expense: ");
    scanf("%f", &house);
    printf("\nPlease enter food expense: ");
    scanf("%f", &food);
    printf("\nPlease enter clothing expense: ");
    scanf("%f", &clothing);
    printf("\nPlease enter transportation expense: ");
    scanf("%f", &transport);
    printf("\nPlease enter education expense: ");
    scanf("%f", &learn);
    printf("\nPlease enter health care expense: ");
    scanf("%f", &health);
    float total = house*fair+food*fair+clothing*fair+transport*fair+learn*fair+health*fair;
    printf("\nYour total tax is: %.2f", total);
}
/*******************OUTPUT**************************

Please enter Housing expense: 800

Please enter food expense: 200

Please enter clothing expense: 25

Please enter transportation expense: 100

Please enter education expense: 1000

Please enter health care expense: 500

Your total tax is: 787.50
Process returned 0 (0x0)   execution time : 30.607 s
Press any key to continue.

***************************************************/

/***************************************************
This function is a five question quiz about global
warming. It calculates your number correct and
prints it out.
***************************************************/
void GlobalWarmingHoax(){
    int correct[5] = {3,4,4,4,2};
    int guess[5];

    printf("Question 1: What level in parts per million has the carbon dioxide level never been over?\n");
    printf("1:\t200\n");
    printf("2:\t450\n");
    printf("3:\t300\n");//answer
    printf("4:\t10000\n");
    printf("Guess here: ");
    scanf("%d",&guess[0]);

    printf("Question 2: How many times in the past 650000 years has there been a glacial advance/retreat?\n");
    printf("1:\t50\n");
    printf("2:\t0\n");
    printf("3:\t800\n");
    printf("4:\t7\n");//answer
    printf("Guess here: ");
    scanf("%d",&guess[1]);

    printf("Question 3: Why have the average ocean temperatures increased?\n");
    printf("1:\tToo many people peeing in the ocean\n");
    printf("2:\tToo many people swimming in the ocean\n");
    printf("3:\tThe planet is closer to the sun\n");
    printf("4:\tThe ocean is absorbing much of the increased heat\n");//answer
    printf("Guess here: ");
    scanf("%d",&guess[2]);

    printf("Question 4: How much ice in cubic miles has Greenland lost?\n");
    printf("1:\t2\n");
    printf("2:\t457\n");
    printf("3:\t1539\n");
    printf("4:\t60\n");//answer
    printf("Guess here: ");
    scanf("%d",&guess[3]);

    printf("Question 5: Where are glaciers NOT retreating\n");
    printf("1:\tAlps\n");
    printf("2:\tSahara\n");//answer
    printf("3:\tAndes\n");
    printf("4:\tAlaska\n");
    printf("Guess here: ");
    scanf("%d",&guess[4]);

    int i;
    int total = 0;
    for(i = 0; i < 5; i++){
        if(guess[i]==correct[i]) total++;
    }
    switch(total){
    case 5:
        printf("\n\nExcellent, 5 correct.");
        break;
    case 4:
        printf("\n\nVery good, 4 correct");
        break;
    default:
        printf("\n\nTime to brush up on your knowledge of global warming. %d correct", total);
        break;
    }
}
/*******************OUTPUT**************************
Question 1: What level in parts per million has the carbon dioxide level never been over?
1:      200
2:      450
3:      300
4:      10000
Guess here: 3
Question 2: How many times in the past 650000 years has there been a glacial advance/retreat?
1:      50
2:      0
3:      800
4:      7
Guess here: 1
Question 3: Why have the average ocean temperatures increased?
1:      Too many people peeing in the ocean
2:      Too many people swimming in the ocean
3:      The planet is closer to the sun
4:      The ocean is absorbing much of the increased heat
Guess here: 3
Question 4: How much ice in cubic miles has Greenland lost?
1:      2
2:      457
3:      1539
4:      60
Guess here: 4
Question 5: Where are glaciers NOT retreating
1:      Alps
2:      Sahara
3:      Andes
4:      Alaska
Guess here: 2


Time to brush up on your knowledge of global warming. 3 correct
Process returned 0 (0x0)   execution time : 22.734 s
Press any key to continue.

***************************************************/

/***************************************************
If we find the fibonacci number recursively, we are
looking at an exponential time, while if we do it
iterative, we are looking at a polynomial time.
The tail recursion technique is faster than recursion,
but it still has the drawback of adding another function
call on the stack every time through, while iteration
only has the one function call. Even though the
recursive functions are more intuitive, the iterative
function is faster.
********************************************************/
unsigned long long iterativeFibonacci(unsigned int n){
  unsigned long long f1=0,f2=1,f;
  do{
  f=f1+f2;
  f1=f2;
  f2=f;
  n--;
  }while(n>1);
  return f;
}
/*******************OUTPUT**************************
If input is 93
12200160415121876738
Process returned 0 (0x0)   execution time : 0.116 s
Press any key to continue.

***************************************************/
