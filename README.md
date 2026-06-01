# InfiniteMonkey
C++ implementation of the Infinite Monkey Theorem. This is a toy project I made to learn C++. It has no practical usefulness, 
aside from illustrating how long it may take to obtain a text by randomly typing characters on a keyboard. 

# Compilation
Clone this directory, then load the `InfiniteMonkey.cbp` project file in the Code::Blocks IDE and select "Build". Will automatically compile with MinGW 64-bit G++ with linker flags `-static -static-libgcc -static-libstdc++`. 

# Binaries
Download the executable `InfiniteMonkey.exe` from the latest release (current: v0.1.0).

# Usage
Run `cmd.exe`, go into the executable's directory, then run `InfiniteMonkey.exe -h` to show this greeter: 
```
InfiniteMonkey.exe [--help] [--version] [--input VAR] [--tries VAR] [--charset VAR] [--buffer-size VAR]

Optional arguments:
  -h, --help         shows help message and exits
  -v, --version      prints version information and exits
  -i, --input        [nargs=0..1] [default: "text"]
  -t, --tries        [nargs=0..1] [default: 1]
  -c, --charset      [nargs=0..1] [default: "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz !?:;,."]
  -b, --buffer-size  [nargs=0..1] [default: 50]
```

# Example command and output

```
InfiniteMonkey.exe ^
  --input Hi! ^
  --tries 10 ^
  --charset "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz !?:;,." ^
  --buffer-size 40

------------------------------
I N F I N I T E    M O N K E Y
------------------------------
Text to write:   Hi!
Number of tries: 10
Character set:   ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz !?:;,.

rcwM,C!FXGvP!Q?ZyHmvc!:UQ:xivWm:GJwdmHi! (keystrokes = 292040, time = 30640 ms)
ebxyiZqJXQCCSKzllnCrXKEL W!.XyHWP!PJFHi! (keystrokes = 14024, time = 1258 ms)
HMoh,.Po?vMeIV;kOpruPHlrVOfZn,t?fp,r!Hi! (keystrokes = 174613, time = 18295 ms)
!vqdBUoauoZtqtYl:kRMivWuyfwiuwde!dFGKHi! (keystrokes = 72961, time = 8700 ms)
QuBDXoeJldFuyloY,kPv.!Tc.hmzoYbP?GJOVHi! (keystrokes = 119587, time = 13902 ms)
ccoELl WjJutonb,OxnPTxVWKwk nAcinygkkHi! (keystrokes = 236917, time = 31389 ms)
S qTc!vkDkqtnrcBsrBYMuu!aSxaIJ OjrnDGHi! (keystrokes = 40474, time = 4605 ms)
UixHEX:em;?VQuZoAFVbAQKOWYdiDttXXzuhQHi! (keystrokes = 100171, time = 10093 ms)
z.DZkF!S;RqsqTse;fsdFPeisFINUSy:;rsGYHi! (keystrokes = 270771, time = 35247 ms)
TXYCkthAKXfqLsYLSctFlEYVMoYatnaWtCj?EHi! (keystrokes = 179597, time = 23260 ms)
```

# TODO
 - Make a cross-platform `Makefile` with `cmake` (Windows, MacOS and Linux).
 - I'll try to make the "monkey" run multiples attempts simultaneously on the screen.
