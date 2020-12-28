#include "btree.hpp"

int main() {

  // takes an argument as the order of b tree
  btree::BTree bt(5);

  /*
  bt.insert(26);
  std::cout << "adding 26 ...\n";
  bt.traverse();
  
  bt.insert(18);
  std::cout << "adding 18 ...\n";
  bt.traverse();

  bt.insert(16);
  std::cout << "adding 16 ...\n";
  bt.traverse();
  
  bt.insert(8);
  std::cout << "adding 8 ...\n";
  bt.traverse();
  
  bt.insert(6);
  std::cout << "adding 6 ...\n";
  bt.traverse();
  
  bt.insert(36);
  std::cout << "adding 36 ...\n";
  bt.traverse();
 
  bt.insert(10);
  std::cout << "adding 10 ...\n";
  bt.traverse();
  
  bt.insert(26);
  std::cout << "adding 26 ...\n";
  bt.traverse();
  
  bt.insert(66);
  std::cout << "adding 66 ...\n";
  bt.traverse();
  
  bt.insert(66);
  std::cout << "adding 66 ...\n";
  bt.traverse();
  
  bt.insert(8);
  std::cout << "adding 8 ...\n";
  bt.traverse();
  
  bt.insert(18);
  std::cout << "adding 18 ...\n";
  bt.traverse();
  
  bt.insert(16);
  std::cout << "adding 16 ...\n";
  bt.traverse();
  */

  for (size_t i = 0; i < 66; ++i)
    bt.insert(i);
  //bt.testing();
  bt.traverse();
  return 0;
}
