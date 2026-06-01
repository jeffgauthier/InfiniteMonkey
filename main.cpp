#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#include "include/argparse.hpp"
#include "include/monkey.hpp"

int main(int argc, char* argv[]) {

    // declare argument variables
    string input, output, charset;
    int tries, wsize;

    // define default charset
    string charset_default = "abcdefghijklmnopqrstuvwyxz";

    // argument parser -----------------------------------------------------------------------
    argparse::ArgumentParser program("infinite-monkey");
    program.add_argument("-i", "--input").default_value("text").store_into(input);
    program.add_argument("-t", "--tries").default_value(1).store_into(tries);
    program.add_argument("-c", "--charset").default_value(charset_default).store_into(charset);
    program.add_argument("-b", "--buffer-size").default_value(50).store_into(wsize);

    try {
        program.parse_args(argc, argv);
    }
    catch (const std::exception& err) {
        std::cerr << err.what() << std::endl;
        std::cerr << program;
        return 1;
    } //---------------------------------------------------------------------------------------

    // check that input is in charset
    for (char i: input) {
        if (charset.find(i) != string::npos) {
            continue;
        } else {
            cout << "\n[ERROR] Input contains chars not on our monkey's keyboard!\n";
            cout << "        Use -c to change character set\n";
            cout << "        ( Current: " << charset << " )\n\n";
            std::cerr << program;
            std::exit(1);
        }
    }

    // check that input is smaller or equal to search window
    if (input.size() > wsize) {
        cout << "\n[ERROR] Input is greater than the lookup space for our input!\n";
        cout << "        Use -b to change buffer size\n";
        cout << "        ( Current: " << wsize << " )\n\n";
        std::cerr << program;
        std::exit(1);

    }

    cout << "\n------------------------------\n";
    cout << "I N F I N I T E    M O N K E Y\n";
    cout << "------------------------------\n";
    cout << "Text to write:   " << input   << "\n";
    cout << "Number of tries: " << tries   << "\n";
    cout << "Character set:   " << charset << "\n";
    cout << "\n";

    // Change RNG each time the program runs
    srand(time(0));

    // hire a monkey
    Monkey my_monkey(input);

    my_monkey.set_keyboard(charset);

    for (int i = 0; i < tries ; i++) {

        // make it type endlessly
        my_monkey.type(wsize);

    }

    return 0;

}
