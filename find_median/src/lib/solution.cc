#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  std::sort(inputs.begin(),inputs.end()); 
  double median = 0;
  int a = inputs.size()%2;
  int b = inputs.size()/2;

  if (a == 1) {
    median = inputs[b];
  }else{
    double c = (inputs[b]+inputs[b-1]);
    median = c/2;
  }
  
  return median;
}
