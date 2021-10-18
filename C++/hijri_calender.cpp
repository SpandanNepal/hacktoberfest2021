#include<iostream>
#include <string>

using namespace std;



// function that ask an integer and returns it
int ask_number(){

  // declaring variable named number as an integer
  int number ;

  // ask for input and save it in number
  std::cin >> number;

  // loop that check wether number is an integer
  while (cin.fail() || number < 0 ) {

    std::cout << "Enter a positive integer please" << '\n';

    // clearing cin.fail() status
    cin.clear();
    // clearing the iostream buffer
    cin.ignore(256,'\n');
    // ask for input and save it in number
    std::cin >> number;

  }

  // returning the number for the function ask_number()
  return number;
}

// function that get a number and map it to a month and return it name as a string
string get_month(int number){

  // switch statment that take a number and check for it month
  switch (number) {

    case 1:
      return "Muharam";
      break;

    case 2:
        return "Saffar";
        break;

    case 3:
        return "Rabiul Awal";
        break;

    case 4:
        return "Rabiul Sani ";
        break;

    case 5:
        return "Jamadul Awal";
        break;

    case 6:
        return "Jamadul Sani";
        break;

    case 7:
        return "Rajjab";
        break;

    case 8:
        return "Shaban";
        break;

    case 9:
        return "Ramazan";
        break;

    case 10:
        return "Shawal";
        break;

    case 11:
        return "Zil Qaida";
        break;

    case 12:
        return "Zil hijja";
        break;
  }

  return "";

}

// function that display the month choosing menu and take input and return it
int ask_month(){

  // declaring an integer to store the user months choice
  int choice;

  system("clear");

  std::cout << "Choose which month by which do you want to start" << '\n';
  std::cout << "1. Muharram          2. Saffar           3. Rabiul Awal" << '\n';
  std::cout << "4. Rabiul Sani       5. Jamadul Awal     6. Jamadul Sani " << '\n';
  std::cout << "7. Rajjab            8. Shaban           9. Ramazan" << '\n';
  std::cout << "10. Shawal           11. Zil Qaida       12. Zil hijja" << '\n';

  // run the function ask_number() and save its return in choice
  choice = ask_number();

  // loop that check wether the month input was between 0 to 13
  while(choice<=0 || choice >12 ){
    std::cout << "Wrong option entered try again" << '\n';
    // run the function ask_number() and save its return in choice
    choice = ask_number();
  }

  // returning the month choice as the return of the function ask_month()
  return choice;
}

// function that display the day choosing menu and take input and return it
int ask_day(){

  // declaring an integer to store the user months choice
  int choice;

  std::cout << "Whats the first day of the week" << '\n';
  std::cout << "1. Monday       2. Tuesday      3. Wednesday" << '\n';
  std::cout << "4. Thursday     5. Friday       6. Saturday" << '\n';
  std::cout << "7. Sunday" << '\n';

  // run the function ask_number() and save its return in choice
  choice = ask_number();

  // loop that check wether the day input was between 0 to 7
  while(choice<=0 || choice >7 ){
    std::cout << "Wrong option entered try again" << '\n';
    // run the function ask_number() and save its return in choice
    choice = ask_number();
  }

  // returning the month choice as the return of the function ask_month()
  return choice;
}

// a function that will calculate wether a month have 29 or 30 days
// and display the specific month name along with its days number
int print_days(int temp , int month_number , int count){

  // adding 12 hours 44 minuts in temp in terms of seconds
  temp += ((12*60*60)+(44*60));

  // checking weather the reaming time in temp is smaller than 1 day
  if (temp<(87300)) {
    std::cout << get_month(count) << " :" << 29 << " days" << '\n';

  // checking weather the reaming time in temp is greater than 1 day
  }else if (temp>=(87300)) {
    std::cout << get_month(count) << " :" << 30 << " days" << '\n';
    // subracting seconds of 1 day as 1 day is added in the current month
    temp = temp - 87300;
  }

  // returning temp for the return of the function print_days()
  return temp;
}

int main () {

  // declaring integer one for temperoary use and one for storing
  // the month number user wants to start with
  int month_number,temp = 0;

  // run the function ask_month() and store it in month_number
  month_number= ask_month();

  // loop for the month number to the end of the year
  for (size_t i = month_number; i < 12; i++) {

    // save the return of the function print_days() in temp
    temp = print_days(temp, month_number ,i);

  }


  for (size_t i = 1; i < month_number; i++) {

    // save the return of the function print_days() in temp
    temp = print_days(temp, month_number ,i);

  }

  std::cout << "Press any key to continue" << '\n';
  // waiting for user to press any key (code specific to GNU/linux platform only)
  system("read -s -N 1");

  system("clear");

  // run the function ask_day() and save it return is temp
  temp = ask_day();

  // displaying which month calender is it
  std::cout << "Calender for "<< get_month(month_number) << '\n' << '\n';

  // layout for calender
  std::cout << "  Monday    |  Tuesday   |  Wednesday |  Thursday  |  Friday    |  Saturday  |  Sunday    |" << '\n';

  // leaving first days blank until month starts
  for (size_t i = 1; i < temp; i++) {
    std::cout << "            |" ;
  }

  // loop that will run 29 times to print dates in the calender
  for (size_t i = 1; i < 30; i++) {

    // check wether date is in the same week and print it on the same line
    if ((i!=(8-temp)) || (i!=(15-temp)) || (i!=(22-temp)) || (i!=(29-temp))) {
      std::cout <<"      "<< i << (i<10 ? "      " : "     ") ;
    }

    // if the weeks end just go to next line
    if ((i==(8-temp)) || (i==(15-temp)) || (i==(22-temp)) || (i==(29-temp))) {
      std::cout <<  '\n';
    }

  }

	return 0;

}
