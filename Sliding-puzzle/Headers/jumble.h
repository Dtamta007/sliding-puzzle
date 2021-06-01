#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
using namespace std;

vector<int> puzzle::jumble()
{
	vector<int> v;
	srand(time(NULL));

	int x = ((rand() % ((3) - 1)) +1);
	int y = ((rand() % ((3) - 1)) +1);
	v.push_back(x);
	v.push_back(y);
	return v;
}

