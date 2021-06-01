#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
#include "jumble.h"
using namespace std;

vector<vector<int>> puzzle::set()
{
	vector<int> v = jumble();
	int x = v[0];
	int y = v[1];
	int count = 0;
 	for(int i=0 ;i <4; i++)
	{
		vector<int> col;
		for(int j=0; j<4; j++)
		{
			count ++;
			int temp=0;
			if(count == 16)
			{
				continue;	
			}
			else if(i==x && j==y)
			{
				temp = 63;
				count--;
				col.push_back(temp);
			}
			else
			{
				temp = count;
				col.push_back(temp);
			}
			
		}
		row.push_back(col);
	}
	return row;
}

