#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[]) {
  vector<int> vect;
  int n;
  cin >> n;
  int product = 1;
  while(n--){
    int input;
    cin >> input;
    if(input != 0) {
      product *= input;
    }
    vect.emplace_back(input);
  }
  for(int i=0; i<vect.size(); i++){
    if(product != 0){
      vect[i] = product/vect[i];
    }
  }
  for(int i=0; i<vect.size(); i++){
    cout << vect[i] << " ";
  }
  return 0;
}

