#include <iostream>
// #include <algorithm>
// #include <set>
// #include <map>
#include <cmath>
using namespace std;

int main()
{
  int N, T;
  cin >> N >> T;
  int A[100];
  for (int i = 0; i < N - 1; i++)
    cin >> A[i];

  int distance = 0;
  for (int i = 0; i < N - 1; i++)
  {
    distance += A[i];
  }
  // cout << "distance: " << distance << endl;

  float result = (float)distance / (float)T;
  // cout << "result: " << result << endl;
  cout << ceil(result) << endl;

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