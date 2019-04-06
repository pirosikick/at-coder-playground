#include <iostream>

using namespace std;

int main()
{
  // 整数の入力
  // int a;
  // cin >> a;
  // スペース区切りの整数の入力
  // int b, c;
  // cin >> b >> c;
  // 文字列の入力
  string S;
  cin >> S;
  if (S.length() < 5)
  {
    cout << "NO" << endl;
    return 0;
  }

  int i = 0;
  while (i < S.length())
  {
    if (
        (i + 6) < S.length() &&
        S[i] == 'd' &&
        S[i + 1] == 'r' &&
        S[i + 2] == 'e' &&
        S[i + 3] == 'a' &&
        S[i + 4] == 'm' &&
        S[i + 5] == 'e' &&
        S[i + 6] == 'r' &&
        S[i + 7] != 'a')
    {
      i = i + 7;
    }
    else if (
        (i + 4) < S.length() &&
        S[i] == 'd' &&
        S[i + 1] == 'r' &&
        S[i + 2] == 'e' &&
        S[i + 3] == 'a' &&
        S[i + 4] == 'm')
    {
      i = i + 5;
    }
    else if (
        (i + 5) < S.length() &&
        S[i] == 'e' &&
        S[i + 1] == 'r' &&
        S[i + 2] == 'a' &&
        S[i + 3] == 's' &&
        S[i + 4] == 'e' &&
        S[i + 5] == 'r')
    {
      i = i + 6;
    }
    else if (
        (i + 4) < S.length() &&
        S[i] == 'e' &&
        S[i + 1] == 'r' &&
        S[i + 2] == 'a' &&
        S[i + 3] == 's' &&
        S[i + 4] == 'e')
    {
      i = i + 5;
    }

    else
    {
      break;
    }
  }
  // cout << i << endl;

  if (i == S.length())
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  // 出力
  // cout << (a + b + c) << " " << s << endl;
  return 0;
}