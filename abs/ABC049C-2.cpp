#include <iostream>
#include <string>
#include <algorithm>
// #include <set>
// #include <map>
using namespace std;

int main()
{
  // 整数の入力
  // int a;
  // cin >> a;
  // N分、入力を取る
  // int N;
  // cin >> N;
  // int d[100];
  // for (int i = 0; i < N; i++) cin >> d[i];
  // スペース区切りの整数の入力
  // int b, c;
  // cin >> b >> c;
  // 文字列の入力
  string S;
  cin >> S;

  string patterns[4] = {"dream", "dreamer", "erase", "eraser"};
  for (int i = 0; i < 4; i++)
    reverse(patterns[i].begin(), patterns[i].end());
  reverse(S.begin(), S.end());

  int index = 0;
  while (index < S.size())
  {
    bool found = false;
    for (int i = 0; i < 4; i++)
    {
      if (S.substr(index, patterns[i].size()) == patterns[i])
      {
        found = true;
        index = index + patterns[i].size();
        break;
      }
    }

    if (!found)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}