#include <iostream>
using namespace std;

int main() {
    
    // Example 1
    int check = 25;
    int nums[]{ 40, 20, 30, 70, 100 };
    int result = 0;

    if (nums[0] > check) {
        result = nums[0] + nums[3];
        cout << result << endl;
    }
    else {
        cout << "Error" << endl;
    }

    if (nums[1] > check) {
        result = nums[1] + nums[3];
        cout << result << endl;
    }
    else {
        cout << "Error" << endl;
    }

    if (nums[2] > check) {
        result = nums[2] + nums[3];
        cout << result << endl;
    }
    else {
        cout << "Error" << endl;
    }






    return 0;
}



