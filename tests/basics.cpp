#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest.h>
#include "../src/btree_tester.hpp"


btree::BNode* root = new btree::BNode();

TEST_CASE("get_insertion_position" * doctest::timeout(300)) {
  
  btree::BTreeTester tester(4);
  
  root->keys.push_back(6);
  root->keys.push_back(8);


  REQUIRE(tester.get_insertion_position(root, 2) == 0);

  REQUIRE(tester.get_insertion_position(root, 7) == 1);
  
  REQUIRE(tester.get_insertion_position(root, 9) == 2);
}


TEST_CASE("split_node" * doctest::timeout(300)) {
  
  btree::BTreeTester tester(4);
  
  root->keys.push_back(6);
  root->keys.push_back(8);
  root->keys.push_back(16);
  root->keys.push_back(18);


  REQUIRE((tester.split_node(root))->keys[0] == 18);
}


TEST_CASE("insert" * doctest::timeout(300)) {

  btree::BTreeTester* tester = new btree::BTreeTester(4);

  for (size_t i = 0; i < 13; ++i) 
    tester->insert(i);
  
  btree::BNode* root_tester = tester->get_root();  
    
  REQUIRE(root_tester->keys[0] == 2);
  /*
  REQUIRE(root_tester->keys[1] == 5);
  REQUIRE(root_tester->keys[2] == 8);
  REQUIRE(root_tester->children[0]->keys[0] == 0);
  REQUIRE(root_tester->children[0]->keys[1] == 1);
  REQUIRE(root_tester->children[1]->keys[0] == 3);
  REQUIRE(root_tester->children[1]->keys[1] == 4);
  REQUIRE(root_tester->children[2]->keys[0] == 6);
  REQUIRE(root_tester->children[2]->keys[1] == 7);
  REQUIRE(root_tester->children[3]->keys[0] == 9);
  REQUIRE(root_tester->children[3]->keys[1] == 10);
  REQUIRE(root_tester->children[3]->keys[2] == 11);
  */
  
  /*
  REQUIRE(tester.root->keys[0] == 8);
  REQUIRE(tester.root->children[0]->keys[0] == 2);
  REQUIRE(tester.root->children[0]->keys[1] == 5);
  REQUIRE(tester.root->children[1]->keys[0] == 11);
  REQUIRE(tester.root->children[1]->keys[1] == 14);
  REQUIRE(tester.root->children[1]->keys[2] == 17);
  REQUIRE(tester.root->children[0]->children[0]->keys[0] == 0);
  REQUIRE(tester.root->children[0]->children[0]->keys[1] == 1);
  REQUIRE(tester.root->children[0]->children[1]->keys[0] == 3);
  REQUIRE(tester.root->children[0]->children[1]->keys[1] == 4);
  REQUIRE(tester.root->children[0]->children[2]->keys[0] == 6);
  REQUIRE(tester.root->children[0]->children[2]->keys[1] == 7);
  REQUIRE(tester.root->children[1]->children[0]->keys[0] == 9);
  REQUIRE(tester.root->children[1]->children[0]->keys[1] == 10);
  REQUIRE(tester.root->children[1]->children[1]->keys[0] == 12);
  REQUIRE(tester.root->children[1]->children[1]->keys[1] == 13);
  REQUIRE(tester.root->children[1]->children[2]->keys[0] == 15);
  REQUIRE(tester.root->children[1]->children[2]->keys[1] == 16);
  REQUIRE(tester.root->children[1]->children[3]->keys[0] == 18);
  REQUIRE(tester.root->children[1]->children[3]->keys[1] == 19);
  */
}
