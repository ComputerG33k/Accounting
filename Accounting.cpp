#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int comma = 0;
	int slash = 0;
	int electronicsRow = 0;
	int clothesRow = 0;
	int carRow = 0;
	int foodRow = 0;
	int booksRow = 0;
	int paymentRow = 0;
	string temp = "";
	string year = "";
	string month = "";
	string supplies = "";
	string type = "";
	string dateTrans = "";
	string dateComp = "";
	string store = "";
	string amount = "";
	string electronics[15][4] = {"0.0"};
	string clothes[15][4] = {"0.0"};
	string car[15][4] = {"0.0"};
	string food[15][4] = {"0.0"};
	string payment[15][4] = {"0.0"};
	string books[15][4] = {"0.0"};
		
	ifstream inExpenses;
	inExpenses.open("Accounting.txt");
	
	if (inExpenses.is_open())
	{
		getline(inExpenses, supplies, '\n');
		while (inExpenses.eof() == false)
		{
			comma = supplies.find(",", 0);
			type = supplies.substr(0, comma);
			supplies.erase(0, comma + 1);
			comma = 0;
			comma = supplies.find(",", 0);
			dateTrans = supplies.substr(0, comma);
			supplies.erase(0, comma + 1);
			comma = 0;
			comma = supplies.find(",", 0);
			dateComp = supplies.substr(0, comma);
			supplies.erase(0, comma + 1);
			comma = 0;
			comma = supplies.find(",", 0);
			store = supplies.substr(0, comma);
			supplies.erase(0, comma + 1);
			
			comma = 0;
			comma = supplies.find(",", 0);
			amount = supplies.substr(0);
			type.erase(0);
			
			temp = dateTrans;
			slash = temp.find_first_of("/");
			month = temp.substr(0, slash);
			temp.erase(0, slash + 1);
			slash = temp.find_first_of("/");
			temp.erase(0, slash + 1);
			year = temp.substr(0);
			temp.clear();
			if (store == "AMAZON MKTPLACE PMTS" || store == "Amazon.com")
			{
				
				electronics[electronicsRow][0] = "Electronics";
				electronics[electronicsRow][1] = amount;
				electronics[electronicsRow][2] = year;
				electronics[electronicsRow][3] = month;	
				
				electronicsRow++;
			}
			
			if (store == "T J MAXX #1417")
			{
				
				clothes[clothesRow][0] = "Clothes";
				clothes[clothesRow][1] = amount;
				clothes[clothesRow][2] = year;
				clothes[clothesRow][3] = month;
				
				clothesRow++;
			}
			
			if (store == "TINKS SUPERIOR AUTOPARTS" || store == "PHILLIPS 66 - KB EXPRESS" || store == "CEDAR CITY MOTOR COMPANY")
			{
				
				car[carRow][0] = "Car";
				car[carRow][1] = amount;
				car[carRow][2] = year;
				car[carRow][3] = month;
				
				carRow++;
			}
			
			if (store == "WAL-MART #1438" || store == "TROPICAL SMOOTHIE UT02" || store == "SMITHS FOOD #4042" || store == "SMITHS FOOD #4042")
			{
				
				food[foodRow][0] = "Food";
				food[foodRow][1] = amount;
				food[foodRow][2] = year;
				food[foodRow][3] = month;
				
				foodRow++;
			}
			
			if (store == "Audible")
			{
				
				books[booksRow][0] = "Books";
				books[booksRow][1] = amount;
				books[booksRow][2] = year;
				books[booksRow][3] = month;
				
				booksRow++;
			}
			
			if (store == "AUTOMATIC PAYMENT - THANK")
			{
				payment[paymentRow][0] = "Payment";
				payment[paymentRow][1] = amount;
				payment[paymentRow][2] = year;
				payment[paymentRow][3] = month;
			}
			
			string type = "";
			string dateTrans = "";
			string dateComp = "";
			string store = "";
			string amount = "";
			
			getline(inExpenses, supplies, '\n');
		}
		ofstream outExpenses;
			outExpenses.open("Accounting2.txt");
			string bought = "";
				
				if (outExpenses.is_open())
				{
					outExpenses << "Category," << "Amount," << "Year," << "Month" << endl;
					for (int electronicsRow = 0; electronicsRow < 15; electronicsRow++)
					{
							if ((bought = electronics[electronicsRow][0]) != "")
							{
								bought = electronics[electronicsRow][0];
								outExpenses << bought << ',';
								bought = "";
								bought = electronics[electronicsRow][1];
								outExpenses << bought << ',';
								bought = "";
								bought = electronics[electronicsRow][2];
								outExpenses << bought << ',';
								bought = "";
								bought = electronics[electronicsRow][3];
								outExpenses << bought << endl;
								bought = "";
							}
					}
					for (int clothesRow = 0; clothesRow < 15; clothesRow++)
					{
							if ((bought = clothes[clothesRow][0]) != "")
							{
								bought = clothes[clothesRow][0];
								outExpenses << bought << ',';
								bought = "";
								bought = clothes[clothesRow][1];
								outExpenses << bought << ',';
								bought = "";
								bought = clothes[clothesRow][2];
								outExpenses << bought << ',';
								bought = "";
								bought = clothes[clothesRow][3];
								outExpenses << bought << endl;
								bought = "";
							}
					}
					for (int carRow = 0; carRow < 15; carRow++)
					{
							if ((bought = car[carRow][0]) != "")
							{
								bought = car[carRow][0];
								outExpenses << bought << ',';
								bought = "";
								bought = car[carRow][1];
								outExpenses << bought << ',';
								bought = "";
								bought = car[carRow][2];
								outExpenses << bought << ',';
								bought = "";
								bought = car[carRow][3];
								outExpenses << bought << endl;
								bought = "";
							}
					}
					for (int foodRow = 0; foodRow < 15; foodRow++)
					{
							if ((bought = food[foodRow][0]) != "")
							{
								bought = food[foodRow][0];
								outExpenses << bought << ',';
								bought = "";
								bought = food[foodRow][1];
								outExpenses << bought << ',';
								bought = "";
								bought = food[foodRow][2];
								outExpenses << bought << ',';
								bought = "";
								bought = food[foodRow][3];
								outExpenses << bought << endl;
								bought = "";
							}				
						}
						for (int booksRow = 0; booksRow < 15; booksRow++)
						{
								if ((bought = books[booksRow][0]) != "")
								{
									bought = books[booksRow][0];
									outExpenses << bought << ',';
									bought = "";
									bought = books[booksRow][1];
									outExpenses << bought << ',';
									bought = "";
									bought = books[booksRow][2];
									outExpenses << bought << ',';
									bought = "";
									bought = books[booksRow][3];
									outExpenses << bought << endl;
									bought = "";
								}
						}
						for (int paymentRow = 0; paymentRow < 15; paymentRow++)
						{
								if ((bought = payment[paymentRow][0]) != "")
								{
									bought = payment[paymentRow][0];
									outExpenses << bought << ',';
									bought = "";
									bought = payment[paymentRow][1];
									outExpenses << bought << ',';
									bought = "";
									bought = payment[paymentRow][2];
									outExpenses << bought << ',';
									bought = "";
									bought = payment[paymentRow][3];
									outExpenses << bought << endl;
									bought = "";
								}
						}
					outExpenses.close();
				}
				else {
					cout << "Could not open file to write to.";
				}
		inExpenses.close();
		cout << "Run successfully saved in Accounting2.txt in the same folder as this program.";
	}
	else
	{
		cout << "File could not be opened.";
	}
}
