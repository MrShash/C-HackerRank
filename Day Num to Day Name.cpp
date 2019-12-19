#include<iostream>
using namespace std;

string GetDayName(int DayNum)
{
    string DayName;

    switch (DayNum){
        case 0 :
            DayName = "Sunday";
        break;
        case 1 :
            DayName = "Monday";
        break;
        case 2 :
            DayName = "Tuesday";
        break;
        case 3 :
            DayName = "Wednesday";
        break;
        case 4:
            DayName = "Thursday";
            break;
        case 5:
            DayName = "Friday";
            break;
        case 6:
            DayName = "Saturday";
            break;
        default : "Incorrect Day Number";
    }
    return DayName;
}
int main(){
    int Day;
    cout <<"Enter Day Number";
    cin >> Day;
    cout << GetDayName(Day);
    return 0;
}
