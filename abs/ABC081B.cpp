#include <iostream>

using namespace std;

int n;
int a[210];

int main()
{
  // 整数の入力
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int res = 0;
  while (true)
  {
    bool odd = false;
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 != 0)
        odd = true;
    }

    if (odd)
      break;

    for (int i = 0; i < n; i++)
    {
      a[i] = a[i] / 2;
    }
    res++;
  }
  cout << res << endl;

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