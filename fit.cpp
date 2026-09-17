#include <iostream>


void clearScreen() {
    // \033[2J clears the screen, \033[1;1H moves cursor to top-left
    std::cout << "\033[2J\033[1;1H";
}


int main(){
int option;
int temp = 0;
int calories = 0;
int protein = 0;
int cardio = 0;
float weight = 0;
int height_feet = 0;
int height_inches = 0;
int age = 0;
int activity_level = 0;
float amt_week = 0;
//Pinty's: 220 cal, 14g protein

    do{
        std::cout << "log 1. calories 2. protein 3. cardio 4. total today or 5. maintenance calories || 6. quit\n";
        std::cin >> option;
        clearScreen();

            switch(option){
                case 1: 
                    std::cout << "log # of calories\n";
                    std::cin >> temp;
                    calories += temp;
                    std::cout << "calories: " << calories << '\n';
                    break;
                case 2:
                    std::cout << "log # of protein\n";
                    std::cin >> temp;
                    protein += temp;
                    std::cout << "protein " << protein << '\n';
                    break;
                case 3: 
                    std::cout << "log calories burnt\n";
                    std::cin >> cardio;
                    calories-=cardio;
                    std::cout << calories << '\n';
                    break;
                case 4:
                    std::cout << calories << " calories " << protein << " grams of protein\n";
                    break;
                case 5: {
                    std::cout << "enter weight in pounds\n";
                    std::cin >> weight;
                    std::cout << "enter height: feet\n";
                    std::cin >> height_feet;
                    std::cout << "enter height: inches\n";
                    std::cin >> height_inches;
                    std::cout << "enter age\n";
                    std::cin >> age;
                    float height = (height_feet * 12) + height_inches;
                    float bmr = (4.536 * weight) + (15.875 * height) - (5 * age) + 5;
                    std::cout << "enter activity level: 1. sedentary 2. lightly active 3. moderately active 4. very active 5. extra active\n";
                    std::cin >> activity_level;
                    switch(activity_level){
                        case 1:
                            bmr *= 1.2;
                            break;
                        case 2:
                            bmr *= 1.375;
                            break;
                        case 3:
                            bmr *= 1.55;
                            break;
                        case 4:
                            bmr *= 1.725;
                            break;
                        case 5:
                            bmr *= 1.9;
                            break;
                        default:
                            break;
                    }
                    std::cout << "maintenance calories: " << bmr << '\n';
                    std::cout << "how many pounds do you want to lose per week?\n";
                    std::cin >> amt_week;
                    bmr -= ((amt_week * 3500) / 7);
                    std::cout << "calories to eat per day: " << bmr << '\n';
                    break;
                }
                default:
                    break;
            }   
    }while(option != 6);
}