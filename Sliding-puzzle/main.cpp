#include<bits/stdc++.h>
#include "./headers/puzzle.h"
#include "./headers/constructor.h"
#include "./headers/set.h"
#include "./headers/jumble.h"
#include "./headers/sorted.h"
#include "./headers/check.h"
#include "./headers/result.h"
#include "./headers/display.h"
#include "./headers/save.h"
#include "./headers/reload.h"

using namespace std;

int main()
{
	char ch;
	int game = 1;
	int play =1;
//	USER INTERFACE
	puzzle *p = new puzzle;
	puzzle *p1 = new puzzle;
	while(game)
	{
		
		cout<<"Select an option from the following menu"<<endl<<endl;
		cout<<"=== Game Menu ==="<<endl;
		cout<<"n - Play a fresh new puzzle game "<<endl;
		cout<<"s - Save the game "<<endl;
		cout<<"r - Reload the saved game"<<endl;
		cout<<"q - Quit the Game"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 'n' : 	{
							puzzle *p1 = new puzzle;
							p1->display();
							p = p1;
							while( play )
							{
								play = p1->check();
							}
							play = 1;
							break;
						}
			
			case 's' : p->save();
						break;
			
			case 'r' :	p->reload();
						p->display();
						while(play)
						{
							play = p1->check();
						}
						play = 1;
						break;
			
			case 'q' : game = 0;
						break;
			
						
			default : cout<<"Choose a valid option"<<endl;
		}
		
	}

	return 0;
}
