#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> numbers = {10, 15, 3, 7};
  int k = 17;
  map<int, int> m;

  for (auto number : numbers) { // Fixed the variable name here
    m.insert({number, true});
  }
  for(auto number: numbers){
    int c = k - number;
    if(m[c]){
      cout << "true" << endl;
      return 0;
    }
  }
  cout << "false" << endl;
  return 0;
}
