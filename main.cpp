// Name: Ibrahim Mohamed
// Student ID: 20211002
// Course Name/ID: Structured Programming / CS-112
// Program: A simple program to Calculate the estimate price of product due to inflation
// Assignment due: 27/3/2022
#include <iostream>


using namespace  std;
int main(){
//    Define number of years, inflation rate, estimate future cost and the base year cost.
    int num_of_years;
    float inflation_rate, estimate_cost, base_cost;

//    Input price of product.
    cout<< "Enter The Cost Of the Item: ";
    cin >> base_cost;
//    initializing the product cost with the estimate product cost pre inflation.
    estimate_cost = base_cost;

//    Input Number of years for the estimate products ex: 1, 2, or 8 years.
    cout<< "Enter The Number of Years From Now:  ";
    cin >> num_of_years;

//     Input inflation rate.
    cout<< "Enter The Rate Of Inflation: ";
    cin >> inflation_rate;
//    Shifting inflation rate to decimal.
    inflation_rate = inflation_rate /100;

//    initializing base year to 2022.
    int i =2022 ;
//    Loop for calculating the price per 1 year, 2 years till input years.
    while(true){
//        Calculating cost by adding inflation rate to it.
            estimate_cost = estimate_cost + inflation_rate;
//            checking if we are in intended year.
            if (i == 2022 + num_of_years)break;
            else i++;
        }
//    Output the estimate amount of product in future years.
    cout << "The Estimate Cost Of The Product after "<< num_of_years <<" Years is " << estimate_cost;
}