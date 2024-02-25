#include <iostream>

class Date 
{
    private :
    unsigned short  Day;
    unsigned short  Month;
    unsigned short Year;
    public:
    //Default constructor
    Date():Day{16},Month{4},Year{2000}
    {}
    //Parameterized Constructor
    Date(unsigned short sourceDay,unsigned short sourceMonth,unsigned short sourceYear):
    Day{sourceDay},Month{sourceMonth},Year{sourceYear}
    {}
    //Destructor
    ~Date()
    {}
    //Copy Constructor
    Date (Date& sourceObject)
    {
        Day=sourceObject.Day;
        Month=sourceObject.Month;
        Year=sourceObject.Year;
    }
    //setters
    void setDay(unsigned short sourceDay)
    {
        Day=sourceDay;
    }
        void setMonth(unsigned short sourceMonth)
    {
        Month=sourceMonth;
    }
        void setYear(unsigned short sourceYear)
    {
        Year=sourceYear;
    }
    //print
    void printDate()
    {
        std::cout<<"Date: "<<Day<<"/"<<Month<<"/"<<Year<<std::endl;
    }
    //validate
    void validateDate()
    {
        if(Year < 0 || Month < 1 || Month > 12 || Day < 1||Day>31)
        std::cout<<"The date is inalid"<<std::endl;
        else
        std::cout<<"The date is valid"<<std::endl;
    }
};

int main (void)
{
    Date mydate;
    std::cout<<"Input day:";
    unsigned short inputDay;
    std::cin>> inputDay;
    std::cout<<""<<std::endl;
    mydate.setDay(inputDay);

    std::cout<<"Input Month:";
    unsigned short inputMonth;
    std::cin >> inputMonth;
    std::cout<<""<<std::endl;
    mydate.setMonth(inputMonth);

    std::cout<<"Input Year:";
    unsigned short inputYear;
    std::cin>> inputYear;
    std::cout<<""<<std::endl;
    mydate.setYear(inputYear);

    mydate.printDate();
    mydate.validateDate();    


    return 0;
}