
#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

enum StonePaperScissor{Stone=1, Paper=2, Scissor=3};

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}


int ReadRoundTurn() {
	int Round = 0;
	cout << "\n\nHow Many Round You Want ? ";
	cin >> Round;
	return Round;
}

int PersonChoice() {
	int Choice = 0;
	cout << "\n\nYour Choice [1]:Stone [2]:Paper [3]:Scissor ? ";
	cin >> Choice;
	return Choice;
}

int MachineChoice() {
	return RandomNumber(1, 3);
}

////////////////////////////////////////


void PrintScore(string Turn) {
	if (Turn=="Person") {
		cout << "  [PERSON WIN] ";
	}
	else if (Turn=="PC") {
		cout << "  [PC WIN]  ";

	}
	else {
		cout << "  [EQUALL]  ";
	}
}



void DisplayChioces(int Choice) {
	if (StonePaperScissor::Paper==Choice) {
		cout << " Paper " << endl;
	}
	else if (StonePaperScissor::Scissor== Choice) {
		cout << " Scissor " << endl;

	}
	else
	{
		cout << " Stone  " << endl;
	}
}

void ScoreBoard(int Round, int PersonChoice, int PcChoice, string Turn) {
	cout << "\n\n\n" << "Round[" << Round+1 << "] Began ! \n";
	cout << "-----------------------------------\n";
	cout << "Player Choice : ";
	DisplayChioces(PersonChoice);
	cout << endl;
	cout << "Computer Choice : ";
	DisplayChioces(PcChoice);
	cout << endl;
	cout << "Round Winner : ";
	PrintScore(Turn);
	cout << "\n-----------------------------------\n";



}


string Choices(int Person, int Machine, int& PersonWin, int& MachineWin, int& Withdraw) {
	if (StonePaperScissor::Paper == Person && StonePaperScissor::Scissor == Machine) {
		
		MachineWin++;
		system("color 4A");
		return "PC";
	}
	else if (StonePaperScissor::Paper == Person && StonePaperScissor::Stone == Machine) {
		PersonWin++;
		system("color 2A");
		return "Person";
	}
	else if (StonePaperScissor::Scissor == Person && StonePaperScissor::Paper == Machine) {
		PersonWin++;
		system("color 2A");
		return "Person";

	}
	else if (StonePaperScissor::Scissor == Person && StonePaperScissor::Stone == Machine) {
		MachineWin++;
		system("color 4A");
		return "PC";

	}
	else if (StonePaperScissor::Stone == Person && StonePaperScissor::Paper== Machine) {
		MachineWin++;
		system("color 4A");
		return "PC";

	}
	else if (StonePaperScissor::Stone == Person && StonePaperScissor::Scissor == Machine) {
		PersonWin++;
		system("color 2A");
		return "Person";

	}
	else
	{
		Withdraw++;
		system("color 6A");
		return "Withdraw";
	}
}


void TotalScore(int Round, int PersonScore, int PcScore, int Withdraw) {
	cout << "\n\n\n----------------------------------------------" << endl;
	cout << "\t\t\tGAME OVER ";
	cout << "\n----------------------------------------------" << endl;
	cout << "\t\tTotal Round [" << Round << "] \n";
    cout << "\t\tPerson Score : " << PersonScore << endl;
	cout << "\t\tComputer Score : " << PcScore << endl;
	cout << "\t\tWithdraw : " << Withdraw << endl;

	if (PersonScore > PcScore) {
		cout << "\n\t\t Person WON !!\n";
		system("color 2A");
	}
	else if (PcScore > PersonScore) {
		cout << "\n\t\t Computer WON !!\n";
		system("color 4A");
	}
	else
	{
		cout << "\n\t\t NO WINNER !!\n";
		system("color 6A");
	}
}


///////////////////////////////////
void Dispaly() {
	int Round = ReadRoundTurn();
	int Count = 0;
	int PersonScore=0, MachineScore=0, Withdraw=0, PersonTurn=0, PCTurn=0;
	while (Round > Count) {
		PersonTurn = PersonChoice();
		PCTurn = MachineChoice();
		ScoreBoard(Count, PersonTurn, PCTurn, Choices(PersonTurn, PCTurn, PersonScore, MachineScore, Withdraw));
		Count++;
	}
	TotalScore(Count, PersonScore, MachineScore, Withdraw);
}

void DisplayMain() {
	char n = 'y';
	do {
		system("cls");
		system("color 01");
		Dispaly();
		cout << "\n\nDo You Want To Play Again ? ";
		cin >> n;

	} while (n == 'y' || n == 'Y');

}

int main() {
	srand((unsigned)time(NULL));
	DisplayMain();
}
