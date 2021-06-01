#pragma once
#include<bits/stdc++.h>
#include "puzzle.h"
#include "result.h"
#include "reload.h"
using namespace std;

int puzzle::check()
{
	int input=0;
	int x_in=0, y_in=0, x_ch=0, y_ch=0;
	int ch=0;
	int temp=0;
	cout<<"Enter a no. to swap the blank space with(1...15) or enter 0 to exit: ";
	cin>>input;
	if(input == 0)
	{
		cout<<"You have left the game successfully"<<endl;
		return 0;
	}
	else
	{
		for(int i=0; i<row.size(); i++)
		{
			for(int j=0; j<row[i].size(); j++)
			{
				if(row[i][j] == input)
				{
					x_in = i;
					y_in = j;
				}
				else if(row[i][j] == 63)
				{
					x_ch = i;
					y_ch = j;
				}
			}
		}
		if(x_in == x_ch+1 && y_in == y_ch)
		{
			temp = row[x_in][y_in];
			row[x_in][y_in] = row[x_ch][y_ch];
			row[x_ch][y_ch] = temp;
		}
		else if(y_in == y_ch+1 && x_in==x_ch)
		{
			temp = row[x_in][y_in];
			row[x_in][y_in] = row[x_ch][y_ch];
			row[x_ch][y_ch] = temp;	
		}
		else if(x_in == x_ch-1 && y_in == y_ch)
		{
			temp = row[x_in][y_in];
			row[x_in][y_in] = row[x_ch][y_ch];
			row[x_ch][y_ch] = temp;	
		}
		else if(y_in == y_ch-1 && x_in==x_ch)
		{
			temp = row[x_in][y_in];
			row[x_in][y_in] = row[x_ch][y_ch];
			row[x_ch][y_ch] = temp;	
		}
		else
		{
			cout<<"Enter a valid input"<<endl;
		}
		cout<<"check";
		display();
		int r = result();
		return r; 	
	}

}
