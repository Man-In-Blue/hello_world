#include<iostream>
#include<stdlib.h>
#include<iterator>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
int main(){
     bool index = false;
     string s = "-0";
  if(s[0] == '-')
    index = true;
  int len;
  std::reverse(s.begin() , s.end());
  if(index)
    len = s.size() - 1;
  else
    len = s.size();
  int res = 0;
  int temp = 1;
  for(int i = 0 ; i < len ; i++){
    res += temp * (s[i] - '0');
    temp *= 10;
  }
  if(res == 0)
    cout << 0 << endl;
  if(index)
    cout << ~res + 1 << endl;
  else
    cout << res << endl;
    return 0;
}