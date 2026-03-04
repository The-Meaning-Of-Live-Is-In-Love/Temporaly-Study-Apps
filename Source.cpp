#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Order
{
	string Payers_Checking_Account;
	string Recipients_Checking_Account;
	int Transfer_Amount;
};
void New_Order(Order &New_Order)
{
	cout << "¬ведите расчЄтный счЄт плательщика." << '\n';
	cin >> New_Order.Payers_Checking_Account;
	cout << "¬ведите расчЄтный счЄт получател€." << '\n';
	cin >> New_Order.Recipients_Checking_Account;
	cout << "¬ведите перечисл€емую сумму в рубл€х." << '\n';
	cin >> New_Order.Transfer_Amount;
}
void Sorting_Payers_Checking_Account(Order& New_Order)
{
	for (int Counter_1 = 0; Counter_1 < 8; Counter_1++)
	{
		int Count_Steps = 
		for (int Counter_2 = 0; Counter_2 < 8; Counter_2++)
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	Order Array_Orders[8];
	Order New_Order_1;
	for (int Counter = 0; Counter < 8; Counter++)
	{
		Array_Orders[Counter] = New_Order_1;
		New_Order(New_Order_1);
	}
	return 0;
}