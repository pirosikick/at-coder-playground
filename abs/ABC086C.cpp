#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  // 整数の入力
  int t[100000];
  int x[100000];
  int y[100000];
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> t[i] >> x[i] >> y[i];

  int bt = 0;
  int bx = 0;
  int by = 0;
  for (int i = 0; i < N; i++)
  {
    int dt = t[i] - bt;
    int dist = abs(x[i] - bx) + abs(y[i] - by);
    if (dt < dist || (dt % 2) != (dist % 2))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  // int a;
  // cin >> a;
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