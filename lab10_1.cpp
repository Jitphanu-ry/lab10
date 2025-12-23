	#include<iostream>
	using namespace std;

	int main(){
		int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
		cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
		char grade;
		int i = 1;
		do{
			cin >> grade; //The loop must be terminated when grade = '0'
			if(grade == 'A'){ 
				cout << "Student ["<<i<<"]: ";
				count[0]++;
				i++;
			}else if(grade == 'B'){
				cout << "Student ["<<i<<"]: ";
				count[1]++;
				i++;
			}else if(grade == 'C'){
				cout << "Student ["<<i<<"]: ";
				count[2]++;
				i++;
			}else if(grade == 'D'){
				cout << "Student ["<<i<<"]: ";
				count[3]++;
				i++;
			}else if(grade == 'F'){
				cout << "Student ["<<i<<"]: ";
				count[4]++;
				i++;
			}else if(grade == '0'){
				cout << "Student ["<<i<<"]: ";
			}
			else{ 
				cout << "Student ["<<i<<"]: " << "Wrong input. Please input again." << endl;
			} 
		}while(grade != '0');
		
		
		cout << "In total "<< i-1 <<" students." << endl;
		cout << "A = " << count[0] <<", ";
		cout << "B = " << count[1] <<", ";
		cout << "C = " << count[2] <<", ";
		cout << "D = " << count[3] <<", ";
		cout << "F = " << count[4];
		
		return 0;
	}
