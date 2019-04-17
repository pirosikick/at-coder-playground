#include <iostream>
// #include <algorithm>
// #include <set>
// #include <map>
#include <vector>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  // ex)
  // 000111000 => [0, 3, 3, 3]
  // 111000111000 => [3, 3, 3, 3]
  vector<int> nums;
  char now = '1';
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == now)
    {
      count++;
    }
    else
    {
      nums.push_back(count);
      now = S[i];
      count = 1;
    }
  }
  nums.push_back(count);

  int left = 0;
  int right = 0;
  int max = 0;
  while (left < (nums.size() + 1))
  {
    int cnt = 0;

    for (right = left; right < nums.size(); right++)
    {
      // K == 2
      // right == 0 => 0
      // right == 1 => 1
      // right == 2 => 1
      // right == 3 => 2
      // right == 4 => 2
      // right == 5 => 3 => break
      if (K < ((right - left + 1) / 2))
      {
        break;
      }
      cnt = cnt + nums[right];
    }

    if (max < cnt)
    {
      max = cnt;
    }

    left += 2;
  }
  cout << max << endl;

  return 0;
}