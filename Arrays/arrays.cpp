#include "arrays.h"

int main(){
  /*
  // Total, average, inTwoYears
  float month1 {100};
  float month2 {100};
  float month3 {500};
  float month4 {200};
  float month5 {100};
  float month6 {0};

  float total = month1 + month2 + month3 + month4 + month5 + month6;
  float average = total/6;
  float inTwoyears = average * 24;
  */
  int n;
  float total {0};
  std::cout << "Enter the number of months: \n? ";
  std::cin>> n;
  float monthsArrays[n]; // = {100, 100, 500, 200, 100, 0};
  for (int i = 0; i < n; i++ ) {
    std::cout << "Enter amount for month " << i + 1 << ":\n? ";
    std::cin >>*(monthsArrays + i);
    total += *(monthsArrays + i);
  }
  float average = total / n;
  float inTwoYears = average * 24;
  std::cout << "Total: " << total << std::endl;
  std::cout << "Average: " << average<< std::endl;
  std::cout << "In two years: " << inTwoYears << std::endl;
  return 0;
}
