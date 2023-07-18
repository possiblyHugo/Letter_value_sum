# Letter Value Sum

This is a C++ project that calculates the sum of the values of lowercase letters in a given string. Each lowercase letter is assigned a value from 1 for 'a' to 26 for 'z'. The program takes a string as input and outputs the sum of the values of the letters in the string.

## Challenge Description

The challenge is to implement a function `lettersum` that takes a string of lowercase letters and returns the sum of the values of the letters in the string. The value of a letter is determined by its position in the English alphabet, where 'a' has a value of 1, 'b' has a value of 2, and so on, up to 'z' with a value of 26.

## Examples

Here are some examples of the expected input and output:

- `lettersum("")` returns `0`
- `lettersum("a")` returns `1`
- `lettersum("z")` returns `26`
- `lettersum("cab")` returns `6`
- `lettersum("excellent")` returns `100`
- `lettersum("microspectrophotometries")` returns `317`

## Getting Started

### Prerequisites

To compile and run this project, you need to have a C++ compiler installed on your system.

### Compilation

You can compile the project using the following command:

```shell
g++ -o lettersum main.cpp
```

## Usage 

After compiling, you can run the program with the following command:

```shell
./lettersum
```

## Implementation Details
The lettersum function in the lettersum.cpp file implements the logic to calculate the sum of the values of the letters in the input string. It iterates over each character in the string, calculates the value of each letter based on its position in the alphabet, and accumulates the sum. The final sum is then returned as the result.

## License
This project is licensed under the [MIT License](https://opensource.org/license/mit/). Feel free to use, modify, and distribute the code for personal or commercial purposes.

## Acknowledgments
This project was inspired by [Challenge #399 [Easy] Letter value sum](https://www.reddit.com/r/dailyprogrammer/comments/onfehl/20210719_challenge_399_easy_letter_value_sum/) on Reddit's r/dailyprogrammer.