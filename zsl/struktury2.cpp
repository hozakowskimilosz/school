#include <iostream>
using namespace std;
 
struct Date{
    unsigned short int dd, mm, yyyy;
};
 
class Worker{
  public:
  unsigned int id {};
    string name {}, surname {};
    Date dateBirthday {};
   
void showAllData();
void setId(unsigned int id, string name, string surname, Date dateBirthday){
    Worker::id=id;
    Worker::name=name;
    Worker::surname=surname;
    Worker::dateBirthday=dateBirthday;
}};
 
void Worker::showAllData(){
    cout << "Dane pracownika:\n" << "Id: " << id
    << "\nImie i Nazwisko: " << name << " "<< surname
    << "\nData urodzenia: " << dateBirthday.dd << "-"
    <<dateBirthday.mm << "-"
    << dateBirthday.yyyy << "r.\n\n"; 
}
 
int main(int argc, char** argv){
    setlocale(LC_CTYPE, "polish");
    Worker pracownik;
    pracownik.setId(100, "Janusz","Nowak", {16, 9, 1990});
    pracownik.showAllData();
   
    return 0;
}
