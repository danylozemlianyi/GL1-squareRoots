#include <cmath>
#include <iostream>
#include <limits>

using namespace std;

const uint8_t CONSTANT_FOUR = 4;
const uint8_t CONSTANT_TWO = 2;

int main( int argc, char *argv[] ) {
     // Input a, b, c
    cout<<"This program will solve equation like ax^2 + bx + c = 0"<<endl;
    cout<<"Please, enter a, b and c form your equation:"<<endl;

    double coeff_a;
    double coeff_b;
    double coeff_c;

   cout << "Input coefficient <A>: "; 
    while ( !(cin >> coeff_a) ){ 

        (cout << "Error! Re-Input coefficient <A>: ").flush(); 
        cin.clear(); 
        cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' ); 

    } 
 

    cout << "Input coefficient <B>: "; 
    while ( !(cin >> coeff_b) ){ 

        (cout << "Error! Re-Input coefficient <A>: ").flush(); 
        cin.clear(); 
        cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' ); 

    } 
 
 
    cout << "Input coefficient <C>: "; 
    while ( !(cin >> coeff_c) ){ 

        (cout << "Error! Re-Input coefficient <A>: ").flush(); 
        cin.clear(); 
        cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );

    } 

    if( abs(coeff_a) < 0.00){ 

        cout << "x: 0" << endl; 

    } 

    // Checking for discriminant lover than 0
    auto discriminant = pow(coeff_b, CONSTANT_TWO) - CONSTANT_FOUR*coeff_a*coeff_c;

    if (discriminant < 0) {

        cout<<"Discriminant is lower than 0. Results are complex. Exiting..."<<endl;
        cin.get(); 
        return 1;

    }

    // Finding solution
    auto x1 =(-coeff_b +sqrt( discriminant ))/(CONSTANT_TWO*coeff_a);
    auto x2 =(-coeff_b -sqrt( discriminant ))/(CONSTANT_TWO*coeff_a);

    // Printing solution
    cout<<"Everything is Okay. Here is your result:"<<endl;
    cout<<"Xq1: "<<x1<<endl;
    cout<<"Xq1: "<<x2<<endl;

    cin.get(); 
    return 0;
}
