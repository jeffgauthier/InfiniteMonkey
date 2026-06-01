# InfiniteMonkey
C++ implementation of the infinite monkey theorem. This is a toy project to learn C++. It has no parctical usefulness, 
aside from illustrating how long it may take to obtain a word by randomly typing characters on a keyboard. 

# Compilation
Clone this directory, then load the InfiniteMonkey.cbp project in Code::Blocks IDE and select "Build".

# Binaries
Download the latest release or download the executable in bin/Release from this repository.

# Usage
Run CMD.exe, go into the executable's directory, then run `InfiniteMonkey.exe -h` to show this greeter: 
```
InfiniteMonkey.exe [--help] [--version] [--input VAR] [--tries VAR] [--charset VAR] [--buffer-size VAR]

Optional arguments:
  -h, --help         shows help message and exits
  -v, --version      prints version information and exits
  -i, --input        [nargs=0..1] [default: "text"]
  -t, --tries        [nargs=0..1] [default: 1]
  -c, --charset      [nargs=0..1] [default: "abcdefghijklmnopqrstuvwyxz"]
  -b, --buffer-size  [nargs=0..1] [default: 50]
```

# TODO
 - Make a cross-platform Makefile with cmake (Windows, MacOS and Linux).
 - I'll try to make the "monkey" run multiples attempts simultaneously on the screen.
