#include <iostream>
using namespace std;
int main() {
  int fifty = 50;
  int ten = 10;
  int five = 5;
  int one = 1;
  int num = 0;
  int l=0;
  int total;
  cout << "輸入總金額\n";
  cin >> total;
  if ( total >= fifty ) {
    num = num + total / fifty;
    l = total % fifty;
  }else {
    l = total;
  }
  if ( l >= ten ) {
    num = num + l / ten;
    l = l % ten;
  }
  if ( l >= five ) {
    num = num + l / five;
    l = l % five;
  }
  if ( l >= one ) {
    num = num + l / one;
    l = l % one;
  }
  cout << "最少硬幣數:" << num;
  }
  
