//
//  main.cpp
//  TwoSumProblem
//
//  Created by Evan Jensen on 8/5/20.
//  Copyright © 2020 Evan Jensen. All rights reserved.
//
using namespace std;
#include <iostream>
#include <vector>

vector<int> twoSum(vector<int>& nums, int target) {
      bool solutionNotFound = true;
      int indexBase = 0;
      int baseAndCurrentSum;
      int currentElement;
      int currentElementBase;
      while (solutionNotFound) {
         
         for (int i = indexBase; i < nums.size(); i++) {
            baseAndCurrentSum = nums[i] + nums[indexBase];
            //cout << baseAndCurrentSum << endl;
            if (baseAndCurrentSum == target) {
               solutionNotFound = false;
               currentElementBase = nums[indexBase];
               currentElement = nums[i];
               nums.erase(nums.begin(), nums.end());
               nums.push_back (currentElement);
               nums.push_back (currentElementBase);
               break;
            }
            
         }
         if (indexBase == nums.size()) {
            break;
         }
         indexBase++;
         
      }
      return nums;
}


int main(int argc, const char * argv[]) {
   vector<int> myInts {12, 14, 22, 7, 8, 13 };
   for (auto i = myInts.begin(); i != myInts.end(); ++i) {
      cout << *i << endl;
   }
   int target = 21;
   myInts = twoSum(myInts, target);
   cout << "New vector after twoSum: " << endl;

   for (auto i = myInts.begin(); i != myInts.end(); ++i) {
      cout << *i << endl;
   }
  // cout << myInts.size();
//   for (int i = 0; i <= 20; i++) {
//      myInts.push_back(i);
//      }
//   for (int i = 0; i <= 20; i++) {
//      cout << myInts[i] << endl;
//   }
   
   
}
