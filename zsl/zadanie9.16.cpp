#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, m, yyyy;
};

struct User {
	string login, password, status, account_type;
	unsigned short int userid;
	Date joinDate;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	
	User user {"siemanokolano123", "drowssap!123!", "active", "user", 43793, {16, 9, 2018}};
	
	cout << "      <USER INFO>" << endl << endl << "Login: " << user.login << endl << endl
		 << "Password: " << user.password << endl << endl
		 << "Current status: " << user.status << endl << endl
		 << "Account type: " << user.account_type << endl << endl
		 << "User ID: " << user.userid << endl << endl
		 << "Date of joining: " << user.joinDate.dd << "-" << user.joinDate.m << "-" << user.joinDate.yyyy;
	return 0;
}
