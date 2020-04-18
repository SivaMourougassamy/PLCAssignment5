#include <stdio.h>

enum Direction { North, South, East, West };
enum Color { Red, Blue, Green, Yellow };
enum Booleano { True, False };

void main()
{
   enum Direction dir1 = North;
   enum Color col1 = Red;
   
   //1) Can compare two different data types:
   if(dir1 == col1)
        printf("north is red\n");

   dir1 = South;
   col1 = Blue;
   
   //2) Can add two different data types
   printf(dir1+col1+"\n");
   
   //3) Can convert data type to int
   int n = South;
   printf(n+"\n");
   
   //4) If not explicitly indexed, Enum is indexed from 0
   //Each of the non first values are indexed as +1 from the previous index if not explicitly indexed
   //In this case, True would be index 0, and False would be index col1
   
   //5) Can do switch case even tho type is not int (because index is accessed)
   col1 = Blue;
   switch(col1){
       case Red:
        printf("Red\n");
        break;
       case Blue:
        printf("Blue\n");
        break;
   }
   
   //6-10) bitwise and mathematical operations
   
   //6)
   printf(Green-Blue+"\n");
   
   //7)
   printf(Blue&Green+"\n");
   
   //8)
   printf(South*Green+"\n");
   
   //9)
   printf(West << South+"\n");
   
   //10)
   printf(South | Red+"\n");
}
