#include<iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>

using namespace std;

string timeStamp()
{
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);

    ostringstream oss;
    oss<<setfill('0');
    oss<<setw(2)<<localTime->tm_mday<<".";
    oss<<setw(2)<<localTime->tm_mon + 1<<".";
    oss<<localTime->tm_year + 1900 << " ";
    oss<<setw(2)<<localTime->tm_hour<<":";
    oss<<setw(2)<<localTime->tm_min<<":";
    oss<<setw(2)<<localTime->tm_sec;
    return oss.str() + " | ";
}

class SaveToLog
{
public:
    SaveToLog()
    {
        logFile.open("exercise03.log", ios::out | ios::app);
    }

    ~SaveToLog()
    {
        if (logFile.is_open())
        {
            logFile.close();
        }
    }

    void save(const string& message)
    {
        if (logFile.is_open())
        {
            logFile<<message<<endl;
        }
        else
        {
            cout<<"Error: Log file is not open."<<endl;
        }
    }

private:
    ofstream logFile;
};

class Calculate
{
private:
    string name_of_operation;
    SaveToLog log;
public:
    Calculate()
    {
        this->name_of_operation = "Anything";

        log.save(timeStamp() + "Calculate operation created (Anything)");

    }

    Calculate(string nop)
    {
        this->name_of_operation = nop;
        log.save(timeStamp() + "Calculate operation created (" + nop + ")");
    }

    template<typename T>
    T calculate(T a, T b)
    {
        log.save(timeStamp() + "Calculated the operation: " + a + " + " + b + ";");
        log.save(timeStamp() + "Result: " + a+b);
        return a + b;
    }


};



int main()
{
    Calculate cal("string");
    string a="Hello ";
    string b="World";

    cout<<cal.calculate(a,b);

    return 0;
}
