# CPP02: Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form

# Exercise 00: My First Class in Orthodox Canonical Form

You think you know integers and floating-point numbers. How cute.

Until today, every number you used in your code was basically either an integer or a
floating-point number, or any of their variants (short, char, long, double, and so forth).
After reading the article above, it’s safe to assume that integers and floating-point numbers
have opposite caracteristics.  

But today, things will change. You are going to discover a new and awesome number
type: **fixed-point numbers!** Forever missing from the scalar types of most languages,
fixed-point numbers offer a valuable balance between performance, accuracy, range and
precision. That explains why fixed-point numbers are particularly applicable to computer
graphics, sound processing or scientific programming, just to name a few.  

Create a class in Orthodox Canonical Form that represents a fixed-point number:
* Private members:
 1. An integer to store the fixed-point number value.
 2. A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.
* Public members:
1. A default constructor that initializes the fixed-point number value to 0. 
2. A copy constructor. 
3. A copy assignment operator overload. 
4. A destructor. 
5. A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value. 
6. A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.

# Exercise 01:  Towards a more useful fixed-point number class

The previous exercise was a good start but our class is pretty useless. It can only
represent the value 0.0.

Add the following public constructors and public member functions to your class:
* A constructor that takes a **constant integer** as a parameter.  
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
* A constructor that takes a **constant floating-point number** as a parameter.  
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
* A member function ***float toFloat( void ) const***;  
that converts the fixed-point value to a floating-point value.
* A member function ***int toInt( void ) const***;  
that converts the fixed-point value to an integer value.

And add the following function to the Fixed class files:

* An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.

# Exercise 02: Now we’re talking
Add public member functions to your class to overload the following operators:

- The 6 comparison operators: >, <, >=, <=, == and !=.
- The 4 arithmetic operators: +, -, *, and /.
- The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable  such as 1 +  > 1.

Add these four public overloaded member functions to your class:

- A static member function min that takes as parameters two references on fixed-point
numbers, and returns a reference to the smallest one.
- A static member function min that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the smallest one.
- A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
- A static member function max that takes as parameters two references to constant
fixed-point numbers, and returns a reference to the greatest one.seem completely new. Although there are some little differences, this is another syntax for something you already do: address manipulation.

# Exercise 03: BSP

To conclude, implement the following function in the appropriate file:

***bool bsp( Point const a, Point const b, Point const c, Point const point);***

- a, b, c: The vertices of our beloved triangle.
- point: The point to check.
- Returns: True if the point is inside the triangle. False otherwise.  
Thus, if the point is a vertex or on edge, it will return False.

Implement and turn in your own tests to ensure that your class behaves as expected.