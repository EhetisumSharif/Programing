#include <iostream>
#include <cmath>
#include <iomanip>

// Use standard namespace
using namespace std;

// Function to represent the equation x^3 - 4x - 9
double equation(double x) {
    return pow(x, 3) - 4 * x - 9;
}

// Bisection method to find the root of the equation
double bisection(double lower, double upper, double tolerance = 1e-6, int maxIterations = 1000) {
    // Check if the initial interval is valid
    if (equation(lower) * equation(upper) >= 0) {
        cerr << "Invalid interval: f(lower) * f(upper) must be less than 0." << endl;
        return NAN; // Return 'Not a Number' to indicate an error
    }

    double midPoint;
    int iteration = 0;

    // Display the header for the output table
    cout << "Iter" << setw(10) << "Lower" << setw(15) << "Upper" << setw(15) << "Midpoint" << setw(15) << "f(Midpoint)" << endl;
    cout << string(60, '-') << endl; // Print a line of dashes for separation

    // Perform the bisection method
    while ((upper - lower) > tolerance && iteration < maxIterations) {
        midPoint = (lower + upper) / 2.0;
        double fMid = equation(midPoint);

        // Check if the midpoint is a root
        if (fMid == 0) {
            break; // The exact root is found
        } else if (equation(lower) * fMid < 0) {
            upper = midPoint;
        } else {
            lower = midPoint;
        }

        // Print the current iteration details
        cout << fixed << setprecision(6);
        cout << setw(4) << iteration << setw(15) << lower << setw(15) << upper << setw(15) << midPoint << setw(15) << fMid << endl;

        iteration++;
    }

    // Return the approximate root
    return midPoint;
}

int main() {
    // Find the root using the bisection method
    double root = bisection(1, 3);
    cout << "The root of the equation is approximately: " << root << endl;
    return 0;
}

