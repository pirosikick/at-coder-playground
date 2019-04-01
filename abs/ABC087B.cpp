#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  // 整数の入力
  int a;
  cin >> a;
  int b;
  cin >> b;
  int c;
  cin >> c;
  int x;
  cin >> x;

  int pattern = 0;
  for (int acount = 0; acount <= min(x / 500, a); acount++)
  {
    for (int bcount = 0; bcount <= min((x - 500 * acount) / 100, b); bcount++)
    {
      for (int ccount = 0; ccount <= min((x - 500 * acount - 100 * bcount) / 50, c); ccount++)
      {
        if ((ccount * 50 + bcount * 100 + acount * 500) == x)
          pattern++;
      }
    }
  }

  cout << pattern << endl;
  // スペース区切りの整数の入力
  // int b, c;
  // cin >> b >> c;
  // 文字列の入力
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}