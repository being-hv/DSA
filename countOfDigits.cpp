#include <iostream>

//count of digits in a number
// int main() {
//     int n, count = 0;
//     std::cout << "Enter a number : ";
//     std::cin >> n;

//     if (n == 0) {
//         count = 1; 
//     } else {
//         while (n != 0) {
//             n /= 10; 
//             count++; 
//         }
//     }

//     std::cout << "Count of digits : " << count << std::endl;
//     return 0;
// }

//count the digits in a number for n test cases
int main () {
    int t;
    std::cout << "Enter number of test cases: ";
    std::cin >> t;

    while (t!=0) {
        int n, count = 0;
        std::cout << "Enter a number: ";
        std::cin >> n;

        if (n == 0) {
            count = 1; 
        } else {
            while (n != 0) {
                n /= 10; 
                count++; 
            }
        }

        std::cout << "Count of digits: " << count << std::endl;
        t--;
    }
    std::cout<<" "<< std::endl;
    std::cout << "All test cases completed." << std::endl;
    return 0;
}