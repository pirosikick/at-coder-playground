#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  // 整数の入力
  int n;
  int a[100];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n, greater<int>());
  int alice = 0;
  int bob = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      alice = alice + a[i];
    }
    else
    {
      bob = bob + a[i];
    }
  }
  cout << (alice - bob) << endl;
  // スペース区切りの整数の入力
  // 文字列の入力
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}