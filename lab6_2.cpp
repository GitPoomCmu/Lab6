#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    double rad = deg * 3.141593/180;
    return rad;
}
    
double rad2deg(double rad){
    double deg = rad * 180/3.141593;
    return deg;
}
    
double findXComponent(double len1, double len2, double deg1, double deg2){
    double compo = len1 * cos(deg1) + len2 * cos(deg2);
    return compo;
}

double findYComponent(double len1, double len2, double deg1, double deg2){
    double compo = len1 * sin(deg1) + len2 * sin(deg2);
    return compo;
}

double pythagoras(double a, double b){
    return sqrt(pow(a, 2) + pow(b, 2));
}

void showResult(double displayL, double displayD){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << displayL << "\n";
    cout << "Direction of the resultant vector (deg) = " << displayD << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
