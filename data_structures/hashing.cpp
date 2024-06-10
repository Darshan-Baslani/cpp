#include<iostream>
#include<list>
#include<vector>

using namespace std;

class Hashing {
  vector<list<int>> hashtable;
  int size;

  Hashing(int s) {
    size = s;
    hashtable.resize(size);
  }

  int hashvalue(int key) {
    return key%size;
  }

  void add(int value) {
    int hash_value = hashvalue(value);
    hashtable[hash_value].push_back(value);  
  }

  list<int>::iterator search(int value) {
    int hash_value = hashvalue(value);
    return find(hashtable[hash_value].begin(), hashtable[hash_value].end(), value);
  }
  
  void delete(int value) {
    int hash_value = hashvalue(value);
    hashtable[hash_value].erase(search(value));
  }
};

int main() {

  return 0;
}
