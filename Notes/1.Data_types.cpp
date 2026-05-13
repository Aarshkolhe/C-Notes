/*

[+]Data types
Data types specifies the type and size of the data a variable can store


[+]Types of Data type

1. Primitive(Build-in Data types)
->These are predefined by C++ and represnt basic values

Sr Data type       Keyword     size     range/description
1. Integer         int         4bytes  -2,147,483,648 to 2,147,483,647 approx -2billion to +2billion
2. Character       char        1byte   A-Z and a-z with special symbols
3. Boolean         bool        1byte   true or false(1 or 0)
4. Floating point  float       4byte   it can have 7 digits decimal
5. Void            void        0byte   it has no values

Now there are some variations you can use with these data types:-

a.Integers

Sr   Integer Types            typical size   range of values
1.   short int                2byte          -32,768 to 32,767
2.   unsigned short int       2byte          0 to 65,535
3.   unsigned int             4byte          0 to 2,294,967,295
4.   long int                 4 or 8bytes    same as int or long int
5.   unsigned long int        4 or 8bytes    same as unsigned int or long long
6.   long long int            8bytes         -9.22*10^18 to 9.22*10^18
7.   unsigned long long int   8bytes          0 to 1.84*10^19


b.Character

Sr   Integer Types            typical size   range of values
1.   char                     1byte           -128 to 127
2.   signed char              1byte           -128 to 127
3.   unsigned char            1byte            0 to 255
4.   wchar_t                  2 or 4 bytes     0 to 65,535 or 0 to 4,294,967,295
5.   char16_t                 2byte            0 to 65,535(UTF-16 character)
6.   char32_t                 4byte            0 to 4,294,967,295(UTF-32 character)

c.floating-point 

Sr   Integer Types            typical size   range of values
1.   float                    4byte          -7 decimal digit
2.   double                   8bytes         -15 decimal digit
3.   long double              12 or 16bytes  -18 to 33 decimal digits


2. Derived Data type 
Derived data type are constructed from built in primitive types(int,char,float,etc)
to group multiple values or manage memeory addresses directly.

a.Arrays
An array in C++ is a dervied data type that stores a fixed size,sequential collection
of elements of the same data type under a single variable name. Instead od declaring
individual variables like var1, var2, var3 ,you declare a single array variables

b.Pointers
Pointers in C++ is a derived data type that stores the hardware memory address of 
another variable rather than a direct value.
Every variable you create is stored at a specific numeric address in your computer's
RAM. Pointer allow you to save, pass, and manipulate these addrresses directly.

c.References
A refrence in C++ is a derived data type that acts as an alias(A permanent alternative
name or nickname) for an exisiting variable.
Once a reference is initialized,it shares exact same memory location as the original
variable. Anything you do to the reference happens directly to the original variable.

d.Function
fuction is a block of code that is used to execute a block of code multiple times
with different arguments.
ex:- int function1(argument1,argument2)


3. User defined

*/