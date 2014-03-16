#include <iostream>

//using namespace std;
using std::cout;
class HashEntry {
private:
      int key;
      int value=-1;
public:
      HashEntry(int key, int value) {
            this->key = key;
            this->value = value;
      }

      int getKey() {
            return key;
      }

      int getValue() {
            return value;
      }
};

const int TABLE_SIZE = 128;

class HashMap {
private:
      HashEntry **table;
public:
      HashMap() {
            table = new HashEntry*[TABLE_SIZE];
            for (int i = 0; i < TABLE_SIZE; i++)
                  table[i] = NULL;
      }
      void print(){
            for (int i = 0; i < TABLE_SIZE; i++)
                  std::cout << table[i]<< std::endl;
      }
      int get(int key) {
            int hash = (key % TABLE_SIZE);
            while (table[hash] != NULL && table[hash]->getKey() != key)
                  hash = (hash + 1) % TABLE_SIZE;
            if (table[hash] == NULL)
                  return -1;
            else
                  return table[hash]->getValue();
      }

      void put(int key, int value) {
            int hash = (key % TABLE_SIZE);
            while (table[hash] != NULL && table[hash]->getKey() != key)
                  hash = (hash + 1) % TABLE_SIZE;
            if (table[hash] != NULL)
                  delete table[hash];
            table[hash] = new HashEntry(key, value);
      }

      ~HashMap() {
            for (int i = 0; i < TABLE_SIZE; i++)
                  if (table[i] != NULL)
                        delete table[i];
            delete[] table;
      }
};

int main(){
      HashMap table;
      table.print();
      table.put(127,12);
      table.print();
      std::copy;
      return 0;
}