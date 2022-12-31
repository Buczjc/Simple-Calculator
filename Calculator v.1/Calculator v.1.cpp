#include <iostream>
#include <string>

using namespace std;

int main()
{
	int op;
	char ans;
	int num1, num2;


	cout << "    Welcome to ONLINE Calculator  " << endl;
	cout << "           Made by: bucz" << endl;
	cout << "               v1.0.0" << endl;
	cout << "\n";
	system("pause");
	system("cls");

	cout << "   ADD [1]   SUBTRACT[2]   MULTIPLY[3]" << endl;
	cout << " Enter a operator : ";
	cin >> op;
	cout << "\n\n";

	while (op != 1 && op != 2 && op != 3) {
		system("cls");
		cout << "   ADD [1]   SUBTRACT[2]   MULTIPLY[3]" << endl;
		cout << "\n\n";
		cout << "The operator you have chosen isn't in the list" << endl;
		cout << "\n\n";
		cout << "Re-enter operator : ";
		cin >> op;
		cin.clear();
		cin.ignore();
	}
	system("cls");

	do
	{

		switch (op)
		{
		case 1:
			cout << "You have picked ADDITION!" << endl;
			cout << "\n";

			cout << "Enter a number : ";
			while (!(cin >> num1))
			{
				system("cls");
				cout << "You have picked ADDITION!" << endl;
				cout << "\n";
				cout << "MUST BE A NUMBER : ";
				cin.clear();
				cin.ignore(1000, '\n');
			}

			cout << "Enter another number : ";
			while (!(cin >> num2))
			{
				cout << "MUST BE A NUMBER : ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			system("cls");
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

			cout << "Do you want to restart? [Y/N] : ";
			cin >> ans;
			system("cls");

			while (!(ans == 'y' || ans == 'Y' || ans == 'n' || ans == 'N'))
			{
				cout << "REPEAT [Y]     RETURN TO MAIN  MENU [N]" << endl;
				cout << "\n\n";
				cout << "Choose only Y/N : ";
				cin >> ans;
				system("cls");
			}
			if (ans == 'n' || ans == 'N')
			{
				return main();
			}
			break;

		case 2:
			cout << "You have picked SUBTRACTION!" << endl;
			cout << "\n";

			cout << "Enter a number : ";
			while (!(cin >> num1))
			{
				system("cls");
				cout << "You have picked SUBTRACTION!" << endl;
				cout << "\n";
				cout << "MUST BE A NUMBER : ";
				cin.clear();
				cin.ignore(1000, '\n');
			}

			cout << "Enter another number : ";
			while (!(cin >> num2))
			{
				cout << "MUST BE A NUMBER : ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			system("cls");
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

			cout << "Do you want to restart? [Y/N] : ";
			cin >> ans;
			system("cls");

			while (!(ans == 'y' || ans == 'Y' || ans == 'n' || ans == 'N'))
			{
				cout << "REPEAT [Y]     RETURN TO MAIN  MENU [N]" << endl;
				cout << "\n\n";
				cout << "Choose only Y/N : ";
				cin >> ans;
				system("cls");
			}
			if (ans == 'n' || ans == 'N')
			{
				return main();
			}
			break;

		case 3:
			cout << "You have picked MULTIPLICATION!" << endl;
			cout << "\n";

			cout << "Enter a number : ";
			while (!(cin >> num1))
			{
				system("cls");
				cout << "You have picked MULTIPLICATION!" << endl;
				cout << "\n";
				cout << "MUST BE A NUMBER : ";
				cin.clear();
				cin.ignore(1000, '\n');
			}

			cout << "Enter another number : ";
			while (!(cin >> num2))
			{
				cout << "MUST BE A NUMBER : ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			system("cls");
			cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;

			cout << "Do you want to restart? [Y/N] : ";
			cin >> ans;
			system("cls");

			while (!(ans == 'y' || ans == 'Y' || ans == 'n' || ans == 'N'))
			{
				cout << "REPEAT [Y]     RETURN TO MAIN  MENU [N]" << endl;
				cout << "\n\n";
				cout << "Choose only Y/N : ";
				cin >> ans;
				system("cls");
			}
			if (ans == 'n' || ans == 'N')
			{
				return main();
			}
			break;

		default:
			cout << "test";
			break;
		}
	} while (true);





	return 0;
}