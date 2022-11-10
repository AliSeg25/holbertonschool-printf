## Project _printf from Holberton School Paris

_printf is the first collaborative project

## Description
The _printf function sends a formatted string to the standard output.

#### Prototype
```
int _printf(const char * format);
```

format represents, as its name suggests, what the output will be made of
(integer, string...). Its principle is as follows: each time there is a %,
_printf looks at the letter following this % and writes the corresponding
variable in the parameters.

The ... means that it is a variadic function, which can take a variable
number of parameters.

## Project
For this project we have treated the following cases:

* c single character
* s string
* % character
* d integer
* i integer

## Requirements

* Compiled command: ``` gcc -Wall -Werror -Wextra -pedantic -std=gnu89
-Wno-format *.c ```
* Header file should be included guarded
* Prototypes should be included in header file
* Not more than 5 functions per file

## Examples
**%c**
```
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
```
###### Output
```
Character:[H]
Character:[H]
```
**%s**
```
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
```
###### Output
```
String:[I am a string !]
String:[I am a string !]
```
**%%**
```
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");

```
###### Output
```
Percent:[%]
Percent:[%]
```
**%d**
```
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
```
###### Output
```
Negative:[-762534]
Negative:[-762534]
```
**%d and % i**
```
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
```
###### Output
```
Length:[39, 39]
Length:[39, 39]
```
## Return value
If succesful the total number of characters written is returned.On
failure a nevative number is returned


## Authors
Ali Segueg and Claudia Bura
