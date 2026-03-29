#include <iostream>
#include <vector>
using namespace std;

int square_sum(int n)
{
    // Base case
    if (n == 1) {
        cout << 1;
        return 1;
    }

    int sum = square_sum(n - 1);
    cout << '+' << n << "^2";
    return sum + n * n;
}   // We call our function n times, so the Big O = O(n)

int sum_first_n_element_of_array(const vector<int>& arr, int l)
{   
    // Base case
    if (l == 0) {
        return arr[0];
    }

    int sum_before = sum_first_n_element_of_array(arr, l - 1);

    return arr[l] + sum_before;
    // Time complexity 0(n)
}

int power_sum(int b, int n)
{
    // Base case
    if (n == 0) {
        cout << 1;
        return 1;
    }

    int total_before = power_sum(b, n - 1);

    cout << "+" << b << "^" << n;

    return (int)pow(b, n) + total_before;
    // Time complexity O(n)
}

void return_sequence(int n) {
    if (n == 0) {
        return;
    }

    int x;
    cin >> x;
    return_sequence(n - 1);
    cout << x << " ";
    // Time complexity O(n)
}

int main()
{
    //First Task
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << '=' << square_sum(n) << endl;

    //Second Task
    int size_of_array;
    cout << "Give size of the array: ";
    cin >> size_of_array;
    vector<int> arr(size_of_array);

    for (int i = 0; i < size_of_array; i++) {
        cin >> arr[i];
    }

    cout << "Enter for which index we should add: ";
    cin >> n;
    cout << sum_first_n_element_of_array(arr, n) << endl;

    
	// Third Task
    int b, k;
    cout << "Enter b and k: ";
    cin >> b >> k;
    cout << '=' << power_sum(b, k) << endl;

    // Fourth task
    cout << "Enter the sequence size: ";
    cin >> n;
    return_sequence(n);
    cout << endl;
}
