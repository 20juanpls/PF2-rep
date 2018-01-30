//Author: Omar Briceno; Course: COSC 1337 Spring 2018 TT13; Instructor: Thayer
//Lab 1: Provide menu-driven option look that calculates: restaurant bill; BMI; or quits loop
#include<iostream>
#include<iomanip>

using namespace std;

main(){
	cout<<"This program computes amount of restaurant bill and/or BMI. Use q to quit.";
	
	while (true){
		cout<<"\nOptions: a)mount of restaurant bill; B)MI; q)uit:";
		char option=' ';
		cin>>option;
		//Lowering character, the user can input either upper or lower case characters
		option = tolower(option);
		if (option=='a'){
			//computes and displays restaurant bill
			//food cost
			cout<<"  Food cost? ";
			double food_cost=0.0;
			cin>>food_cost;
			//tip percentage
			cout<<"  Tip percentage? ";
			double tip_per=0.0;
			cin>>tip_per;
			//tax rate declared
			const double tax_rate = 0.0825;
			//Im going to be nice and base tax only on food cost w/o tip
			//>double tax = food_cost*tax_rate;
			// calculating tip based on food cost
			//>double tip = food_cost*(tip_per/100);
			//calculating total, i think its better to do it all in one go
			double total_bill = food_cost + (food_cost*tax_rate) + (food_cost*(tip_per/100));
			cout<<"  Restaurant bill is: $"<<setprecision(2)<<fixed<<total_bill<<"\n";
		}
		else if(option == 'b'){
			//computes and displays BMI
			//asks user for height
			cout<<"  Input your height in feet and inches.\n";
			//height in feet
			cout<<"    Feet: ";	
			int height_f=0;
			cin>>height_f;
			//and inches if any
			cout<<"    Inches: ";
			int height_in=0;
			cin>>height_in;
			int total_height = (height_f*12)+height_in;
			//asks user for weight
			cout<<"  Input your weight in pounds: ";
			int weight=0;
			cin>>weight;
			//calculate and prints bmi
			double BMI = 703*(double)weight/(total_height*total_height);
			cout<<"  BMI: "<<setprecision(2)<<fixed<<BMI<<'\n';
		}
		else if(option == 'q'){
			//program ends
			cout<<"Good-bye!";
			break;
		}
		else{
			//will display error message if user inputs invalid option
			cout<<"Invalid answer, please enter a valid option";
		}
	}
}
/*Test output:
This program computes amount of restaurant bill and/or BMI. Use q to quit.
Options: a)mount of restaurant bill; B)MI; q)uit:A
  Food cost? 10.25
  Tip percentage? 5.6
  Restaurant bill is: $11.67

Options: a)mount of restaurant bill; B)MI; q)uit:b
  Input your height in feet and inches.
    Feet: 5
    Inches: 7
  Input your weight in pounds: 135
  BMI: 21.14

Options: a)mount of restaurant bill; B)MI; q)uit:q
Good-bye!
*/

