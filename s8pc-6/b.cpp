#include <iostream>
// #include <algorithm>
// #include <set>
// #include <map>
#include <cmath>
using namespace std;

long distance(const int a, const int b, const int enter, const int exit)
{
  int d1 = abs(a - enter);
  int d2 = abs(b - a);
  int d3 = abs(exit - b);
  return d1 + d2 + d3;
}

int main()
{
  int A[30];
  int B[30];

  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> A[i] >> B[i];

  long min = -1;
  for (int i = 0; i < N; i++)
  {
    int enter = A[i];
    for (int j = 0; j < N; j++)
    {
      int exit = B[j];

      long total = 0;
      for (int k = 0; k < N; k++)
      {
        total += distance(A[k], B[k], enter, exit);
      }

      if (min == -1 || min > total)
      {
        min = total;
      }
    }
  }
  cout << min << endl;

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
  // string s;
  // cin >> s;
  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}