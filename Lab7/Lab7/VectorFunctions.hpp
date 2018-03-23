#pragma once
#include <iostream>
#include <vector>


class VectorFunctions {

public:
	static int sum(const std::vector<int>& v);
	static int max(const std::vector<int>& v);
	static int min(const std::vector<int>& v);
	static double average(const std::vector<int>& v);
};