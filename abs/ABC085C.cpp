#include <iostream>

using namespace std;

int main()
{
  // 整数の入力
  // int a;
  // cin >> a;
  // スペース区切りの整数の入力
  int n, Y;
  cin >> n >> Y;
  for (int x = n; x >= 0; x--)
  {
    for (int y = n - x; y >= 0; y--)
    {
      int z = n - x - y;

      if ((x * 10000 + y * 5000 + z * 1000) == Y)
      {
        cout << x << ' ' << y << ' ' << z << endl;
        return 0;
      }
    }
  }

  cout << -1 << ' ' << -1 << ' ' << -1 << endl;
  // 文字列の入力
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}