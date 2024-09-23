#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title, publisher, author;
    int year;

    void inputBook() {
        cout << "Title: ";
        getline(cin, title);
        cout << "Publisher: ";
        getline(cin, publisher);
        cout << "Year: ";
        cin >> year;
        cin.ignore();
        cout << "Author: ";
        getline(cin, author);
    }

    string findAuthor(string name) {
        if (title == name) {
            return author;
        } else {
            return "Not found";
        }
    }

    string toString() {
        return title + ", " + publisher + ", " + to_string(year) + ", " + author;
    }
};


int main(){
    Book book1;
    book1.title="Rừng Na Uy";
    book1.publisher="NXB Hội Nhà Văn";
    book1.author="Haruki Murakami";
    book1.year=1997;
    Book book2{"Hai vạn dặm dưới đáy biển", "NXB Văn học", "Jules Verne",2015};
    return 0;
}