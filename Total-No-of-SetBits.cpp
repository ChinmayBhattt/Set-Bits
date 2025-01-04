#include <iostream>
#include<math.h>
using namespace std;

// ----------------Total No. of Set Bit in a & b----------------
// Class declaration
class TotalSetBits {
      public:

  // funcation 1      
 int bitA(int a) { // decimal to binary
     int ans = 0;
     int i = 0;

   while (a != 0) {
      int digit = a & 1;      
      ans = (digit * pow(10, i)) + ans;
      a = a >> 1;         
      i++;                 
 }
        return ans;
}

  // funcation 2     
 int bitB(int b) {  // decimal to binary
     int ans = 0;
     int i = 0;

    while (b != 0) {
        int digit = b & 1;      
        ans = (digit * pow(10, i)) + ans;
        b = b >> 1;         
        i++;                 
        }

        return ans;
 }

   // funcation 3     
 int bitAB(int x, int y) { // binary to decimal
   
    int t = bitA(x) & bitB(y);
        int ans = 0;
        int i = 0;
        
  while(t != 0) {
      int digit = t % 10;
       if( digit == 1) {
          ans = ans + pow(2,i);
      }
          t = t / 10;
          i++;
        }
        return ans;    
   }
};


int main() {

 TotalSetBits t1;
 int finalSetBit = t1.bitAB(4,5);

 cout << "The Total No. of Set bit is (a & b): " << finalSetBit << endl;


}
