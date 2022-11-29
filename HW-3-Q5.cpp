#include <string>
#include <sstream>
#include <iostream> 
#include <iomanip>
using namespace std;

class Date{
    //variable declaration
    private:
        unsigned int day;
        unsigned int month;
        unsigned int year;

    public:
        explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 2000);
        
        string toString() const {
        ostringstream output;
        //set width for date formatting
        output << setfill('0') << setw(2) << to_string(this->month) << "/" << setfill('0') << setw(2) 
        << to_string(this->day) << "/" << to_string(this->year);
        return output.str();
        };
            
        void nextDay(){
        
        switch(this->month)
        
        {case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    		if(this->day <= 30)
    		{this->day ++; break;}
    
    		else if((this->day <= 31) && (this->month <= 11))
    		{this->month ++;this->day = 1;break;}
    
    		else if((this->day <= 31) && (this->month >= 12))
    		{this->year ++;this->month = 1;this->day = 1;break;}
    
    	case 4: case 6: case 9: case 11:
    		if(this->day < 29)
    		{this->day ++;break;}
    
    		else if(this->day <= 30)
    		{this->month ++;this->day = 1;break;
    		}
    
    	case 2: //February
    		if((this->year%4==0) && (this->day < 29))
    		{this->day ++;break;}
    
    		else if((!(this->year%4==0)) && (this->day < 28))
    		{this->day ++;break;}
    
    		else if((this->year%4==0)&& (this->day >= 29))
    		{this->month ++;this->day = 1;break;}
    
    		else if ((!(this->year%4==0)) && (this->day >= 28))
    		{this->month ++; this->day = 1; break;}
    
    
            	}
    }       
};


Date::Date(unsigned int m, unsigned int d, unsigned int y)
        : month{m}, day{d}, year{y} {}

int main() {
   const unsigned int MAXDAYS{16};
   Date d{12, 24, 2013}; // instantiate object d of class Date

   // output Date object d's value
   for (unsigned int loop{1}; loop <= MAXDAYS; ++loop) {
      cout <<d.toString() << endl;
      d.nextDay(); // invokes function next day
   } 

   cout << endl;
}