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
    cout << inches / INCH_IN_FEET << " feet, "
         << inches % INCH_IN_FEET << " inches" << endl;
}
void Chapter3::EX2() {
    double heightFeet, heigthInch, weight;
    cout << "Enter your height(Feet, Inch): __\b\b";
    cin >> heightFeet >> heigthInch;
    cout << "Enter your weight(Pounds): __\b\b";
    cin >> weight;

    double height_Meters = (((heightFeet * INCH_IN_FEET) + heigthInch) * INCH_TO_METER),\
    weight_Kilogram = weight / POUNDS_TO_KILOGRAM,\
    BMI = weight_Kilogram/pow(height_Meters, 2);

    cout << "Your height(meters): " << height_Meters
    << " your weight(kilogram): " << weight_Kilogram
    << " your BMI: " << BMI << endl;
}

void Chapter3::EX3() {
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
         << seconds << " seconds = " << (degrees + minutes / DEGREE_MINUTE_IN_DEGREE + \
    seconds / DEGREE_SECONDS_IN_MINUTE / DEGREE_MINUTE_IN_DEGREE) << " degrees" << endl;
}

void Chapter3::EX4() {
    cout << "Enter the number of seconds: ";
    long seconds;
    cin >> seconds;
    long outSeconds = seconds % SECONDS_IN_MINUTE,\
    outMinutes = (seconds / SECONDS_IN_MINUTE) % MINUTES_IN_HOUR,\
    outHours = (seconds / SECONDS_IN_MINUTE / MINUTES_IN_HOUR) % HOURS_IN_DAY,\
    outDays = (seconds / SECONDS_IN_MINUTE / MINUTES_IN_HOUR / HOURS_IN_DAY);

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
         << round(1/(expentitude / L100KM_IN_MPG)) << " miles per gallon" << endl;
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
    const int AR_SIZE = 20;
    char fName[AR_SIZE];
    char sName[AR_SIZE];
    cin.get();
    cout << "Enter your first name: ";
    cin.getline(fName, AR_SIZE);
    cout << "Enter your last name: ";
    cin.getline(sName, AR_SIZE);

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
         << string(sName + ", " + fName) << endl;
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

void Chapter5::EX1() {
    int firstNum, secondNum, sum = 0;
    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;
    while (firstNum <= secondNum){
        sum += firstNum;
        firstNum++;
    }

    cout << "Sum of these nums: " << sum << endl;
}
void Chapter5::EX2() {
    const int ArSize = 101;
    array<long double, ArSize> factorials{};
    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ArSize; ++i) {
        factorials[i] = i * factorials[i-1];
    }

    for (int i = 0; i < ArSize; ++i) {
        cout << i << "! = " << factorials[i] << endl;
    }
}
void Chapter5::EX3() {
    int sum = 0, value;
    cout << "Enter the numbers:\n";
    cin >> value;
    while (value != 0){
        sum+=value;
        cout << "The sum is: " << sum << endl;
        cin >> value;
    }
    cout << "Numbers read, final sum is: " << sum << endl;
}
void Chapter5::EX4() {
    double Daphnie = 100, Cleo = 100,\
    DaphPercent = 10, CleoPercent = 5, DaphnieSum = 100;
    int year = 0;
    do {
        DaphnieSum += (DaphPercent/100)*Daphnie;
        Cleo += ((CleoPercent/100)*Cleo);
        cout << "Daphnie balance: " << DaphnieSum << endl
        << "Cleo balance: " << Cleo << endl
        << "On the " << year << " year" << endl;
        year++;
    } while ( DaphnieSum >= Cleo);
    cout << "Daphnie balance equals Cleo balance: " << Cleo << endl
    << "On the " << year << " year" << endl;
}
void Chapter5::EX5() {
    const size_t MONTHS_COUNT = 12;
    vector<string> months {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    long sum[MONTHS_COUNT + 1];
    sum[MONTHS_COUNT] = 0;
    for (size_t i = 0; i < MONTHS_COUNT; ++i){
        cout << "Please, enter sell value for the " << months[i] << ": ";
        cin >> sum[i];
        sum[MONTHS_COUNT] += sum[i];
    }
    cout << "Sell value for this year: " << sum[MONTHS_COUNT] << endl;
}
void Chapter5::EX6() {
    const size_t MONTHS_COUNT = 12;
    const size_t YEARS_COUNT = 3;
    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };
    long* sum[YEARS_COUNT+1];
    for (auto & i : sum){
        i = new long[MONTHS_COUNT + 1];
    }

    for (size_t i = 0; i < YEARS_COUNT; ++i){
        cout << "Enter sell value for the: " << i+1  << " year" << endl;
        for (size_t j = 0; j < MONTHS_COUNT; ++j){
            cout << "Enter sell value for the " << months[j] << ": ";
            cin >> sum[i][j];
            sum[i][MONTHS_COUNT] += sum[i][j];
        }
    }
    cout << "Sell value for the first year: " << sum[0][MONTHS_COUNT] << endl
         << "Sell value for the second year: " << sum[1][MONTHS_COUNT] << endl
         << "Sell value for the third year: " << sum[2][MONTHS_COUNT] << endl
         << "Summary sell value for three years: "
         << sum[0][MONTHS_COUNT] + sum[1][MONTHS_COUNT] + sum[2][MONTHS_COUNT] << endl;
}
void Chapter5::EX7() {
    struct Car{
      string producer;
      int year;

      Car(string pr, int y){
          producer = std::move(pr);
          year = y;
      }
      Car() = default;
      void ToString(std::ostream& os) const{
        os << year << " " << producer << endl;
      };
    };
    cout << "How many cars do you want to place in the catalogue? ";
    size_t amount;
    cin >> amount;
    Car* catalogue[amount];
    for ( size_t i = 0; i < amount; ++i){
        cout << "Automobile #" << i+1 << endl;
        string prod;
        int y;
        cout << "Enter the producer: ";
        do {
            string gotString;
            cin >> gotString;
            prod += (gotString + " ");
        } while (cin.get() != '\n');
        cout << "Enter the release year: ";
        cin >> y;
        catalogue[i] = new Car(prod, y);
    }
    cout << "Your collection:\n";
    for ( size_t i = 0; i < amount; ++i){
        catalogue[i]->ToString(cout);
    }
}
void Chapter5::EX8() {
    const size_t AR_SIZE = 100;
    char in[AR_SIZE];
    int count = 0;
    cout << "Enter words (to end enter \"done\"): ";
    do {
        cin >> in;
        count++;
    } while (strcmp(in, "done") != 0);
    cout << "You entered " << count-1 << " words.\n";
}
void Chapter5::EX9() {
    string in;
    int count = 0;
    cout << "Enter words (to end enter \"done\"): ";
    do {
        cin >> in;
        count++;
    } while (in != "done");
    cout << "You entererd " << count - 1 << " words.\n";
}
void Chapter5::EX10() {
    int stringCount;
    cout << "Enter the number of the strings: ";
    cin >> stringCount;

    for ( int i = 1; i <= stringCount; ++i) {
        for ( int j = 0; j < stringCount - i; ++j) {
            cout << ".";
        }
        for ( int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void Chapter6::EX1() {
    cout << "Enter characters: ";
    char get;
    while ((cin >> get)||(get != '@')){
        cout << char(get+1) << endl;
    }
}
void Chapter6::EX2() {
    const size_t AMOUNT = 10;
    double donations[AMOUNT];
    cout << "Enter the donations(up to 10): ";
    size_t i = 0, entered_i = 0;
    double sum = 0;
    while (i < AMOUNT && cin >> donations[i]) {
        i++;
        entered_i++;
    }
    cin.clear();
    while (cin.get() != '\n') {
    }
    for (i = 0; i < entered_i; ++i){
        sum += donations[i];
    }
    cout << "Average donation: " << sum / entered_i << endl
    << "Donations that are higher than average: ";
    for (i = 0; i < entered_i; ++i) {
        if (donations[i] > (sum / entered_i)){
            cout << donations[i] << endl;
        }
    }
}
void Chapter6::EX3() {
    string out = R"(Please, enter one of the following choices:
c) carnivore p) pianist
t) tree      g) game
)";
    cout << out;
    bool condition = true;
    while(condition){
        char state;
        cin >> state;
        switch (state) {
            case 'c': {
                cout << "A maple is a carnivore\n";
                condition = false;
                break;
            }
            case 't': {
                cout << "A maple is a tree\n";
                condition = false;
                break;
            }
            case 'p': {
                cout << "A maple is a pianist\n";
                condition = false;
                break;
            }
            case 'g': {
                cout << "A maple is a game\n";
                condition = false;
                break;
            }
            default: {
                cout << "Please, enter a c, p, t, or g: ";
                condition = true;
                continue;
            }
        }
    }
}
void Chapter6::EX4(){
    const size_t STRSIZE = 20;
    const size_t AMOUNT = 3;
    struct bop {
        char fullname[STRSIZE];
        char title[STRSIZE];
        char bopname[STRSIZE];
        int preference;

        void ToString(std::ostream& os, char state){
            switch (state) {
                case 'a':
                    cout << fullname << endl;
                    return;
                case 'b':
                    cout << title << endl;
                    return;
                case 'c':
                    cout << bopname << endl;
                    return;
                case 'd':
                    ToString(os);
                    return;
                default:
                    return;
            }
        };
        void ToString(std::ostream& os){
            switch (preference) {
                case 0:
                    cout << fullname << endl;
                    return;
                case 1:
                    cout << title << endl;
                    return;
                case 2:
                    cout << bopname << endl;
                    return;
                default:
                    return;
            }
        };
    };
    bop programmers[AMOUNT]{
            {
                "Wimp Macho",
                "WimpTitle",
                "WimpBopName",
                0
            },
            {
                "Raki Rhodes",
                "RakiTitle",
                "RakiBopName",
                1
            },
            {
                "Celia Laiter",
                "CeliaTitle",
                "CeliaBopName",
                2
            }
    };
    string out = R"( a. display by name    b. display by title
c. display by bopname b. display by preference
q. quit
)";
    cout << out;
    while(true){
        start:;
        cout << "Enter your choice: ";
        char state;
        cin >> state;
        switch (state) {
            case 'a':
            case 'b':
            case 'c':
            case 'd':
                {
                for (auto & programmer : programmers){
                    programmer.ToString(cout, state);

                } goto start;
            case 'q': {
                cout << "Bye!";
                return;
            }
            }
            default: {
                continue;
            }
        }
    }
}
void Chapter6::EX5() {
    const double FIRST_LEVEL = 5000, SECOND_LEVEL = 10000, THIRD_LEVEL = 20000, FOURTH_LEVEL = 35000;
    double income;
    while (cout << "Enter your income: " && cin >> income) {

        if ( income < FIRST_LEVEL){
            cout << "Your tax is: 0\n";
        } else {
            cout << "Your tax is: ";
            if ( income > FIRST_LEVEL && income < FIRST_LEVEL+SECOND_LEVEL) {
                cout << (income-FIRST_LEVEL)*(0.1) << endl;
            } else if (income > FIRST_LEVEL + SECOND_LEVEL && income < FIRST_LEVEL + SECOND_LEVEL + THIRD_LEVEL) {
                cout << SECOND_LEVEL*0.1 + (income - SECOND_LEVEL - FIRST_LEVEL)*0.15 << endl;
            } else if (income > FOURTH_LEVEL) {
                cout << SECOND_LEVEL*(0.1) + (THIRD_LEVEL)*(0.15) + (income - FOURTH_LEVEL) * (0.20)
                     << endl;
            }
        }
    }
    cin.clear();
    cin.get();
}

void Chapter6::EX6() {
    size_t donaters;
    double grandDonCondition = 10000;
    struct Patreons{
        string name;
        double donation;
    };
    cout << "Please, enter the number of donaters: ";
    cin >> donaters;
    auto* patreons = new Patreons[donaters];
    for (size_t i = 0; i < donaters; ++i){
        cout << "Please, enter the name of the donater: ";
        do {
            string gotString;
            cin >> gotString;
            patreons[i].name += (gotString + " ");
        } while (cin.get() != '\n');
        cout << "Please, enter the donation: ";
        cin >> patreons[i].donation;
    }
    string grandDon = "Grand Patrons\n";
    string otherDon = "Patrons\n";
    for (size_t i = 0; i < donaters; ++i) {
        if (patreons[i].donation > grandDonCondition){
            grandDon += string(patreons[i].name + '\n');
        } else {
            otherDon += string(patreons[i].name + '\n');
        }
    }
    if(grandDon != "Grand Patrons\n"){
        cout << grandDon;
    } else {
        cout << grandDon << "none\n";
    }
    cout << R"(---------------------------)" << endl;
    if(otherDon != "Patrons\n"){
        cout << otherDon;
    } else {
        cout << otherDon << "none\n";
    }
    delete [] patreons;
}
void Chapter6::EX7() {
    const size_t VOW_SIZE = 12;
    string vowels_ = "aeiouyAEIOUY";

    int vowels = 0, consonants = 0, others = 0;
    bool isVowel = false;

    cout << "Enter words, (enter q to quit): ";
    string word;

    while (cin >> word && word != "q") {
        if (isalpha(word[0])) {
            if (vowels_.find_first_of(word[0]) != string::npos){
                isVowel = true;
            }

            if (isVowel) vowels++;
            else consonants++;
        }
        else others++;

        isVowel = false;
    }
    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";
}
void Chapter6::EX8() {
    std::ofstream oFile("example.txt", std::ios::in);
    string oString = R"(THIS IS THE START OF THE FILE
    THIS IS THE END OF THE FILE)";
    oFile << oString;
    oFile.close();
    std::streampos begin, end;
    std::ifstream file("example.txt");
    begin = file.tellg();
    file.seekg(0, std::ios::end);
    end = file.tellg();
    file.close();
    cout << "Length: " << (end - begin) << " characters\n";
}
void Chapter6::EX9() {
    size_t donaters;
    double grandDonCondition = 10000;
    struct Patreons{
        string name;
        double donation;
    };
    std::ifstream file;
    file.open("example.txt");
    file >> donaters;

    auto* patreons = new Patreons[donaters];

    for (size_t i = 0; i < donaters; ++i){
        file.ignore();
        getline(file, patreons[i].name);
        file >> patreons[i].donation;
    }
    string grandDon = "Grand Patrons\n";
    string otherDon = "Patrons\n";
    for (size_t i = 0; i < donaters; ++i) {
        if (patreons[i].donation > grandDonCondition){
            grandDon += string(patreons[i].name + '\n');
        } else {
            otherDon += string(patreons[i].name + '\n');
        }
    }
    if(grandDon != "Grand Patrons\n"){
        cout << grandDon;
    } else {
        cout << grandDon << "none\n";
    }
    cout << R"(---------------------------)" << endl;
    if(otherDon != "Patrons\n"){
        cout << otherDon;
    } else {
        cout << otherDon << "none\n";
    }
    delete [] patreons;
}

double Harmonic(double first, double second){
    return ((2.0 * first * second) / (first + second));
}

void Chapter7::EX1() {
    double firstNum, secondNum;

    while (true) {
        cout << "Enter the first number: ";
        cin >> firstNum;
        cout << "Enter the second number: ";
        cin >> secondNum;

        if (firstNum == 0 || secondNum == 0){
            cout << "Bye!\n";
            break;
        }

        cout << "Average harmonic of " << firstNum << " and " << secondNum
        << " is: " << Harmonic(firstNum, secondNum) << endl;
    }
}

void Read(double array[], size_t& size){
    for (size_t i = 0; i < size; ++i) {
        cout << "Enter the result: ";
        double res;
        cin >> res;

        if (cin.fail()){
            cin.clear();
            do {
              cin.get();
            } while (cin.get() != '\n');
            size = i;
            break;
        }

        array[i] = res;
    }
}
void Average(double array[], size_t size){
    for ( size_t i = 0; i < size; ++i){
        array[size] += array[i];
    }
}
void Out(const double array[], size_t size, std::ostream& out){
        out << "The average is: " << array[size]/size<< endl;
}

void Chapter7::EX2() {
    size_t arraySize = 11;
    double results[arraySize];

    for (size_t i = 0; i < arraySize; ++i) {
        results[i] = 0;
    }

    Read(results, arraySize);
    Average(results, arraySize);
    Out(results, arraySize, cout);
}
struct Box {
    char maker[40];
    float height;
    float weight;
    float length;
    float volume;
};
void Print(Box toPrint, std::ostream& os) {
    os << "Maker of the box: " << toPrint.maker << endl
    << "Height of the box: " << toPrint.height << endl
    << "Weight of the box: " << toPrint.weight << endl
    << "Length of the box: " << toPrint.length << endl
    << "Volume of the box: " << toPrint.volume << endl;
}
void Set(Box& toSet){
    toSet.volume = toSet.height * toSet.weight * toSet.length;
    cout << "The volume was set!\n";
}
void Chapter7::EX3() {

    Box first{
        "Bruce Lee",
        35, 25, 10, 0
    };
    Print(first, cout);
    Set(first);

}

long double probability (unsigned numbers, unsigned picks){
 long double result = 1.0;
 long double n;
 unsigned p;
 for (n = numbers, p = picks; p > 0; n--, p--){
     result = result * n / p;
 }
 return result;
}
void Chapter7::EX4() {
    const unsigned MAIN = 47, MEGA = 27;
    long double choices = probability(MAIN, 5);
    long double mega = probability(MEGA, 1);
    cout << "Your chance to win is: " << choices * mega
    << "Bye!\n";
}

long long Factorial(long long value) {
    if (value == 0 || value == 1){
        return 1;
    } else {
            value *= Factorial(value - 1);
        return value;
    }
}

void Chapter7::EX5() {
    long long value;
    while (true) {
        cout << "Enter the value: ";
        cin >> value;
        if(cin.fail()){
            cin.clear();
            while (cin.get() != '\n') {
            }
            cout << "Have a good day!\n";
            break;
        }
        cout << "Factorial of the " << value <<  " is: " << Factorial(value) << endl;
    }
}

void Fill_Array(double array[],size_t& amount ){
    for (size_t i = 0; i < amount; ++i) {
        cout << "Enter the result: ";
        double res;
        cin >> res;

        if (cin.fail()){
            cin.clear();
            do {
                cin.get();
            } while (cin.get() != '\n');
            amount = i;
            break;
        }

        array[i] = res;
    }
}
void Show_Array(double array[], size_t amount){
    for (size_t i = 0; i < amount; ++i) {
        cout << i+1 << ": " << array[i];
    }
}
void Reverse_Array(double array[], size_t amount){
    for (size_t i = 0; i < amount; ++i){
        std::swap(array[i], array[amount-i]);
    }
}

void Chapter7::EX6() {
    cout << "Enter the number of characters: ";
    size_t amount;
    cin >> amount;
    double array[amount];
    Fill_Array(array, amount);
    Show_Array(array, amount);
    Reverse_Array(array, amount);
}

double* fill_array(double array[],const size_t lim){
    double temp;
    size_t i;
    for (i = 0; i < lim; ++i){
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if (!cin){
            cin.clear();
            while (cin.get() != '\n'){
                continue;
            } cout << "Bad input; Input process terminated\n";
            break;
        } else if ( temp < 0) {
            break;
        }
        array[i] = temp;
    }
    return &array[i];
}
void show_array (const double array[], double* lastParam){
    for (size_t i = 0; array[i] != *lastParam; ++i){
        cout << "Property #" << (i + 1) << ": $"
        << array[i] << endl;
    }
}
void revalue(double r, double array[], double* lastParam){
    for (size_t i = 0; array[i] != *lastParam; ++i){
        array[i] *= r;
    }
}
void Chapter7::EX7() {
    const size_t MAX = 5;
    double propeties[MAX];
    double* size = fill_array(propeties, MAX);
    show_array(propeties, size);
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n'){}
            cout << "Bad input: Please, enter a number: ";
        }
        revalue(factor, propeties, size);
        show_array(propeties, size);
}
const size_t SEASONS = 4;
string S_NAMES[SEASONS] =
        {"Spring", "Summer", "Fall", "Winter"};
void fill(double pa[]){
    for (size_t i = 0; i < SEASONS; ++i){
        cout << "Enter " << S_NAMES[i] << " expences: ";
        cin >> (pa)[i];
    }
}
void show(double da[]){
    double total = 0.0;
    cout << "\nEXPENCES\n";
    for (size_t i = 0; i < SEASONS; ++i) {
        cout << S_NAMES[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total expences: $" << total << endl;
}
void Chapter7::EX8() {
    double expences[SEASONS];
    fill(expences);
    show(expences);
}
struct Student {
    string fullname;
    string hobby;
    int ooplevel;
};

size_t getinfo(Student pa[], size_t size) {
    cout << "Enter the number of the entered students: ";
    size_t entered;
    bool escaped = false;
    cin >> entered;
    for (size_t i = 0; i < entered; ++i) {
        cout << "Enter the name: ";
        string name;
        cin >> name;
        if (name.empty()) {
            entered--;
            escaped = true;
            break;
        }
        pa[i].fullname = name;
        cout << "Enter hobby: ";
        cin >> pa[i].hobby;
        cout << "Enter OOP level: ";
        cin >> pa[i].ooplevel;
    }
    return entered;
}

void display1 (const Student& st) {
    cout << "THIS IS THE FIRST METHOD:\n";
    cout << "Name: " << st.fullname << endl
    << "Hobby: " << st.hobby << endl
    << "OOP Level: " << st.ooplevel << endl;

}
void display2 (const Student* ps) {
    cout << "THIS IS THE SECOND METHOD:\n";
    cout << "Name: " << ps->fullname << endl
    << "Hobby: " << ps->hobby << endl
    << "OOP Level: " << ps->ooplevel << endl;
}

void display3 (const Student pa[], size_t size){
    cout << "THIS IS THE THIRD METHOD:\n";
    for (size_t i = 0; i < size; ++i) {
        display1(pa[i]);
    }
}
void Chapter7::EX9() {
    cout << "Enter class size: ";
    size_t class_size;
    cin >> class_size;
    while(cin.get() != '\n'){}
    auto ptr_stu = new Student[class_size];
    size_t entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; ++i) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
}

double add(double x, double y) {
    return x + y;
}
double take(double x, double y) {
    return x - y;
}
double Calculate(double x, double y,double (*func)(double, double ) ) {
    return func(x, y);
}
void Chapter7::EX10() {
    double (*pf[2])(double, double);
    pf[0] = add;
    pf[1] = take;
    double x, y;
    while (true) {
        cout << "Enter numbers:\n";

        cout << "Enter first number: ";
        cin >> x;
        if (cin.fail()) {
            cin.clear();
            while (cin.get() != '\n') {}
            cout << "Bad input; Please, enter a number:\n";
            continue;
        }
        cout << "Enter second one: ";
        cin >> y;
        if (cin.fail()) {
            cin.clear();
            while (cin.get() != '\n') {}
            cout << "Bad input; Please, enter a number:\n";
            continue;
        }
        while(true){
            cout << "Enter the expression(q to quit): ";
            string state;
            cin >> state;
            if (state == "add" || state == "Add") {
                cout << "Function ADD: " << Calculate(x, y, add) << endl;
                continue;
            } else if (state == "take" || state == "Take")
            {
                cout << "Function TAKE: " << Calculate(x, y, take) << endl;
                continue;
            } else if (state == "q" || state == "Q"){
                cout << "Bye!\n";
                return;
            } else {
                cout << "Enter right value: ";
                continue;
            }
        }
    }

}

int main(){
    cout << "Hello!\n";
    while(true) {
        start:;
        cout << "Enter the number of the chapter: ";
        int chapter;
        cin >> chapter;
        switch (chapter) {
            case 2: { // CHAPTER 2
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
                        while (cin.get() != '\n') {
                        }
                        goto chapter2Start;
                    }
                }
            }
            case 3: { // CHAPTER 3
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
                        while (cin.get() != '\n') {
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
                        while (cin.get() != '\n') {
                        }
                        goto chapter4Start;
                    }
                }
            }
            case 5: { // CHAPTER 5
                chapter5Start:;
                cout << "Enter the number of the exercise(1-10): ";
                int num;
                cin >> num;
                switch (num) {
                    case 1:
                        Chapter5::EX1();
                        goto end;
                    case 2:
                        Chapter5::EX2();
                        goto end;
                    case 3:
                        Chapter5::EX3();
                        goto end;
                    case 4:
                        Chapter5::EX4();
                        goto end;
                    case 5:
                        Chapter5::EX5();
                        goto end;
                    case 6:
                        Chapter5::EX6();
                        goto end;
                    case 7:
                        Chapter5::EX7();
                        goto end;
                    case 8:
                        Chapter5::EX8();
                        goto end;
                    case 9:
                        Chapter5::EX9();
                        goto end;
                    case 10:
                        Chapter5::EX10();
                        goto end;
                    default: {
                        cout << "Please, enter the correct number(1-10): \n";
                        cin.clear();
                        while (cin.get() != '\n') {
                        }
                        goto chapter5Start;
                    }
                }
            }
            case 6: {
                chapter6Start:;
                cout << "Enter the number of the exercise(1-9): ";
                int num;
                cin >> num;
                switch (num) {
                    case 1:
                        Chapter6::EX1();
                        goto end;
                    case 2:
                        Chapter6::EX2();
                        goto end;
                    case 3:
                        Chapter6::EX3();
                        goto end;
                    case 4:
                        Chapter6::EX4();
                        goto end;
                    case 5:
                        Chapter6::EX5();
                        goto end;
                    case 6:
                        Chapter6::EX6();
                        goto end;
                    case 7:
                        Chapter6::EX7();
                        goto end;
                    case 8:
                        Chapter6::EX8();
                        goto end;
                    case 9:
                        Chapter6::EX9();
                        goto end;
                    default: {
                        cout << "Please, enter the correct number(1-9): \n";
                        cin.clear();
                        while (cin.get() != '\n') {
                        }
                        goto chapter6Start;
                    }
                }
            }
            case 7: {
                chapter7Start:;
                cout << "Enter the number of the exercise(1-10): ";
                int num;
                cin >> num;
                switch (num) {
                    case 1:
                        Chapter7::EX1();
                        goto end;
                    case 2:
                        Chapter7::EX2();
                        goto end;
                    case 3:
                        Chapter7::EX3();
                        goto end;
                    case 4:
                        Chapter7::EX4();
                        goto end;
                    case 5:
                        Chapter7::EX5();
                        goto end;
                    case 6:
                        Chapter7::EX6();
                        goto end;
                    case 7:
                        Chapter7::EX7();
                        goto end;
                    case 8:
                        Chapter7::EX8();
                        goto end;
                    case 9:
                        Chapter7::EX9();
                        goto end;
                    case 10:
                        Chapter7::EX10();
                        goto end;
                    default: {
                        cout << "Please, enter the correct number(1-10): \n";
                        cin.clear();
                        while (cin.get() != '\n') {
                        }
                        goto chapter7Start;
                    }
                }
            }
            default: {
                cout << "Please, enter the correct number(2-7): " << endl;
                cin.clear();
                while (cin.get() != '\n') {
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
                ) {
            return 0;
        } else {
            continue;
        }
    }
}