# credit-card-validator
this program validates a credit card entered by the user

a credit card number is usually a 16-digit number.A valid credit card would satisfy a rule explained below::

start with the rightmost 2nd-digit and multiply it with 2 and skip another digit then mutiply that digit with 2 and keep doing this ...

then subtract 9 from any number larger than 10 
then add them all up to get a number (say X)

and add all the other digits left in the entered credit card number to get a number (say Y) 

then add up X and Y 

if the sum is divisible by 10 then the credit card number is valid


small example ::

4  5  6  7  1  2  3  4   5  6  7  8   9  1  2  9   (entered credit card number)

8    12     2     6     10    14     18     4   (first line)


then add up "first-line" to get 38

then add up all the other numbers to get 42 

adding them we get 80 which is divisible by 10 hence the credit card number is valid ;-)

