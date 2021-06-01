#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
using namespace std;

void puzzle::save()
{
	ofstream fout("Sliding Game.txt");
	while(fout)
	{
		for(int i=0; i<row.size(); i++)
		{
			for(int j=0; j<row[i].size(); j++)
			{
				fout<<row[i][j]<<" ";
			}
			fout<<endl;
		}
		break;
	}
	fout.close();
}
