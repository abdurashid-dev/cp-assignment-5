//
//  main.cpp
//  assignment 5
//
//  Created by Abdurashid Abdumominov on 29/10/23.
//

#include <iostream>
    //Problem1
//#include <iomanip>
//
//double divideAndSetPrecision(double dividend, double divisor) {
//    if (divisor == 0) {
//        std::cout << "Division by zero is not allowed." << std::endl;
//        return 0.0;
//    }
//    double result = dividend / divisor;
//    return result;
//}
//
//int main() {
//    double num1, num2;
//
//    std::cout << "Enter the first number: ";
//    std::cin >> num1;
//
//    std::cout << "Enter the second number: ";
//    std::cin >> num2;
//
//    double result = divideAndSetPrecision(num1, num2);
//
//    std::cout << std::fixed << std::setprecision(3);
//    std::cout << "Result of division: " << result << std::endl;
//
//    return 0;
//}

    //Problem 2
//int kilometersToMeters(int kilometers) {
//    return kilometers * 1000;
//}
//
//int main() {
//    double kilometers;
//
//    std::cout << "Enter the number of kilometers: ";
//    std::cin >> kilometers;
//
//    int meters = kilometersToMeters(kilometers);
//
//    std::cout << "Equivalent meters: " << meters << std::endl;
//
//    return 0;
//}

    //Problem 3
//bool isIsoscelesRightTriangle(int a, int b, int c) {
//    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
//        return true;
//    }
//    return false;
//}
//
//int main() {
//    int sideA, sideB, sideC;
//
//    std::cout << "Enter the first side length (a): ";
//    std::cin >> sideA;
//    std::cout << "Enter the second side length (b): ";
//    std::cin >> sideB;
//    std::cout << "Enter the third side length (c): ";
//    std::cin >> sideC;
//
//    if (isIsoscelesRightTriangle(sideA, sideB, sideC)) {
//        std::cout << "Yes, an isosceles right triangle with different sides can be formed." << std::endl;
//    } else {
//        std::cout << "No, an isosceles right triangle with different sides cannot be formed." << std::endl;
//    }
//
//    return 0;
//}


    // Problem 4
//char decimalToCharacter(int decimal) {
//    if (decimal >= 32 && decimal <= 126) {
//        return static_cast<char>(decimal);
//    } else {
//        return '0';
//    }
//}
//
//int main() {
//    int decimal;
//
//    std::cout << "Enter a decimal number: ";
//    std::cin >> decimal;
//
//    char character = decimalToCharacter(decimal);
//
//    if (character == '0') {
//        std::cout << "Wrong" << std::endl;
//    } else {
//        std::cout << "Character: " << character << std::endl;
//    }
//
//    return 0;
//}


    //Problem 5
//#include <cmath>
//
//bool isPrime(int number) {
//    if (number <= 1) {
//        return false;
//    }
//    if (number <= 3) {
//        return true;
//    }
//    if (number % 2 == 0 || number % 3 == 0) {
//        return false;
//    }
//    for (int i = 5; i * i <= number; i += 6) {
//        if (number % i == 0 || number % (i + 2) == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//void displayPrimesBetween(int start, int end) {
//    for (int num = start; num <= end; num++) {
//        if (isPrime(num)) {
//            std::cout << num << " ";
//        }
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    int start, end;
//
//    std::cout << "Enter the start and end numbers: ";
//    std::cin >> start >> end;
//
//    std::cout << "Prime numbers between " << start << " and " << end << " are: ";
//    displayPrimesBetween(start, end);
//
//    return 0;
//}

    //Problem 6
//int main() {
//    const int size = 5; // Size of the array
//    int arr[size];
//    int product = 1; // Initialize product to 1
//
//    // Input: Read elements into the array
//    for (int i = 0; i < size; i++) {
//        std::cout << "Enter element " << i + 1 << ": ";
//        std::cin >> arr[i];
//    }
//
//    // Calculate the product of all elements
//    for (int i = 0; i < size; i++) {
//        product *= arr[i];
//    }
//
//    // Display the product
//    std::cout << "Product of all elements: " << product << std::endl;
//
//    return 0;
//}

//Problem 7
//int main() {
//    const int size = 5; // Size of the array
//    int arr[size];
//
//    // Input: Read elements into the array
//    for (int i = 0; i < size; i++) {
//        std::cout << "Enter element " << i + 1 << ": ";
//        std::cin >> arr[i];
//    }
//
//    // Divide all elements in the array by 2
//    for (int i = 0; i < size; i++) {
//        arr[i] /= 2;
//    }
//
//    // Display the updated array
//    std::cout << "Updated array after dividing by 2: ";
//    for (int i = 0; i < size; i++) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}

    //Problem 8
int main() {
    const int size = 6; // Size of the array
    int arr[size];

    // Input: Read elements into the array
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Raise every second element to the power of 3
    for (int i = 1; i < size; i += 2) {
        arr[i] = arr[i] * arr[i] * arr[i]; // Or you can use the pow() function from cmath for more general cases
    }

    // Display the updated array
    std::cout << "Updated array with every second element raised to the power of 3: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

