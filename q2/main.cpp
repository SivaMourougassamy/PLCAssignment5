#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
   enum Direction { North,
                    South,
                    East,
                    West };
    
   enum Color { Red,
                Blue,
                Green,
                Yellow };
                
   Direction dir1 = North;
   Color col1 = Red;
   
   //1) Can compare two different data types:
   if(dir1 == col1)
        cout << "north is red";
        cout << "\n";

   dir1 = South;
   col1 = Blue;
   
   //2) Can add two different data types
   cout << (dir1+col1);
   cout << "\n";
   
   //3) Can convert data type to int
   int n = South;
   cout << n;
   cout << "\n";
   
   //4) If not explicitly indexed, Enum is indexed from 0
   //Each of the non first values are indexed as +1 from the previous index if not explicitly indexed
   enum Booleano { True, False };
   //In this case, True would be index 0, and False would be index col1
   
   //5) Can do switch case even tho type is not int (because index is accessed)
   col1 = Blue;
   switch(col1){
       case Red:
        cout << "Red\n";
        break;
       case Blue:
        cout << "Blue\n";
        break;
   }
   
   //6-10) bitwise and mathematical operations
   
   //6)
   cout << (Green-Blue);
   cout << "\n";
   
   //7)
   cout << (Blue&Green);
   cout << "\n";
   
   //8)
   cout << (South*Green);
   cout << "\n";
   
   //9)
   cout << (West << South);
   cout << "\n";
   
   //10)
   cout << (South | Red);
   cout << "\n";
   
   return 0;
}
