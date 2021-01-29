#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int rows = 3; 
const int cols = 5;

int selectOption(){
	int choice = 0;	
    cout << "Press the state code to calculate percentage of Trum, Biden and Jorgensen votes\n\n" ;
	
	cout<<"Press 1 for Florida.\n";
	cout<<"Press 2 for Georgia.  \n";
	cout<<"Press 3 for Michigan.\n";
	cout<<"Press 4 To Exit\n";
	
	
	cout<<"\nPlease select an option, use numbers from 1 to 4: ";
	
	do {
		cin>>choice;
		if(choice >= 0 && choice <= 4){
			break;
		}
		else {
			cout<<"\nChoice should be between 1 and 4\n";
			cout<<"Invalid choice, please select again: ";
		}
	} while(true);
	cout<<"___________________________________________________\n";
	return choice -1;	
} // end selectOption function



void showElements(int data[][5]){
    cout << "Source Data:" << endl << endl ;
	cout << "States" "\t"<< "\t""\Biden Votes" << "\t" "\Trump Votes" << "\t""\Jorgensen Votes" << "\t" "\Total Votes" << endl << endl ;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			
			cout<<data[i][j]<<"\t\t";
		}
		cout<<endl;
	}	
	
	cout<<endl<<endl;
} // end of showElements function

void PercentageBiden(int data[][5] , int state){
	
	float Bidenvotes = 0.0, totalvotes = 0.0 , percentBiden = 0.0 ;
	
	totalvotes = data[state][4];
	Bidenvotes = data[state][1];
	percentBiden = (Bidenvotes/totalvotes)*100 ;
	cout << "Percentage of Jo Biden votes is: " << percentBiden << endl<< endl ;
	
} // end of PercentageBiden function

void PercentageTrump(int data[][5] , int state){
	
	float Trumpvotes = 0.0, totalvotes = 0.0 , percentTrump = 0.0 ;
	
	totalvotes = data[state][4];
	Trumpvotes = data[state][2];
	percentTrump = (Trumpvotes/totalvotes)*100 ;
	cout << "Percentage of Donald Trump votes is: " << percentTrump << endl<< endl ;
	
} // end of PercentageTrump function


void PercentageJor(int data[][5] , int state){
	
	float Jorvotes = 0.0, totalvotes = 0.0 , percentJor = 0.0 ;
	
	totalvotes = data[state][4];
	Jorvotes = data[state][3];
	percentJor = (Jorvotes/totalvotes)*100 ;
	cout << "Percentage of Jo Jorgensen votes is: " << percentJor << endl<< endl ;
	
} // end of PercentageJor function

main(){
		
	int data[rows][cols] = { {1, 5284453, 5658847, 70046, 11013346 } , {2, 2465781, 2455428, 61894, 4983103} , {3, 2790648, 2644525, 60287, 5495460} } ; 
	
	showElements(data) ;
	
	int choice = 0;
	do{
		choice  = selectOption();
		if(choice != 3){
		PercentageBiden(data, choice);	
		PercentageTrump(data, choice);
		PercentageJor(data, choice);
		}
 	}while(choice != 3);  // end of do-while loop
 	
 	system("pause");
 	
} // end of main function





