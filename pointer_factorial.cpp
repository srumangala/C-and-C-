#include <iostream>

// Function to modify an integer by reference
void doubled(int &x) {
    x = x * 2;  // Modifies the original variable directly
}
int factorial(int x) {
    if (x==1){
        return 1;
    } 
    else return x*factorial(x-1);
}


int main() {
    int num;
    int fact;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Call the function to modify the number by reference
    doubled(num);
    fact =factorial(num); // factorial of the doubled number is calculated

    // Display the modified value
    std::cout << "Doubled value: " << num << std::endl;
    std::cout << "Factorial value: " << fact << std::endl;

    return 0;
}
