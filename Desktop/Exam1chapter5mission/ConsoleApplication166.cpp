
#include "Kapec.h"
using namespace std;
int main() {
    char expression[100];
    cout << "Enter summu: ";
    cin.getline(expression, 100);
    double result = Processing(expression);
    cout << "Total: " << result << endl;
}
