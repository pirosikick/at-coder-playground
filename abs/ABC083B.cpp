#include <iostream>

using namespace std;

int main()
{
  // 整数の入力
  // int a;
  // cin >> a;
  // スペース区切りの整数の入力
  int n, a, b;
  cin >> n >> a >> b;
  int total = 0;
  for (int i = 1; i <= n; i++)
  {
    int tmp = i;
    int total2 = 0;
    do
    {
      total2 = total2 + tmp % 10;
      tmp = tmp / 10;
    } while (tmp != 0);

    if (total2 >= a && total2 <= b)
    {
      total = total + i;
    }
  }

  cout << total;
  // 文字列の入力
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}