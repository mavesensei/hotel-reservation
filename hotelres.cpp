#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double hotel1(int breakfast, int dinner, int days){
    double pr = 0;
    if(breakfast == 1){
        pr += 40;
    }
    if(dinner == 1){
        pr += 70;
    }
    if(days > 3){
        pr *= 1 - 0.3;
    }
    return pr * days;
}
double hotel2(int breakfast, int dinner, int days){
    double pr = 0;
    if(breakfast == 1){
        pr += 60;
    }
    if(dinner == 1){
        pr += 100;
    }
    if(days > 3){
        pr *= 1 - 0.5;
    }
    return pr * days;
}
double hotel3(int breakfast, int dinner, int days){
    double pr = 0;
    if(breakfast == 1){
        pr += 100;
    }
    if(dinner == 1){
        pr += 150;
    }
    if(days > 3){
        pr *= 1 - 0.8;
    }
    return pr * days;
}
int main(){
    int breakfast, dinner, days, price;
    double hp1, hp2, hp3;
    cout << "Do you want breakfast? (1-yes 2-no)\n";
    cin >> breakfast;
    cout << "Do you want dinner? (1-yes 2-no)\n";
    cin >> dinner;
    cout << "How many days you are gonna stay? \n";
    cin >> days;
    cout << "Which hotel would you prefer? (1-2-3)\n";
    cin >> price;
    hp1 = hotel1(breakfast, dinner, days);
    hp2 = hotel2(breakfast, dinner, days);
    hp3 = hotel3(breakfast, dinner, days);
    double min = hp1;
    if(hp2 < min){
        min = hp2;
    }
    if(hp3 < min){
        min = hp3;
    }
    cout << "Your total will be : " << fixed << setprecision(2) << min << endl;
    return 0;
}