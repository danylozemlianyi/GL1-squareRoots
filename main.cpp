#include <cmath>
#include <iostream>

const short con_4 = 4;
const short con_2 = 2;

int main(int argc, char *argv[]) {
     // Input a, b, c
    std::cout<<"This program will solve equation like ax^2 + bx + c = 0"<<"\n";
    std::cout<<"Please, enter a, b and c form your equation:"<<"\n";
    float a;
    while (1) {
        std::cout<<"Enter a: ";
        std::cin>>a;
        if (a != 0) {
            break;
        }
        std::cout<<"A cannot be 0. Please try again:"<<"\n";
    }

    std::cout<<"Enter b: ";
    float b;
    std::cin>>b;

    std::cout<<"Enter c: ";
    float c;
    std::cin>>c;
    
    // Checking for discriminant lover than 0
    float d;
    if ((pow(b, con_2) - con_4*a*c) < 0) {
        std::cout<<"Discriminant is lower than 0. Exiting..."<<"\n";
        std::cin.get(); 
        return 1;
    } 
    else {
        try
        {
            d = sqrt(pow(b, con_2) - con_4*a*c);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cout<<"Ooops. Something failed. Exiting..."<<"\n";
            std::cin.get(); 
            return 1;
        }
    }

    // Finding solution
    float x1;
    float x2;
    try
        {
            x1 =(-b + d)/(con_2*a);
            x2 =(-b - d)/(con_2*a);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cout<<"Ooops. Something failed. Exiting..."<<"\n";
            std::cin.get(); 
            return 1;
        }

    // Printing solution

    std::cout<<"Everything is Okay. Here is your result:"<<"\n";
    std::cout<<"Xq1: "<<x1<<"\n";
    std::cout<<"Xq1: "<<x2<<"\n";

    std::cin.get(); 
    return 0;
}