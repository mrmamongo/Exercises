//
// Created by lamp on 14.11.2020.
//

#include "Main.h"

#include <utility>

void Chapter2::EX1() {
    string name = "Nikita", address = "Moscow";
    cout << string(name + " " + address) << endl;
}
void Chapter2::EX2() {
    double farlong, transp = 220;
    cout << "Enter the distance(farlong):__\b\b";
    cin >> farlong;
    cout << "This distance in yards: "
    << farlong*transp << endl;
}
void method1(){
    cout << "Three blind mice" << endl;
}

void method2(){
    cout << "See how they run" << endl;
}
void Chapter2::EX3() {
    method1();
    method1();
    method2();
    method2();

}

void Chapter2::EX4() {
    int age;
    cout << "Enter your age: __\b\b__";
    cin >> age;
    cout << "Your age in months: " << age*12 << endl;
}

void Chapter2::EX5() {
    double value;
    cout << "Please enter a Celcius value: __\b\b";
    cin >> value;
    cout << value << " degrees Celcius is: "
    << (1.8*value + 32) << endl;
}

void Chapter2::EX6() {
    double lightYears, astronomicalTransp = 63240;
    cout << "Enter the number of light years: ____\b\b\b\b";
    cin >> lightYears;
    cout << lightYears << " light years = "
    << lightYears*(astronomicalTransp)
    << " astronomicas units" << endl;
}

void ex7(int hours, int minutes){
    cout << "Time: " << hours << ":" << minutes << endl;
}

void Chapter2::EX7() {
    int hours, minutes;
    cout << "Enter the number of hours: ___\b\b\b";
    cin >> hours;
    cout << "Enter the number of minutes: ___\b\b\b";
    cin >> minutes;
    ex7(hours, minutes);
}
void Chapter3::EX1() {
    int inches;
    cout << "Enter inches count: __\b\b";
    cin >> inches;
    cout << inches/inchInFeet << " feet, "
    << inches%inchInFeet << " inches" << endl;
}
void Chapter3::EX2() {
    double heightFeet, heigthInch, weight;
    cout << "Enter your height(Feet, Inch): __\b\b";
    cin >> heightFeet >> heigthInch;
    cout << "Enter your weight(Pounds): __\b\b";
    cin >> weight;

    double height_Meters = (((heightFeet*inchInFeet)+heigthInch)*inchesToMeters),\
    weight_Kilogram = weight/poundsToKilogram,\
    BMI = weight_Kilogram/pow(height_Meters, 2);

    cout << "Your height(meters): " << height_Meters
    << " your weight(kilogram): " << weight_Kilogram
    << " your BMI: " << BMI << endl;
}

void Chapter3::EX3() {
    // Latitude in degrees, minutes, seconds
    // Out = Latitude in degrees
    cout << "Enter a latitude in degrees, minutes and seconds: \n"
    << "First, enter the degree: ";
    double degrees;
    cin >> degrees;
    cout << "Second, enter the minutes of arc: ";
    double minutes;
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    double seconds;
    cin >> seconds;
    cout << endl << degrees << " degrees, " << minutes << " minutes, "
    << seconds << " seconds = " << (degrees + minutes/degreeMinutesInDegree +\
    seconds/degreeSecondsInMinute/degreeMinutesInDegree) << " degrees" << endl;
}

void Chapter3::EX4() {
    cout << "Enter the number of seconds: ";
    long seconds;
    cin >> seconds;
    long outSeconds = seconds%secondsInMinute,\
    outMinutes = (seconds/secondsInMinute)%minutesInHour,\
    outHours = (seconds/secondsInMinute/minutesInHour)%hoursInADay,\
    outDays = (seconds/secondsInMinute/minutesInHour/hoursInADay);

    cout << seconds << " seconds = " << outDays << " days, " << outHours
    << " hours, " << outMinutes << " minutes, " << outSeconds << " seconds." << endl;
}

void Chapter3::EX5() {
    cout << "Enter the world's population: ";
    long long population;
    cin >> population;
    cout << "Enter the Russia's population: ";
    long long RusPopulation;
    cin >> RusPopulation;
    double percentage = (double)RusPopulation/(double)population;
    cout << "The population of the Russia is " << percentage*100.0
    << "% of the world population" << endl;
}

void Chapter3::EX6() {
    cout << "Enter the traveled distance(kilometers): ";
    double distance;
    cin >> distance;
    cout << "Enter the fuel consumed(liters): ";
    double fuel;
    cin >> fuel;
    cout << (fuel/distance)*100.0 << " liters per 100 kilometers" << endl;
}

void Chapter3::EX7() {
    cout << "Enter the expentitude(liters per 100 kilometers): ";
    double expentitude;
    cin >> expentitude;
    cout << expentitude << " liters per 100 kilometers are: "
    << round(1/(expentitude/L100KmINMPG)) << " miles per gallon" << endl;
}

void Chapter4::EX1() {
    cout << "What is your first name? ";
    string fName, firstPart, secondPart;
    cin >> firstPart;
    if(cin.get() != '\n'){
        cin >> secondPart;
        fName = string(firstPart + " " + secondPart);
    } else {
        fName = firstPart;
    }
    cout << "What is your last name? ";
    string lName;
    cin >> lName;
    cout << "What letter grarde do you deserve? ";
    char grade;
    cin >> grade;
    cout << "What is your age? ";
    int age;
    cin >> age;

    cout << "Name: " << string(lName + ", " + fName) << endl
    << "Grade: " << char(grade+1) << endl << "Age: " << age << endl;
}

void Chapter4::EX2() {
    string name;
    string dessert;

    cout << "Enter your name:\n";
    do {
        string gotString;
        cin >> gotString;
        name += (gotString + " ");
    } while (cin.get() != '\n');
    cout << "Enter your favourite dessert:\n";
    do {
        string gotString;
        cin >> gotString;
        dessert += (gotString + " ");
    } while (cin.get() != '\n');
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

void Chapter4::EX3() {
    const int ArSize = 20;
    char fName[ArSize];
    char sName[ArSize];
    cin.get();
    cout << "Enter your first name: ";
    cin.getline(fName, ArSize);
    cout << "Enter your last name: ";
    cin.getline(sName, ArSize);

    cout << "Here's the information in a single string: "
    << string(string(sName) + ", " + string(fName)) << endl;
}

void Chapter4::EX4() {
    string fName;
    string sName;

    cout << "Enter your first name: ";
    do {
        string gotString;
        cin >> gotString;
        fName += (gotString + " ");
    } while (cin.get() != '\n');
    cout << "Enter your last name: ";
    do {
        string gotString;
        cin >> gotString;
        sName += (gotString + " ");
    } while (cin.get() != '\n');
    cout << "Here's the information in a single string: "
         << string(string(sName) + ", " + string(fName)) << endl;
}

void Chapter4::EX5() {
    struct CandyBar {
        string name;
        double weight;
        int ccal;

        void ToString(std::ostream& os) const{
            os << "Name: " << name << endl
            << "Weight: " << weight << endl
            << "Ccal: " << ccal << endl;
        };
    };
    CandyBar snack{
        "Mocha Munch",
        2.3,
        350
    };
    snack.ToString(cout);
}

void Chapter4::EX6() {
    struct CandyBar {
        string name;
        double weight;
        int ccal;

        void ToString(std::ostream& os) const{
            os << "Name: " << name << endl
               << "Weight: " << weight << endl
               << "Ccal: " << ccal << endl;
        };
    };

    CandyBar candies[3] = {
            {
                    "Mocha Munch",
                    2.3,
                    350
            },
            {
                "Croissant",
                2,
                200
            },
            {
                "Rafaello",
                1.5,
                190
            }
    };
    for (const auto& candie: candies){
        candie.ToString(cout);
    }
}

void Chapter4::EX7() {
    struct Pizza{
        string companyName;
        double diameter;
        double weight;

        void ToString(std::ostream& os) const {
            cout
            << "The name of the company, which this pizza was made by: " << companyName << endl
            << "The diameter of the pizza: " << diameter << endl
            << "The weight of the pizza: " << weight << endl;
        }
    };
        cout << "Please, enter name of the company, which this pizza was made by: ";
        string pizzaCompanyName;
        double pizzaDiameter, pizzaWeight;
        do {
            string gotString;
            cin >> gotString;
            pizzaCompanyName += (gotString + " ");
        } while (cin.get() != '\n');
        cout << "Please, enter the diameter of the pizza: ";
        cin >> pizzaDiameter;
        cout << "Please, enter the weight of the pizza: ";
        cin >> pizzaWeight;

    Pizza first{
            pizzaCompanyName,
            pizzaDiameter,
            pizzaWeight
    };
    first.ToString(cout);
}
void Chapter4::EX8() {
    struct Pizza{
        string companyName;
        double diameter;
        double weight;
        void ToString(std::ostream& os) const {
            cout
                    << "The name of the company, which this pizza was made by: " << companyName << endl
                    << "The diameter of the pizza: " << diameter << endl
                    << "The weight of the pizza: " << weight << endl;
        }

        Pizza(string pizzaCo, double diameter, double weight){
            this->companyName = std::move(pizzaCo);
            this->weight = weight;
            this->diameter = diameter;
        }
    };
    string pizzaCompanyName;
    double pizzaDiameter, pizzaWeight;
    cout << "Please, enter the diameter of the pizza: ";
    cin >> pizzaDiameter;
    cout << "Please, enter name of the company, which this pizza was made by: ";
    do {
        string gotString;
        cin >> gotString;
        pizzaCompanyName += (gotString + " ");
    } while (cin.get() != '\n');
    cout << "Please, enter the weight of the pizza: ";
    cin >> pizzaWeight;

    auto *first = new Pizza(pizzaCompanyName, pizzaDiameter, pizzaWeight);
    first->ToString(cout);
}
void Chapter4::EX9() {
    struct CandyBar {
        string name;
        double weight;
        int ccal;



        void ToString(std::ostream& os) const{
            os << "Name: " << name << endl
               << "Weight: " << weight << endl
               << "Ccal: " << ccal << endl;
        };
        CandyBar() {
            weight = 0;
            ccal = 0;
        };

        CandyBar(string newName, double newWeight, int newCcal) {
            name = std::move(newName);
            weight = newWeight;
            ccal = newCcal;
        };
    };

    auto candies = new CandyBar[3];
    candies[0] = *new CandyBar("Mocha Munch", 2.3, 300);
    candies[1] = *new CandyBar("Croissant", 2, 240);
    candies[2] = *new CandyBar("Rafaello", 3.2, 180);

    for (int i = 0; i < 3; ++i){
        candies[i].ToString(cout);
    }
}

void Chapter4::EX10() {
    auto res = new double[3];
    cout << "Enter the result of the 40-meters cross:\n"
    << "First one: ";
    cin >> res[0];
    cout << "Second one: ";
    cin >> res[1];
    cout << "Last one: ";
    cin >> res[2];

    cout << "The average is: " << (res[0]+res[1]+res[2])/3 << endl;
}

int main(){
    cout << "Hello!\n";
    while(true) {
        start:;
        cout << "Enter the number of the chapter: ";
        int chapter;
        cin >> chapter;
        switch (chapter) {
            case 2:{ // CHAPTER 2
                chapter2Start:;
                cout << "Enter the number of the exercise(1-7): ";
                int num;
                cin >> num;
                switch (num) {
                    case 1:
                        Chapter2::EX1();
                        goto end;
                    case 2:
                        Chapter2::EX2();
                        goto end;
                    case 3:
                        Chapter2::EX3();
                        goto end;
                    case 4:
                        Chapter2::EX4();
                        goto end;
                    case 5:
                        Chapter2::EX5();
                        goto end;
                    case 6:
                        Chapter2::EX6();
                        goto end;
                    case 7:
                        Chapter2::EX7();
                        goto end;
                    default: {
                        cout << "Please, enter the correct number(1-7): \n";
                        cin.clear();
                        while(cin.get()!='\n'){
                        }
                        goto chapter2Start;
                    }
                }
            }
            case 3:{ // CHAPTER 3
                chapter3Start:;
                cout << "Enter the number of the exercise(1-7): ";
                int num;
                cin >> num;
                switch (num) {
                    case 1:
                        Chapter3::EX1();
                        goto end;
                    case 2:
                        Chapter3::EX2();
                        goto end;
                    case 3:
                        Chapter3::EX3();
                        goto end;
                    case 4:
                        Chapter3::EX4();
                        goto end;
                    case 5:
                        Chapter3::EX5();
                        goto end;
                    case 6:
                        Chapter3::EX6();
                        goto end;
                    case 7:
                        Chapter3::EX7();
                        goto end;
                    default: {
                        cout << "Please, enter the correct number(1-7): \n";
                        cin.clear();
                        while(cin.get()!='\n'){
                        }
                        goto chapter3Start;
                    }
                }
            }
            case 4: { //CHAPTER 4
                chapter4Start:;
                cout << "Enter the number of the exercise(1-10): ";
                int num;
                cin >> num;
                switch (num) {
                    case 1:
                        Chapter4::EX1();
                        goto end;
                    case 2:
                        Chapter4::EX2();
                        goto end;
                    case 3:
                        Chapter4::EX3();
                        goto end;
                    case 4:
                        Chapter4::EX4();
                        goto end;
                    case 5:
                        Chapter4::EX5();
                        goto end;
                    case 6:
                        Chapter4::EX6();
                        goto end;
                    case 7:
                        Chapter4::EX7();
                        goto end;
                    case 8:
                        Chapter4::EX8();
                        goto end;
                    case 9:
                        Chapter4::EX9();
                        goto end;
                    case 10:
                        Chapter4::EX10();
                        goto end;
                    default: {
                        cout << "Please, enter the correct number(1-10): \n";
                        cin.clear();
                        while(cin.get()!='\n'){
                        }
                        goto chapter4Start;
                    }
                }
            }
            default: {
                cout << "Please, enter the correct number(2-4): " << endl;
                cin.clear();
                while(cin.get()!='\n'){
                }
                goto start;
            }
        }
        end:;
        cout << "Do you want to continue?[Y/n]\n";
        string ans;
        cin >> ans;
        if
        (
                ans == "No"
                || ans == "n"
                || ans == "N"
                || ans == "Н"
                || ans == "Нет"
                || ans == "Не"
                )  {
            return 0;
        } else {
            continue;
        }
    }

}