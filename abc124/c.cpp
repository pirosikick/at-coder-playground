#include <iostream>
// #include <algorithm>
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
  int count = 0;
  char p = S[0];
  for (int i = 1; i < S.length(); i++)
  {
    if (p == S[i])
    {
      count++;
      p = S[i] == '0' ? '1' : '0';
    }
    else
    {
      p = S[i];
    }
  }
  cout << count;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}