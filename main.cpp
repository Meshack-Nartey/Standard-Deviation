#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Enter number of elements:\n";
    cin>>N;

    double values[N];
    double sum = 0, mean = 0,variance = 0,stdev = 0, elements=0;
    for(int i=0; i<N; i++) {
        cout<<"Enter an element:\n";
        cin>>elements;
        values[i] = elements;
        sum = sum + elements;
    }
    cout<<"The sum of the numbers is: " << sum << endl;
    mean = sum/N;
    cout<<"The mean of the numbers is : " << mean << endl;
    for(int i =0 ; i<N; i++) {
        variance = variance + pow(values[i] - mean, 2);
    }
   variance =  variance/N;
    cout<<"The variance of the numbers is: "<< variance << endl;

    stdev = sqrt(variance);
    cout << "The  standard deviation of the numbers is: " << stdev << endl;

    return 0;
}
