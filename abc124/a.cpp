#include <iostream>
// #include <algorithm>
// #include <set>
// #include <map>
using namespace std;

int main()
{
  // 整数の入力
  int A, B;
  cin >> A >> B;

  int count = 0;
  for (int i = 0; i < 2; i++)
  {
    if (A > B)
    {
      count += A--;
    }
    else
    {
      count += B--;
    }
  }
  cout << count;

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
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}