int problems::reverse (int num) {
   if (num > 2147483648 || num < -2147483648 ) {
      return 0;
   }
   string reversed = "";
   int div = 10;
   int oneDigitLess, numAtEnd;
   bool isNegative = false;
   if (num < 0) {
      isNegative = true;
   }
   
   for (int i = 0; i < 10; i++) {
      oneDigitLess = num / div;
      numAtEnd = num % div;
      num = oneDigitLess;
      if (isNegative && i < 1) {
         numAtEnd *= -1;
         num *= -1;
      }
      cout << num << endl;
      reversed += to_string(numAtEnd);
      if (oneDigitLess == 0) {
         break;
      }
   }
   cout << reversed << endl;
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
   
   try {
      num = stoi(reversed);
   }
   catch (const exception& e) {
      cout << "exception caught " << e.what() << endl;
      return 0;
   }
   if (isNegative) {
      num *= -1;
   }
   //cout << num << endl;
   return num;
   }
   