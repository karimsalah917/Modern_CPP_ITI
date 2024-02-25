#include <iostream>
#include <vector>
class Book 
{
    std::string Title;
    std::string Author;
    int         Year;

    public:
    //default constructor
    Book():Title{"No title"},Author{"No Name"},Year{0000}
    {}
    //parapeterized constructor
    Book(std::string sourceTitle,std::string sourceAuthor,int sourceYear):
    Title{sourceTitle},Author{sourceAuthor},Year{sourceYear}
    {}
    //destructor
    ~Book()
    {}
    //setters
    /**
     * no setters
    */
    //getters
    std::string getBookAuthor(void)
    {
        return Author;
    }
    std::string getBookTitle()
    {
        return Title;
    }
    int getBookYear()
    {
        return Year;
    }

    //display info
    void DisplayBookInfo(void)
    {
        std::cout<<"Title: "<<Title<<","<<"Author: "<<Author<<","<<"Year: "<<Year<<std::endl;        
    }   
};
class LibraryCatalog
{
    std::vector<Book> Books;

    public:
    

};

int main(void)
{
    unsigned char x{245};
    return 0;
}

