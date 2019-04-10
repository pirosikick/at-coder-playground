#include <iostream>
// #include <algorithm>
// #include <set>
// #include <map>
using namespace std;

int main()
{
  // 整数の入力
  int N;
  cin >> N;
  int d[101];
  for (int i = 0; i < N; i++)
    cin >> d[i];

  int num[101] = {0};
  for (int i = 0; i < N; i++)
  {
    num[d[i]]++;
  }

  int count = 0;
  for (int i = 0; i < 101; i++)
  {
    if (num[i] > 0)
    {
      count = count + 1;
    }
  }

  cout << count << endl;

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