#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  // 整数の入力
  int n;
  cin >> n;
  int d[100];
  for (int i = 0; i < n; i++)
    cin >> d[i];

  sort(d, d + n, greater<int>());
  int dan = 1;
  int before = d[0];
  for (int i = 1; i < n; i++)
  {
    if (d[i] < before)
    {
      dan++;
    }
    before = d[i];
  }
  cout << dan << endl;

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