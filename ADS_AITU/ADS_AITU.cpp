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
    if (l == 0) {
        return arr[0];
    }

    int sum_before = sum_first_n_element_of_array(arr, l - 1);

    return arr[l] + sum_before;
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

    return pow(b, n) + total_before;
}

void return_arr(vector<int> arr, int l) {

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

    for (int i = 0; i < size_of_array; i++) {
        cout << arr[i];
    }
    cout << endl;

    int sum_to_k;
    cin >> sum_to_k;
    cout << sum_first_n_element_of_array(arr, sum_to_k - 1);

    int b, k;
    cout << "Enter b and k: ";
    cin >> b >> k;
    cout << '=' << power_sum(b, k);


}
