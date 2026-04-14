/*Jose Ayestas 
Professor Garth Sorenson
Lab 13
13/04/2026*/

//This program generates 25 random integers and sorts them using Bubble Sort.
//It displays the original list and then shows the list after each pass so you can see how the algorithm works step by step.

#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void fillVector(vector<int>&);
void bubbleSort(vector<int>&);

// Fill vector with random numbers (0–99)
void fillVector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = rand() % 100;
    }
}

// Bubble sort with display
void bubbleSort(vector<int>& v) {
    int size = v.size();

    // Print original 
    cout << "Original: ";
    for (int i = 0; i < size; i++) {
        cout << setw(3) << v[i];
    }
    cout << endl;

    // Bubble sort
    for (int pass = 1; pass < size; pass++) {
        for (int i = 0; i < size - pass; i++) {
            if (v[i] > v[i + 1]) {
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }

        // Print after each pass
        cout << "Pass #" << setw(2) << pass << ": ";
        for (int i = 0; i < size; i++) {
            cout << setw(3) << v[i];
        }
        cout << endl;
    }
}

//Main Demonstrates Bubble Sort by generating 25 random integers
// displaying the original vector, and showing the sorting process step by step.
int main() 
{

    srand(time(0)); // random numbers

    //Greeting and explanation 
    cout << "This program demonstrates Bubble Sort.\n";
    cout << "It will generate 25 random numbers and sort them step by step.\n\n";

    vector<int> numbers(25);

    fillVector(numbers);
    bubbleSort(numbers);

    return 0;
}