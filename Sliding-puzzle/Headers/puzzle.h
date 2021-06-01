#pragma once
#ifndef PUZZLE
#define PUZZLE
#include <vector>
using namespace std;

class puzzle
{
	private:
		vector<vector<int>> row;
		
	public:
		puzzle();
		vector<vector<int>> set();
		int sorted();
		int check();
		vector<vector<int>> reload();
		int result();
		void save();
		vector<int> jumble();
		void display();
};

#endif
