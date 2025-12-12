# CS50 PROBLEM SET 2 - Caesar

This repository contains my solution for the Caesar cipher problem from Harvard's CS50 Problem Set 2. The program encrypts plaintext using a rotation-based substitution cipher, shifting each alphabetic character by a user-provided key.

## Files
- `caesar.c` : Main solution file implementing the Caesar encryption algorithm.

## Description
The program takes a single command-line argument — a numeric key — and encrypts the user’s plaintext by shifting each letter by that key (wrapping around the alphabet when necessary). Non-alphabetic characters remain unchanged.

### Features
- Validates that exactly **one** command-line argument is provided.
- Ensures the key contains **only digits**.
- Preserves case (uppercase stays uppercase, lowercase stays lowercase).
- Leaves non-alphabetical characters unchanged.
- Implements shifting using modular arithmetic.

### Example Run
$ ./caesar 13 

Plaintext: HELLO world! 

ciphertext: URYYB jbeyq! 

## How to Run
Compile and run using GCC with the CS50 library:

```bash
gcc -o caesar caesar.c -lcs50
./caesar 4

