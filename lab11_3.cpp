#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int count =0;
    double sum;
    string text;
    ifstream source("score.txt");
    while(getline(source,text)){
        sum += atof(text.c_str());
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum/count << endl;
    cout << "Standard deviation = " << sqrt(((pow(sum,2))/count)-(pow((sum/count),2)/count));
}