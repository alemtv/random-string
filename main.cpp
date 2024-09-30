#include <iostream>
#include <string>
#include <random>
using namespace std;


std::string generateRandomString(int length) {
    const string characters = "abcdefghijklmnopqrstuvwxyz ";
    
    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<> distribution(
        0, characters.size() - 1);

    string random_string;
    for (int i = 0; i < length; ++i) {
        random_string
            += characters[distribution(generator)];
    }

    return random_string;
}


int main() {
    int length = 38;
    string randomStr = generateRandomString(length);
    cout << "Random String: " << randomStr << std::endl;
    return 0;
}
