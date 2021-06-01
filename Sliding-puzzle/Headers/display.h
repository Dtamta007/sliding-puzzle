#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
#include "reload.h"
using namespace std;

void puzzle::display()
{	
	for(int i=0; i<row.size(); i++)
	{
		cout<<" +--+--+--+--+--+--+--+"<<endl;
		for(int j=0; j<row[i].size(); j++)
		{
			if(row[i][j] == 63)
			{
				cout<<" | "<<(char)row[i][j]<<" | ";
			}
			else if(j==3)
			{
				cout<<" | "<<row[i][j]<<" | ";
			}
			else
			{
				cout<<" | "<<row[i][j];
			}
		}
		cout<<endl;
		if(i==3)
		{
			cout<<" +--+--+--+--+--+--+--+  "<<endl;
		}
		
	}
}
