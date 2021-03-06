//
//  reverseInteger.cpp
//  interviewProblems
//
//  Created by Evan Jensen on 8/22/20.
//  Copyright © 2020 Evan Jensen. All rights reserved.
//

#include "problems.h"
   
int problems::reverse (int num) {
   string reversed = "";
   int div = 10;
   int oneDigitLess, numAtEnd;
   bool isNegative = false;
   if (num < 0) {
      isNegative = true;
      num *= -1;
   }
   
   for (int i = 0; i < 10; i++) {
      oneDigitLess = num / div;
      numAtEnd = num % div;
      num = oneDigitLess;
     // cout << num << endl;
      reversed += to_string(numAtEnd);
      if (oneDigitLess == 0 ) {
         break;
      }
   }
   bool isNonZero = false;
   int length = reversed.length();
   for (int i = 0; i< length; i++) {
     // cout << reversed << endl;
      if (!isNonZero) {
         if (reversed.at(i) == '0') {
            reversed.erase(0, 1);
            i--;
            length--;
         }
         else
            isNonZero = true;
      }
   }
   num = stoi(reversed);
   if (isNegative) {
      num *= -1;
   }
   //cout << num << endl;
   return num;
   }
   

