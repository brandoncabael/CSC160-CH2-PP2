

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double average(const double valueArr[], int arrSize);
double stdDev(const double valueArr[], int arrSize);
void getArrayValues(double valueArr[], const int maxSize, int& actualSize);
void printInfo(const double valueArr[], int arrSize);

int main()
{
    char quit;
    int maxArraySize = 10;
    do
    {
        int arrSize = 0;
        double test1[maxArraySize];
        getArrayValues(test1, maxArraySize, arrSize);
        printInfo(test1, arrSize);
        cout << "Y/y continues, any other quits." << endl;
        cin >> quit;
    }
    while (toupper(quit) == 'Y');
}

double average(const double valueArr[], int arrSize)
{
    double sum = 0;
    for (int i = 0; i < arrSize; i++)
    {
        sum += valueArr[i];
    }
    return sum / arrSize;
}

double stdDev(const double valueArr[], int arrSize)
{
    double avg = average(valueArr, arrSize);
    double variance = 0;

    for (int i = 0; i < arrSize; i++)
    {
        variance += pow((valueArr[i]-avg),2);
    }
    return sqrt(variance/arrSize);
}

void getArrayValues(double valueArr[], const int maxSize, int& actualSize)
{
    double temp;
    int arrSize = 0;
    cout << "Enter up to " << maxSize << " values, separated by white space, terminate input with a -1." << endl;
    cout << "I will compute the average and standard deviation." << endl;
    for (int i = 0; i < maxSize; i++)
    {
        cin >> temp;
        if (temp < 0)
            break;
        valueArr[i] = temp;
        arrSize++;
    }
    actualSize = arrSize;
}
void printInfo(const double valueArr[], int arrSize)
{
        cout << "The average is: " << average(valueArr, arrSize) << endl;
        cout << "The standard deviation is: " << stdDev(valueArr, arrSize) << endl << endl;
}