//Author: Omar Briceno; Course: COSC 1337 Spring 2018 TT13; Instructor: Thayer
//Lab 1: does something ... fix this later
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

main(){
	cout<<"this program actually does something"<<endl;
	
	while (true){
		cout<<"Enter the number of rows desired to make a diamond pattern (0 to quit):";
		int rows =0;
		cin>>rows;

		if (rows>0){
			// determines number of columns
			int col=0;
			if ((rows%2)==0)
				col = rows-1;
			else
				col = rows;
				
			int blank_s=0;
			blank_s=(rows/2);
			//determines the number of whitespaces
			
			//making external forloop for rows
			for (int i = 0; i < rows; i++){
				//creating a string of ''<- this will go first
				string bl((abs(i-blank_s)),' ');
				//creating a string of '*'
				string s(/*col*/col-2*(abs(i-blank_s)),'*');
				cout<<bl<<s<<abs(i-blank_s)<<endl;
			}
			cout<<'\n';
		}
		else{
			cout<<"GoodBye!";
			break;
		}
	}
}

