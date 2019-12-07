// Compile with command: clang++ -std=c++17 checkout.cpp -o checkout
#include "book.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// You are not obligated to use these function declarations - they're just given as examples
void readBooks(std::vector<Book *> & myBooks) {
    return;
}

int readPersons(std::vector<Person *> & myCardholders) {
    return 0;
}

void readRentals(std::vector<Book *> & myBooks, std::vector<Person *> myCardholders) {
    return;
}



Book * findBook(std::vector<Book *> & myBooks, int id) {
  string id1;
  ifstream fin;
	fin.open("books.txt");
	if(fin.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	string search;
	cout << "Please enter the book ID: ";
	cin  >> search;
	bool isFound = 0;
	while(!fin.eof())
	{
		string temp = "";
		getline(fin,temp);
		for(int i = 0; i < search.size(); i++)
		{
			if(temp[i] == search[i])
				isFound = 1;
			else
			{
				isFound = 0;
				break;
			}
		}

		if(isFound)
		{
			cout << "Title: " << id1 ;
      getline(fin,id1);
      cout << id1 << endl;
      cout << "Rental Completed";
			//for(int i = search.size() + 1; i < temp.size(); i++)
			//	cout << temp[i];

			break;
		}

	}

	if(fin.eof()&&(!isFound))
	{
		cout << "Book ID not found";
	}

	fin.close();
  return nullptr;
}




Person * findPerson(std::vector<Person *> & myCardholders, int id, std::vector<Book *> & myBooks, int id2) {
  string id1;
  ifstream fin;
	fin.open("persons.txt");
	if(fin.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	string search;
	cout << "Please enter the card ID: ";
	cin  >> search;
	bool isFound = 0;
	while(!fin.eof())
	{
		string temp = "";
		getline(fin,temp);
		for(int i = 0; i < search.size(); i++)
		{
			if(temp[i] == search[i])
				isFound = 1;
			else
			{
				isFound = 0;
				break;
			}
		}

		if(isFound)
		{
			cout << "Cardholder: " << id1 ;
			for(int i = search.size() + 3; i < temp.size(); i++) {
				cout << temp[i];
      }
      findBook(myBooks, id2);

			break;
		}

	}

	if(fin.eof()&&(!isFound))
	{
		cout << "Card ID not found";
	}

	fin.close();

  return nullptr;
}




void printMenu() {
    std::cout << "----------Library Book Rental System----------" << std::endl;
    std::cout << "1.  Book checkout" << std::endl;
    std::cout << "2.  Book return" << std::endl;
    std::cout << "3.  View outstanding rentals for a cardholder" << std::endl;
    std::cout << "4.  Open new library card" << std::endl;
    std::cout << "5.  Close library card" << std::endl;
    std::cout << "6.  Update records and exit system" << std::endl;
    std::cout << "Please enter a choice: ";
}











int main()
{
    std::vector<Book *> books; // this is a vector of pointers that point to Book objects
    std::vector<Person *> cardholders; // this is a vector of pointers that point to Person objects

    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        std::cin >> choice;
        switch(choice)
        {
            case 1:
                // Book checkout
                findPerson(cardholders, 0, books, 0);
                break;

            case 2:
                // Book return
                break;

            case 3:
                // View outstanding rentals for a cardholder
                break;

            case 4:
                // Open new library card
                break;

            case 5:
                // Close library card
                break;

            case 6:
                // Must update records in files here before exiting the program
                // Return memory to heap
                break;

            default:
                std::cout << "Invalid entry" << std::endl;
                break;
        }
        std::cout << std::endl;
   } while(choice != 6);
      return 0;
}
