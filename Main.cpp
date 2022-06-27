#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    float a,b,c;
    float herons_formula(float, float, float);
    cout << "Enter three sides of triangle" << "\n";
    cin >> a >> b >> c;
    cout << "Area of given triangle is : " << herons_formula(a,b,c);
    return 0;
}

float herons_formula(float a, float b, float c){
    float semi_perimeter = (a+b+c)/2;
    float equation_for_underoot = semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c);
    
    float area = sqrt(equation_for_underoot);

    return area;
}