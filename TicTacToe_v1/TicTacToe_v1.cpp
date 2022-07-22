#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	char a1 = '1';
	char a2 = '2';
	char a3 = '3';
	char a4 = '4';
	char a5 = '5';
	char a6 = '6';
	char a7 = '7';
	char a8 = '8';
	char a9 = '9';
	int num = 1;
	int cho = 1;
	int game = 1;//1-Davam 0-bitir
	int round = 0;
	int sum = 0;//User her defe oynadiqda xanaya uygun artir
	int sumO = 0; //Bot her defe oynadiqda xanaya uygun artir
	int bot = 0;
	int player = 0;
	int bug = 0;
	while (game) {
		while (cho) {
			system("cls");
			cout << "Player: " << player << "   Bot: " << bot << "\n\n\n\n";//Error verse bunu sil
			for (int row = 0; row < 9; row++) {//Drawing xoxo table
				for (int col = 0; col < 12; col++) {
					if (col == 3 || col == 7) {
						cout << "|";
					}
					else if (col == 11) {
						cout << endl;
					}
					else if (!(col % 2)) {
						if (row == 2 || row == 5) {
							cout << "_";
						}
						else {
							cout << " ";
						}
					}
					else {
						if (!(row % 3) || row == 8) {
							cout << " ";
						}
						else if (row == 2 || row == 5) {
							cout << "_";
						}
						else {//Index
							switch (num)
							{
							case 1: cout << a1;
								break;
							case 2: cout << a2;
								break;
							case 3: cout << a3;
								break;
							case 4: cout << a4;
								break;
							case 5: cout << a5;
								break;
							case 6: cout << a6;
								break;
							case 7: cout << a7;
								break;
							case 8: cout << a8;
								break;
							case 9: cout << a9;
								break;
							}
							num++;
						}
					}
				}
			}
			//Winner
			if (round > 2) {
				if ((a1 == a2 && a2 == a3 && a1 == 'O') || (a4 == a5 && a5 == a6 && a4 == 'O') || (a7 == a8 && a8 == a9 && a7 == 'O') || (a1 == a4 && a4 == a7 && a1 == 'O') || (a2 == a5 && a5 == a8 && a2 == 'O') || (a3 == a6 && a6 == a9 && a3 == 'O') || (a1 == a5 && a5 == a9 && a1 == 'O') || (a3 == a5 && a5 == a7 && a3 == 'O')) {
					cout << "\t\t\n\n\n<<<<<   BOT win  >>>>>\n\n\n";
					cho = 0;
					bot += 100;
					continue;
				}
				else if ((a1 == a2 && a2 == a3 && a1 == 'X') || (a4 == a5 && a5 == a6 && a4 == 'X') || (a7 == a8 && a8 == a9 && a7 == 'X') || (a1 == a4 && a4 == a7 && a1 == 'X') || (a2 == a5 && a5 == a8 && a2 == 'X') || (a3 == a6 && a6 == a9 && a3 == 'X') || (a1 == a5 && a5 == a9 && a1 == 'X') || (a3 == a5 && a5 == a7 && a3 == 'X')) {
					cout << "\t\t\n\n\n<<<<<   Player win  >>>>>\n\n\n";
					cho = 0;
					player += 100;
					continue;
				}
				else if (round == 5) {
					cout << "\t\t\n\n\n<<<<<    Berabere  >>>>>\n\n\n";
					cho = 0;
					continue;
				}
			}
			//Player choice
			cout << round << endl;
			cout << "Player: ";
			cin >> cho;
			num = 1;
			switch (cho)
			{
			case 1: if (a1 == '1') { a1 = 'X'; sum += 1; round++; }
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 2: if (a2 == '2') {
				a2 = 'X'; sum += 2; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 3: if (a3 == '3') {
				a3 = 'X'; sum += 3; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 4: if (a4 == '4') {
				a4 = 'X'; sum += 4; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 5: if (a5 == '5') {
				a5 = 'X'; sum += 5; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 6: if (a6 == '6') {
				a6 = 'X'; sum += 6; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 7: if (a7 == '7') {
				a7 = 'X'; sum += 7; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 8: if (a8 == '8') {
				a8 = 'X'; sum += 8; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			case 9: if (a9 == '9') {
				a9 = 'X'; sum += 9; round++;
			}
				  else { system("cls"); cout << "Duzgun oyna"; Sleep(2000); continue; }
				  break;
			default:
				system("cls");
				cout << "Index 1-9 araligindadir";
				Sleep(2000);
				continue;
				break;
			}
			//Bot choice
			switch (round)
			{
			case 1:
				if (a5 != '5') {
					a1 = 'O';
					sumO += 1;
				}
				else {
					a5 = 'O';
					sumO += 5;
				}
				break;
			case 2:
				if (sumO == 1) {
					switch (sum) {
					case 7: a8 = 'O'; sumO += 8;
						break;
					case 8: a7 = 'O'; sumO += 7;
						break;
					case 9: a6 = 'O'; sumO += 6;
						break;
					case 11: a4 = 'O'; sumO += 4;
						break;
					case 12: a3 = 'O'; sumO += 3;
						break;
					case 13: a2 = 'O'; sumO += 2;
						break;
					case 14: a3 = 'O'; sumO += 3;
						break;
					}
				}
				else {
					if (sum == 10) {
						if (a4 == '4') {
							a4 = 'O';
							sumO += 4;
						}
						else {
							a2 = 'O';
							sumO += 2;
						}
					}
					else if (!(sum % 2)) {
						switch (sum / 2) {
						case 2: a2 = 'O'; sumO += 2;
							break;
						case 3: a1 = 'O'; sumO += 1;
							break;
						case 4: if (a2 == '2') { a4 = 'O'; sumO += 4; }
							  else { a3 = 'O'; sumO; }
							  break;
						case 6: if (a4 == '4') { a6 = 'O'; sumO += 6; }
							  else { a7 = 'O'; sumO += 7; }
							  break;
						case 7: a9 = 'O'; sumO += 9;
							break;
						case 8: a8 = 'O'; sumO += 8;
							break;
						}
					}
					else {
						switch (sum) {
						case 3: a3 = 'O'; sumO += 3;
							break;
						case 5: if (a1 == '1') { a1 = 'O'; sumO += 1; }
							  else { a7 = 'O'; sumO += 7; }
							  break;
						case 9: a9 = 'O'; sumO += 9;
							break;
						case 11: a1 = 'O'; sumO += 1;
							break;
						case 15: if (a7 == '7') { a3 = 'O'; sumO += 3; }
							   else { a9 = 'O'; sumO += 9; }
							   break;
						case 17: a7 = 'O'; sumO += 7;
							break;
						default: if (a1 == '1') { a1 = 'O'; sumO += 1; }
							   else if (a3 == '3') { a3 = 'O'; sumO += 3; }
							   else if (a7 == '7') { a7 = 'O'; sumO += 7; }
							   else { a9 = 'O'; sumO += 9; }
							   break;
						}
					}
				}
				break;
			case 3:
				if (a5 == 'X') {
					if (a4 == 'O' && a7 == '7') {
						a7 = 'O';
					}
					else if (a2 == 'O' && a3 == '3') {
						a3 = 'O';
					}
					else if (a7 == 'O' && a4 == '4') {
						a4 = 'O';
					}
					else if (a3 == 'O' && a2 == '2') {
						a2 = 'O';
					}
					else if (a7 == 'X' && a3 == '3') {
						a3 = 'O';
						sumO += 3;
					}
					else if (a3 == 'X' && a7 == '7') {
						a7 = 'O';
						sumO += 7;
					}
					else if (a2 == 'X' && a8 == '8') {
						a8 = 'O';
						sumO += 8;
					}
					else if (a8 == 'X' && a2 == '2') {
						a2 = 'O';
						sumO += 2;
					}
					else if (a4 == 'X' && a6 == '6') {
						a6 = 'O';
						sumO += 6;
					}
					else if (a6 == 'X' && a4 == '4') {
						a4 = 'O';
						sumO += 4;
					}
				}
				else {
					switch (sumO) {
					case 6: if (a9 == '9') { a9 = 'O'; }
						  else { if (a3 == 'X' && a9 == 'X' && a6 == '6') { a6 = 'O'; sumO += 6; } else if (a8 == '8') { a8 = 'O'; sumO += 8; } else { bug = 1; } }
						  break;
					case 7: if (a8 == '8') { a8 = 'O'; }
						  else if (a4 == '4') { a4 = 'O'; sumO += 4; }
						  else { bug = 1; }
						  break;
					case 8: if (a7 == '7') { a7 = 'O'; }
						  else { if (a1 == 'X' && a7 == 'X' && a4 == '4') { a4 = 'O'; sumO += 4; } else if (a8 == '8') { a8 = 'O'; sumO += 8; } else { bug = 1; } }
						  break;
					case 9: if (a6 == '6') { a6 = 'O'; }
						  else if (a3 == '3') { a3 = 'O'; sumO += 3; }
						  else { bug = 1; }
						  break;
					case 11: if (a4 == '4') { a4 = 'O'; }
						   else if (a8 == '8') { a8 = 'O'; sumO += 8; }
						   else { bug = 1; }
						   break;
					case 12: if (a3 == '3') { a3 = 'O'; }
						   else {
						if (a3 == 'X' && a9 == 'X' && a6 == '6') { a6 = 'O'; sumO += 6; }
						else if (a2 == '2') { a2 = 'O'; sumO += 2; }
						else { bug = 1; }
					}
						   break;
					case 13: if (a2 == '2') { a2 = 'O'; }
						   else if (a4 == '4') { a4 = 'O'; sumO += 4; }
						   else { bug = 1; }
						   break;
					case 14: if (a1 == '1') { a1 = 'O'; }
						   else {
						if (a3 == 'X' && a1 == 'X' && a2 == '2') { a2 = 'O'; sumO += 2; }
						else if (a4 == '4') { a4 = 'O'; sumO += 4; }
						else { bug = 1; }
					}
						   break;
					default:
						if (a1 == '1') {
							a1 = 'O';
						}
						else if (a2 == '2') {
							a2 = 'O';
						}
						else if (a3 == '3') {
							a3 = 'O';
						}
						else if (a4 == '4') {
							a4 = 'O';
						}
						else if (a6 == '6') {
							a6 = 'O';
						}
						else if (a7 == '7') {
							a7 = 'O';
						}
						else if (a8 == '8') {
							a8 = 'O';
						}
						else if (a9 == '9') {
							a9 = 'O';
						}
						break;
					}if (bug) {
						if (a1 == '1') {
							a1 = 'O';
						}
						else if (a2 == '2') {
							a2 = 'O';
						}
						else if (a3 == '3') {
							a3 = 'O';
						}
						else if (a4 == '4') {
							a4 = 'O';
						}
						else if (a6 == '6') {
							a6 = 'O';
						}
						else if (a7 == '7') {
							a7 = 'O';
						}
						else if (a8 == '8') {
							a8 = 'O';
						}
						else if (a9 == '9') {
							a9 = 'O';
						}
						bug = 0;
					}
				}
				break;
			case 4:
				if (a5 == 'X') {
					if (a3 == 'O' && a2 == '2') {
						a2 = 'O';
					}
					else if (a7 == 'O' && a4 == '4') {
						a4 = 'O';
					}
					else {
						if (a2 == '2') {
							a2 = 'O';
						}
						else if (a3 == '3') {
							a3 = 'O';
						}
						else if (a4 == '4') {
							a4 = 'O';
						}
						else if (a6 == '6') {
							a6 = 'O';
						}
						else if (a7 == '7') {
							a7 = 'O';
						}
						else if (a8 == '8') {
							a8 = 'O';
						}
						else if (a9 == '9') {
							a9 = 'O';
						}
					}
				}
				else {
					if (a1 == 'X' && a2 == 'X' && a3 == '3') {
						a3 = 'O';
					}
					else if (a1 == 'X' && a3 == 'X' && a2 == '2') {
						a1 = 'O';
					}
					else if (a2 == 'X' && a3 == 'X' && a1 == '1') {
						a1 = 'O';
					}
					else if (a1 == 'X' && a4 == 'X' && a7 == '7') {
						a7 = 'O';
					}
					else if (a1 == 'X' && a7 == 'X' && a4 == '4') {
						a4 = 'O';
					}
					else if (a4 == 'X' && a7 == 'X' && a1 == '1') {
						a1 = 'O';
					}
					else if (a6 == 'X' && a3 == 'X' && a9 == '9') {
						a9 = 'O';
					}
					else if (a9 == 'X' && a3 == 'X' && a6 == '6') {
						a6 = 'O';
					}
					else if (a6 == 'X' && a9 == 'X' && a3 == '3') {
						a3 = 'O';
					}
					else if (a7 == 'X' && a8 == 'X' && a9 == '9') {
						a9 = 'O';
					}
					else if (a7 == 'X' && a9 == 'X' && a8 == '8') {
						a8 = 'O';
					}
					else if (a8 == 'X' && a9 == 'X' && a7 == '7') {
						a7 = 'O';
					}
					else if (a1 == 'O' && a9 == '9') {
						a9 = 'O';
					}
					else if (a9 == 'O' && a1 == '1') {
						a1 = 'O';
					}
					else if (a3 == 'O' && a7 == '7') {
						a7 = 'O';
					}
					else if (a7 == 'O' && a3 == '3') {
						a3 = 'O';
					}
					else {
						if (a1 == '1') {
							a1 = 'O';
						}
						else if (a2 == '2') {
							a2 = 'O';
						}
						else if (a3 == '3') {
							a3 = 'O';
						}
						else if (a4 == '4') {
							a4 = 'O';
						}
						else if (a6 == '6') {
							a6 = 'O';
						}
						else if (a7 == '7') {
							a7 = 'O';
						}
						else if (a8 == '8') {
							a8 = 'O';
						}
						else if (a9 == '9') {
							a9 = 'O';
						}
					}
				}
				break;
			case 5:

				if (a1 == '1') {
					a1 = 'O';
				}
				else if (a2 == '2') {
					a2 = 'O';
				}
				else if (a3 == '3') {
					a3 = 'O';
				}
				else if (a4 == '4') {
					a4 = 'O';
				}
				else if (a6 == '6') {
					a6 = 'O';
				}
				else if (a7 == '7') {
					a7 = 'O';
				}
				else if (a8 == '8') {
					a8 = 'O';
				}
				else if (a9 == '9') {
					a9 = 'O';
				}
				break;
			}
		}
		cout << "\t\t\t\n\n\n1-Davam   0-Oyunu Bitir \n";
		cin >> game;
		switch (game)
		{
		case 0: cho = 0;//Oyun Bitdi
			break;
		case 1: cho = 1;//Oyuna Davam
			break;
		default: system("cls"); cout << "Duzgun secim edin"; Sleep(2000);
			break;
		}
		a1 = '1';
		a2 = '2';
		a3 = '3';
		a4 = '4';
		a5 = '5';
		a6 = '6';
		a7 = '7';
		a8 = '8';
		a9 = '9';
		num = 1;
		round = 0;
		sum = 0;
		sumO = 0;
	}
}