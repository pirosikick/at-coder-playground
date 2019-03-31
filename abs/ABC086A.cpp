#include <iostream>

using namespace std;

int main()
{
  // 整数の入力
  // int a;
  // cin >> a;
  // スペース区切りの整数の入力
  int a, b;
  cin >> a >> b;
  if ((a * b) % 2 == 0)
  {
    cout << "Even" << endl;
  }
  else
  {
    cout << "Odd" << endl;
  }
  // 文字列の入力
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}