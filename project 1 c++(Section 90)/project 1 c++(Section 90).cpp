#include<iostream>
#include <vector>


int main() {

    char UserChoice{};

    int vecNumber = 0;
    int number{};


    std::vector<int> vec;

    do {

        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;

        std::cin >> UserChoice;
        std::cout << std::endl;


        switch (UserChoice) {
        case 'P':case 'p':
            if (!vec.empty())
            {
                std::cout << "{ ";
                for (int i = 0; i < vec.size(); i++)
                    std::cout << vec[i] << " ";
                std::cout << "}";
            }
            else {
                std::cout << "Vector is empty" << std::endl;

            }
            std::cout << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            system("cls");
            break;
          

        case 'A':case 'a':


            std::cout << "Enter a number: " << std::endl;

            std::cin >> number;

            vec.push_back(number);



            std::cout << "Number " << number << " has been added" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            system("cls");

            break;



        case 'M':case 'm':

            if (!vec.empty()) {
                int sum = 0;
                for (int i = 0; i < vec.size(); i++)
                    sum += vec[i];
                double mean = static_cast<double>(sum) / vec.size();
                std::cout << "Mean of the numbers: " << mean << std::endl;
            }
            else {
                std::cout << "Vector is empty" << std::endl;
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            system("cls");
            break;

            

        case 'S':case 's':
            if (vec.size() == 0)
                std::cout << "Vector is empty";
            else {
                int smallest = vec.at(0);
                for (auto num : vec)
                    if (num < smallest)
                        smallest = num;
                           std::cout << " The smallest number is: " << smallest << std::endl;

            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            system("cls");
            
            break;

        case 'L':case 'l':

            if (vec.size() == 0)
                std::cout << "Vector is empty";
            else {
                int largest = vec.at(vec.size() - 1);
                for (auto num : vec)
                    if (num > largest)
                        largest = num;
                std::cout << "The largest number is: " << largest << std::endl;
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            system("cls");
            break;

        case 'Q': case 'q':

            std::cout << "Goodbye..." << std::endl;
            break;

        default:
            std::cout << "Incorrect input, please try again";
        }
    } while (UserChoice != 'Q' && UserChoice != 'q');
}