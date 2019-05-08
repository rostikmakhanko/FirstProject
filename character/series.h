#ifndef SERIES_H
#define SERIES_H

#include "binary_search_tree.hpp"

struct Series {
	Series(BinarySearchTree &t,vector<Character> &c);
	void print();
};

#endif //SERIES_H
