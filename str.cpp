#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{
  string s = "ABDULLAH";

  map<char, int> freq;

  for (int i = 0; i < s.size(); i++)
  {
    freq[s[i]]++;
  }

  for (auto i : freq)
  {
    cout << i.first << " : " << i.second << endl;
  }

  return 0;
}