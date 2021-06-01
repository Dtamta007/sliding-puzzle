#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
#include "sorted.h"
using namespace std;

int puzzle::result()
{
	for(int i=0; i<row.size(); i++)
	{
		for(int j=0; j<row[i].size(); j++)
		{
			if(sorted())
			{
				cout<<"GAME WON"<<endl;
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
}

