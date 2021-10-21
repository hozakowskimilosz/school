#include <iostream>
using namespace std;

class Book {
	public:
		string title, authors[2];
		
		getTitle();
		getAuthor();
		addAuthor();
	
	Book(string pTitle="Hobbit", string pAuthors="Tolkien");
	
};

getTitle(string pTitle){
	title=pTitle;
}

getAuthor(string pAuthors){
	authors=pAuthors;
}

int main(){
	
	
	return 0;
} 

