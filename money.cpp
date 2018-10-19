#include <iostream>
using namespace std;
int main() {
  while ( true ) {
    int fifty = 50;
    int ten = 10;
    int five = 5;
    int one = 1;
    int numfifty = 0;
    int numten = 0;
    int numfive = 0;
    int numone = 0;
    int totalnum = 0;
    int l=0;
    int total;
    cout << "請輸入總金額\n";
    cin >> total;
    if ( total >= fifty ) {
      numfifty = total / fifty;
      l = total % fifty;
    }else {
      l = total;
    }
    if ( l >= ten ) {
      numten = l / ten;
      l = l % ten;
    }
    if ( l >= five ) {
      numfive = l / five;
      l = l % five;
    }
    if ( l >= one ) {
      numone = l / one;
      l = l % one;
    }
    totalnum = numfifty + numten + numfive + numone;
    cout << "最少硬幣數:" << totalnum << "\n(" << fifty << "元" << numfifty << "枚、" << ten << "元" << numten << "枚、" << five << "元" << numfive << "枚、" << one << "元" << numone << "枚)\n\n";
  }
}
  
