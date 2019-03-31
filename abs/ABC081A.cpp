#include <iostream>

using namespace std;

int main()
{
  // 整数の入力
  // int a;
  // cin >> a;
  // スペース区切りの整数の入力
  // int b, c;
  // cin >> b >> c;
  // 文字列の入力
  string s;
  cin >> s;
  int count;
  if (s[0] == '1')
    count++;
  if (s[1] == '1')
    count++;
  if (s[2] == '1')
    count++;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  cout << count << endl;
  return 0;
}