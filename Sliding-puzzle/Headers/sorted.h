#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
using namespace std;

int puzzle::sorted()
{
	int flag = 1;
	int count = 0;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			count++;
			if(row[i][j] == count)
			{
				continue;
			}
			else
			{
				if( count == 16 && row[i][j] ==63 )
				{
					flag=1;
				}
				else
				{
					flag =0;
				break;
				}
			}
		}
	}
	return flag;
}

