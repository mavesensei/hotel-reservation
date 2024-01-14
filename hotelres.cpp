#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int roomstatus = 1; 
double calculateHotelCost(int hotelNumber, int breakfast, int dinner, int days, int wifi, int roomnumber) {
    double pr = 0;
    switch (hotelNumber) {
        case 1:
            if (breakfast == 1) pr += 40;
            if (dinner == 1) pr += 70;
            if (wifi == 1) pr += 10;
            if (days > 3) pr *= 1 - 0.3;
            break;
        case 2:
            if (breakfast == 1) pr += 60;
            if (dinner == 1) pr += 100;
            if (wifi == 1) pr += 40;
            if (days > 3) pr *= 1 - 0.5;
            break;
        case 3:
            if (breakfast == 1) pr += 100;
            if (dinner == 1) pr += 150;
            if (wifi == 1) pr += 100;
            if (days > 3) pr *= 1 - 0.8;
            break;
        default:
            cout << "There's no such a hotel for your choice.\n";
            return 0;
    }
    return pr * days;
}
int main(){
    int hotela, breakfast, dinner, wifi, roomnumber, days;
    double hotelcost;
    bool roomOccupied[3][10] = {false};
    do{
        cout << "How many days are you going to stay? \n";
        cin >> days;
        cout << "\n";
        cout << "Enter your preferences for each day:\n";
        for (int day = 1; day <= days; day++) {
            cout << "Day " << day << ":\n\n";
            cout << "Do you want breakfast? (1-yes 2-no)\n";
            cin >> breakfast;
            cout << "\n";
            cout << "Do you want dinner? (1-yes 2-no)\n";
            cin >> dinner;
            cout << "\n";
            cout << "Do you want wifi? (1-yes 2-no)\n";
            cin >> wifi;
            cout << "\n";
        }
        cout << "Which hotel would you prefer? (1-2-3)\n";
        cin >> hotela;
        hotelcost = calculateHotelCost(hotela, breakfast, dinner, days, wifi, roomnumber);
        cout << "Your total will be: " << fixed << setprecision(2) << hotelcost << "\n\n\n";
        cout << "Enter the room number: ";
        cin >> roomnumber;
        if(roomOccupied[hotela -1][roomnumber]){
            cout << "Room is occupied.\n\n\n";
        } else {
            roomOccupied[hotela -1][roomnumber] = true;
        }
    }while(true);
    return 0;
}
