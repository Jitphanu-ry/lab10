#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string num;
    int num_data;
    double sum = 0,mean,sum_square = 0,standard;
    while(getline(source,num)){
        sum += stod(num);
        sum_square += pow(stod(num),2);
        num_data++;
    }
    mean = sum/num_data;
    standard = sqrt((sum_square/num_data)- pow(mean,2));
    cout << "Number of data = " << num_data << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standard;
}
