#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
#include "save.h"
using namespace std;

vector<vector<int>> puzzle::reload()
{
	ifstream fin("Sliding Game.txt");
	int temp;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			while(fin>>temp)
			{
				if(temp != 32)
				{
					row[i][j] = temp;
				}			
				break;
			}
		}
	}
	return row;
}

