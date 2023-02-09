# Programming Assignment 1 

My program is fairly small, with just one main function. It does two things:
1. Adds two hex numbers
2. Checks for overflow
</br>
</br>

### Adding Hex Numbers
The first thing I do is loop through the input, which I store in a text file that I named "input.txt".

Then, I used the standard library function `stoul`. It has a parameter that allows you to choose the base stsyem you convert to. I choose base 16, and convert the strings. I add them and store it in both and `unsigned long` and also a `uint32_t`. Finally, I use the hex modifier to output in the correct format.

### Checking for Overflow
Checking for overflow was just a simple conditional statment. Since I stored the data in both an `unisgned long` and a `uint32_t`, I am able to capture the overflow in the `unsigned long` and compare it to the correct output `uint32_t`.
# PA1-219
