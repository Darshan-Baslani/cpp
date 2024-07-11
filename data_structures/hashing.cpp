#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;

class Hashing {
  public:
  vector<list<int>> hashtable;
  int size;

  Hashing(int s) {
    size = s;
    hashtable.resize(size);
  }

  int hashvalue(int key) {
    return key%size;
  }

  void add_val(int value) {
    int hash_value = hashvalue(value);
    hashtable[hash_value].push_back(value);  
  }

  list<int>::iterator search_val(int value) {
    int hash_value = hashvalue(value);
    return find(hashtable[hash_value].begin(), hashtable[hash_value].end(), value);
  }
  
  void delete_val(int value) {
    int hash_value = hashvalue(value);
    if(search_val(value) != hashtable[hash_value].end()){
      hashtable[hash_value].erase(search_val(value));
      cout<<value<<" is deleted\n";
    }else{
      cout<<value<<" is not present\n";
    }
  }
};

int main() {

  Hashing hash = Hashing(10);
  hash.add_val(10);
  hash.add_val(11);
  hash.add_val(11);
  hash.add_val(12);

  cout<<*hash.search_val(11)<<endl;
  hash.delete_val(11);
  hash.delete_val(11);

  return 0;
}
