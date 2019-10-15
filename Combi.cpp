#include <iostream>
using namespace std;

int main(){
	
	int choice;

	while(1){
		cout << "\nMENU" << endl;
		cout << "1. PROBLEM 1" << endl;
		cout << "2. PROBLEM 2" << endl;
		cout << "3. PROBLEM 3" << endl;
		cout << "4. EXIT" << endl;
		cout << "\nChoose a problem: ";
		cin >> choice;
		if(choice == 1){
			cout << "\nBOX WIDTH PROBLEM" << endl;
			int n;
	
			cout << "Enter a width: ";
			cin >> n;
			
			for(int i = 1; i <= n; i++){
				cout << "+-------+";
			}
			cout << endl;
			for(int j = 1; j <= n; j++){
				cout << "|";
				cout << "       ";
				cout << "|";
			}
			cout << endl;
			for(int k = 1; k <= n; k++){
				cout << "+-------+";
			}
		}else if(choice == 2){
			
			int w, h;
			
			cout << "\nHEXAGON PROBLEM" << endl;
			cout << "Enter a width and height: ";
			cin >> w >> h;
			for(int i = 1; i <= w; i++){
				cout << " __   ";
			}
			for(int b = 1; b<= h; b++){
				cout << endl;
				for(int j = 1; j <= w; j++){
					cout << "/" << "  " << "\\__";
				}
				cout << endl;
				for(int k = 1; k <= w; k++){
					cout << "\\__" << "/  ";
				}
			}
			
		}else if(choice == 3){
			
			int w, h;
			
			cout << "\nDIAMOND PROBLEM" << endl;
			cout << "Enter a width and height: ";
			cin >> w >> h;
			
			for(int z = 1; z <= h; z++){
				for(int i = 1; i <= w; i++){
					cout << "  X" << "  ";
				}
				cout << endl;
				for(int a = 1; a <= w; a++){
					cout << " /" << " \\ ";
				}
				cout << endl;
				for(int b = 1; b <= w; b++){
					cout << "/" << "   \\";
				}
				cout << endl;
				for(int c = 1; c <= w; c++){
					cout << "\\" << "   /";
				}
				cout << endl;
				for(int d = 1; d <= w; d++){
					cout << " \\" << " /" << " ";
				}
				cout << endl;
				
			}
			for(int e = 1; e <= w; e++){
				cout << "  X" << "  " ;
			}
		} else if(choice == 4){
			exit(1);
		} else{
			cout << "INVALID INPUT. TRY AGAIN";
		}
		cout << endl << endl;
		cout << "RETURN TO MENU" << endl;
		system("pause>0");
		system("cls");
	}
	
	return 0;
	
}
