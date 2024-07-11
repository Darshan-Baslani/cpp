// Print all combination of a string, i.e abc = abc, acb, bac, bca, etc..
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void combination(string str, vector<string> &visited, int i) {
  if(str[i] == '\0') {
    for(int j=0; j<visited.size(); j++){
      cout << visited[j] << " ";
    }
    return;
  }
  visited.push_back(str[i]);
}

int main() {
  string str = "abc";
  vector<string> combination;
  combination(str);
  return 0;
}
