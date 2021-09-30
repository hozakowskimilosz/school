#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, m, yyyy;
};

class User {
	public:
		string login{}, password{}, status{}, account_type{};
		unsigned short int user_id{};
		Date joinDate{};
		
	void showAllData();
	
	void setUser(string login1, string password1, string status1, string account_type1, unsigned short int user_id1,
	unsigned short int dd1,unsigned short int m1,unsigned short int yyyy1) {
		login=login1;
		password=password1;
		status=status1;
		account_type=account_type1;
		user_id=user_id1;
		joinDate.dd = dd1;
		joinDate.m = m1;
		joinDate.yyyy = yyyy1;
	}
};
	void User::showAllData(){
	cout << "      <USER INFO>" << endl << endl << "Login: " << login << endl << endl
		 << "Password: " << password << endl << endl
		 << "Current status: " << status << endl << endl
		 << "Account type: " << account_type << endl << endl
		 << "User ID: " << user_id << endl << endl
		 << "Date of joining: " << joinDate.dd << "-" << joinDate.m << "-" << joinDate.yyyy;
	}
	


int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	
	User user;
	user.setUser("siemanokolano123", "drowssap!123!", "active", "user", 43793, 16, 9, 2018);
	user.showAllData();

	return 0;
}
