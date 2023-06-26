// finding square root of given number / application of binary search
// code
class Solution {
public:
    int mySqrt(int x) {
      if(x==0){
          return 0;
      }
      int s = 1, e = x;
      while(s<=e){
          long int m = s + (e-s)/2;
          if(m*m==x){
              return m;
          }
          if(m*m>x){
              e = m-1;
          }
          if(m*m<x){
              s = m+1;
          }
      }
      return e;
    } 
};

// Algorithim
/*
1.) if x is equal to zero return zero
2.) initialize start = 1 and end = x
3.) while start <= end
  3.1) find middle = start + (end-start)/2;
  3.2) check if middle * middle equal to x then return middle
  3.3) check if middle * middle > x then end = middle -1
  3.4) check if middle * middle < x then start = middle + 1
4.) return end
*/