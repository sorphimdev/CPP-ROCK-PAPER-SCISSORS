#include <iostream>
#include <vector>
#include <random>
using namespace std;

	int answers(int reInput, int reComp){
	
	if(reInput == reComp){
		return 2;
	}
	else if(reInput == 1 && reComp == 3){
		return 0;
	}
	else if(reInput == 2 && reComp == 1){
		return 0;
	}
	else if(reInput == 3 && reComp == 2){
		return 0;
	}
	else{
		return 1;
	}
	}
	
	void getFinalWinner(int userPoints, int compPoints){

	cout << "FINAL SCORE OVER FIVE GAMES: " << userPoints << " - " << compPoints << endl;

	if(userPoints > compPoints){
		cout << "FINAL: USER WINS";
	}
	else if(userPoints < compPoints){
		cout << "FINAL: COMPUTER WINS";
	}
	else if(userPoints == compPoints){
		cout << "FINAL: BOTH WINS";
	}
	}
	
	
	
	
int main(){
	
	int userPoints = 0;
	int compPoints = 0;
	int output = 0;
	
	vector<string> rps = {"Rock", "Paper", "Scissors"};
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(0, rps.size() -1);
	
	for (int i = 0; i < 5; i++){
	
	int input = 0;
	
	cout << "SIMPLE RPS GAME\n1 = Rock\n2 = Paper\n3 = Scissors";
	cout << "\n\nENTER CHOICE: ";
	cin >> input;
	
	int comp = distr(gen);
	comp = comp + 1;
	
	if(input < 1 || input > 3){
		cout << "INVALID" << "\n\n\n";
		i--;
		continue;
	}
	else{
		cout << "THE COMPUTER CHOSE: " << comp << "\n";
		cout << rps[input - 1] << " - " << rps[comp - 1];
		
	output = answers(input, comp);
	
		switch(output){
			case 0:
			cout << "\nYOU WIN!";
			break;
			case 1:
			cout << "\nYOU LOSE!";
			break;
			case 2:
			cout << "\nTIE!";
			break;
		}
		
	cout << "\n\n\n\n";
} //initial if + else

	if (output == 1){
		compPoints++;
	}
	else if (output == 0){
		userPoints++;
	}

} //for
	
 	getFinalWinner(userPoints, compPoints);
	cout << "\n\n";	
	
	

return 0;
} 