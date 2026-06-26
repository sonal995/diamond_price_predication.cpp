#include <iostream>
using namespace std;

int main() {
    float carat, depth, table, price;

    cout << "===== Diamond Price Prediction =====" << endl;

    // User Input
    cout << "Enter Carat: ";
    cin >> carat;

    cout << "Enter Depth: ";
    cin >> depth;

    cout << "Enter Table: ";
    cin >> table;

    // Simple Price Prediction Formula
    price = (carat * 5000) + (depth * 20) + (table * 15);

    // Output
    cout << "\nEstimated Diamond Price = $" << price << endl;

    return 0;
}