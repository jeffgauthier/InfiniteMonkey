#ifndef MONKEY_H
#define MONKEY_H

#include <string>
#include <cstdlib>
#include <chrono>

class Monkey {

private:

    // Get this poor monkey a little typewriter = a string containing the character set.
    // It's private. it's HIS typewriter. No reason to give it to anyone else.
    std::string typewriter;

public:

    // Our monkey's little assignment. It's public cuz we already know it.
    std::string text;

    // Class constructor to help us hire a monkey in main.cpp
    Monkey(std::string x) {
        text = x;
    }

    // Setter function to define his keyboard character set.
    void set_keyboard(std::string keys) {
        typewriter = keys;
    }

    // the crux of the infinite monkey theorem-----------------------------------------------------------------
    void type(int bsize) {

        // start timer here
        std::chrono::steady_clock::time_point tick = std::chrono::steady_clock::now();

        // Give an empty sheet to our monkey.
        std::string bamboozle = "";

        // Instead of computing our monkey's bamboozle size,
        // we will initialize a counter and increment it with each "keystroke".
        int counter = 0;

        // Let the monkeyshines begin!
        while (1) {

            // Our monkey has typed a random key on his keyboard.
            bamboozle += typewriter[rand() % size(typewriter)];

            // Increment keystroke counter by one.
            ++counter;

            // declare buffer
            std::string buffer;

            // Show what our monkey's been up to on the screen.
            // If more than 50 keys have been pressed, just show the last 50 ones.
            if (counter > bsize) {
                buffer = bamboozle.substr(counter-bsize, bsize);
                std::cout << "\r" << buffer << " (keystrokes = " << counter;
            }
            // Otherwise, justify to the right by adding spaces (50 - number of keys pressed).
            else {
                int nsp = bsize - counter;
                buffer = std::string(nsp, '.') + bamboozle;
                std::cout << "\r" << buffer << " (keystrokes = " << counter;
            }

            // ...as long as result of .find() is "string not found"
            // to avoid searching the whole bamboozle, we'll check in the buffer
            if (buffer.find(text) != string::npos) break;

        }

        // Read the clock.
        std::chrono::steady_clock::time_point tock = std::chrono::steady_clock::now();

        // Last report from our brave monkey
        std::cout << ", time = " << std::chrono::duration_cast<std::chrono::milliseconds>(tock - tick).count() << " ms)\n";
    } //-------------------------------------------------------------------------------------------------------

};

#endif // MONKEY_H
