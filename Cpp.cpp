C++ Fundamental Data Types
The table below shows the fundamental data types, their meaning, and their sizes (in bytes):

Data Type		Meaning	Size (in Bytes)
int	        Integer		         2 or 4
float		Floating-point	       4
double	    Double Floating-point  8
char	   Character	           1
wchar_t	   Wide Character	       2
bool	  Boolean	               1
void	  Empty	                   0
         
Note: We cannot declare variables of the void type.

C++ Output
      We use the cout object along with the << operator for displaying output.

// prints the string enclosed in double quotes
    cout << "This is C++ Programming";

#include <iostream>
using namespace std;

int main() {
    int age; // declaration
    age=25; // initialization
    int num1 = 70;     // declaration and initialization
    double num2 = 256.783;
    char ch = 'A';

    cout << num1 << endl;    // print integer
    cout << num2 << endl;    // print double
    cout << "character: " << ch << endl;    // print char
    return 0;
}

Operators in C++ can be classified into 6 types:

Arithmetic Operators    +,-,*,/,%
     Note: The % operator can only be used with integers.

Assignment Operators    = ,+=,-=,*=,/=,%=
Operator	Example	Equivalent to
=	a = b;		a = b;
+=	a += b;		a = a + b;
-=	a -= b;		a = a - b;
*=	a *= b;		a = a * b;
/=	a /= b;		a = a / b;
%=	a %= b;		a = a % b;

Relational Operators    <, >, <=, >=,==,!=

3 == 5 is 0
3 != 5 is 1
3 > 5 is 0
3 < 5 is 1
3 >= 5 is 0
3 <= 5 is 1 

Logical Operators        &&, || , !
       logic gates And , or , Not

Bitwise Operators 
  Operator	Description
		&	Bitwise AND Operator
		|	Bitwise OR Operator
		^	Bitwise XOR Operator
		~	Bitwise Complement Operator
		<<	Bitwise Shift Left Operator
		>>	Bitwise Shift Right Operator
Note: Bitwise operators can only be used alongside 
char and int data types.

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int a = 12, b = 25;
       01100
       11001 
       01000      

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    return 0;
}




#include <iostream>

int main() {
    int num1 = 35;
    int num2 = -150; 
    cout << "~(" << num1 << ") = " << (~num1) << endl;
    cout << "~(" << num2 << ") = " << (~num2) << endl;

    return 0;
}




 formula to calculate complement n = -(num+1)
                           
The bitwise complement of 35 = - (35 + 1) = -36
i.e. ~35 = -36
The bitwise complement of -150 = - (-150 + 1) = - (-149) = 149
i.e. ~(-150) = 149


#include <iostream>
int main() {
    // declaring two integer variables
    int num = 212, i;
    // Shift Right Operation
    cout << "Shift Right:" << endl;
    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }
     cout << "\nShift Left:" << endl;
    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
}


right shift formula = num/2
left shift formula  = num*2

       1            1
      10            01
     100            001
    1000            0001
   10000            0001




 

Other Operators
   sizeof
   ?:  
   Ternary Operator in C++
syntax 
  condition ? expression1 : expression2;
 
 string result = (marks >= 40) ? "passed" : "failed";
              marks 50= passed 
                    35= failed 
 // nested ternary operator to find whether
  // number is positive, negative, or zero
result = (number == 0) ? "Zero" : ((number > 0) 
                                  ? "Positive" : "Negative");
There are two ways to add comments to code:
// - Single Line Comments
/* */ -Multi-line Comments


C++ if Statement we have 4 type of if statement
The syntax of the if statement is:
1 simple if()
if (condition) {
  
}

2. simple if else
if (condition) {
  // block of code if condition is true
}
else {
  // block of code if condition is false
}

3  if else if
if (condition1) {
  // code block 1
}
else if (condition2){
  // code block 2
}
else {
  // code block 3
}

4. nested if statement
 // outer if statement
if (condition1) {
     
  if (condition2) {
      cout<<"tata";
      if(condition3){
       cout<<"bye";
      }
  }else{
     cout<<"Hello";
  } cout<<"good morning";
}  

loops in C++
     for loop is usually used when the number of iterations is known
   1 for(initialization; condition; increment/decrement){

   }
 
  loop is usually used when the number of iterations is unknown

   2 while(condition){ 
                //statements    
                    increment/ decrement }
   3 do{
   	    //statements
   	    increment/ decrement
   	   }while(condition)





// program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum


// program to calculate sum of positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation
// negative number -> loop terminate
// numbers above 50 -> skip iteration








break   we use to come outside of loop, it will teminate
        the loop
continue the statement is used to skip the current 
iteration of the loop and transfer the control of 
   the program for the next iteration.

// nested for loop
#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;
    // first loop
    for (int i = 1; i <= 3; i++) {
        // second loop
        for (int j = 1; j <= 3; j++) {
            if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}



// program to calculate sum of positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation
// negative number -> loop terminate
// numbers above 50 -> skip iteration


wap to create a array of n size
left delete = delete left most element from array n 
right delete = delete right most element from array 
The syntax of the switch statement in C++ is:

switch (expression)  {
    case constant1:
        // code to be executed if 
        // expression is equal to constant1;
        break;
    case constant2:
        // code to be executed if
        // expression is equal to constant2;
        break;
        .
    default:
        // code to be executed if
        // expression doesn't match any constant
}


We can do the same thing with the
if...else if ladder. However, 
the syntax of the switch statement is cleaner and much easier to read and write.

C++ Functions
A function is a block of code that performs a specific task.

There are two types of function:
1. Standard Library Functions: Predefined in C++
2. User-defined Function: Created by us

Function Declaration // how to create a function
returnType functionNameChar (parameter1, parameter2,...) {
    // function body   
}
                                     int main(){
void sum(int a,int b, char d){                             sum();
                                      cout<<c; // not work
                                        avg(sum()) // not work     
              
    c=a+b;
    cout<<"sum is "<<c;
}

  sum(20,30,'A');  sum is 50
  sum(20,'A',35);
  sum(70,30);  sum is 100
  sum(55,55);  sum is 110
  sum(15,125);  sum is 140



in functions the parameter
             1. number of parameters should be same in Declaration
              and calling
             2. sequance should be same
             3. data type should be same   




float sum(){                          float f = sum();
    float a=20.00;                      cout<<f;
                                         avg(sum()); // work
    int b=23;                             avg(f); 
    return a;
}


here returnType can be 1. void
                    2. non void 2.1 datatype (int,float,char etc)
                                   2.2 objecttype

// function declaration
void greet() {
    cout << "Hello World";
}                 

what is the returntype of the greet function? 
what is the name of function ?
what are the parameter? 

   based on parameter functions are two types

  1. no parameter in function ---- called non parameterized function
  2. have parameter ----- parameterized function  





Calling a Function
To use the greet() function, we need to call it.
syntax functionName(); // for non parameterized function
       functionName(parameter); // for parameterized function

int main() {
     
    // calling a function means executing function 
    greet(); 

}


Function Parameters
a function can be declared with parameters (arguments). 
A parameter is a value that is passed when declaring a function.

the return statement can be used to return a value from a function.

Function Prototype
 if we want to define a function after the function call, 
 	we need to use the function prototype
 This provides the compiler with information 
 about the function name, returntype and its parameters. 


void add(int a, int b) {
    cout << (a=+b);
}
int main() {    
    int a=10; int b=30;
    add(a,b);
    return 0;
}
// function definition







void add(int a, char b,int c) {
    a=+b;
    cout <<a;
}

void add() {
    int a, int b
    cout << (a=+b);
}


int add(int a, int b) {
    cout << (a=+b);
    return a;
}

  void
  novoid 

Benefits of Using User-Defined Functions
Functions make the code reusable. We can declare them once 
   and use them multiple times.
Functions make the program easier as each small task is divided 
   into a function.
Functions increase readability.

Library Functions
Library functions are the built-in functions in C++ programming.
C++ are sqrt(), abs(), isdigit(), 
we need to include the header file cmath.

function overloading
if we are having more than one function, having same name
but different singnature (either returntype or parameter)
it's called  function overloading


eg:- void myFun(){}       // void ,non parameterized
     int myFun(){}        // non-void, non parameterized 
     void myFun(int a){}  // void , parameterized 
     int myFun(){float a}   // non-void parameterized
     flaot myFun(int a, float b){}  




wap to perform the function overloading 
   2 function should have different returntype (void, char)
   3. fucntions should have  (1,2,3 parameter)













  void myFun(){}
  char myFun(){}
 void myFun(int a){}
 void myFun(int a, char b){}
 void myFun(int a, float b, char c){}






// error compiler will get confused which funtion you want to call
int test(int a) { 
   }
double test(int b){ }   

  test(25);

Note: In C++, many standard library functions are overloaded. 
For example, the sqrt() function can take double, float, int,
 etc. as parameters. 
 This is possible because the sqrt() function is overloaded



we can provide default values for function parameters.

 #include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 3);
int main() {
    int ct = 5; 
    cout << "No argument passed: ";
    display(); 

    cout << "First argument passed: ";
    display('#'); 
    cout << "Both arguments passed: ";
    display('$', ct); 
    return 0;
}
void display(char c, int ct) {
    for(int i = 1; i <= ct; ++i)
    {
        cout << c;
        ct++;
    }
    cout << endl;
}

Note :- Once we provide a default value for a parameter, 
all subsequent parameters must also have default values.















Storage Class
storage class controls two different properties of a variable: 
1lifetime  (determines how long a variable can exist) and 
2.scope (determines which part of the program can access it).

Local variable       defined inside function body
Global variable      defined outside all functions, 
Static local variable  Keyword static is used for specifying a static variable
   its lifetime starts when the function is called and ends only 
   when the program ends.

Advantages of C++ Recursion
It makes our code shorter and cleaner.
Recursion is required in problems concerning data structures 
and advanced algorithms, such as Graph and Tree Traversal.

Disadvantages of C++ Recursion
It takes a lot of stack space compared to an iterative program.
It uses more processor time.
It can be more difficult to debug compared to an equivalent iterative program.

#include <iostream>
using namespace std;
void test();
int main() 
{
    int var = 5;
    test();
    var1 = 9;
    return 0;
}
void test()
{
    int var1;
    var1 = 6;
    cout << var;
}


C++ program to Find Sum of Natural Numbers using Recursion
C++ Program to Check Whether a Number is Prime or Not
C++ Program to Display Prime Numbers Between Two Intervals
Display Prime Numbers When Larger Number is Entered first
display all prime numbers between two intervals by using user-defined function.
C++ Program to Display Prime Numbers Between Two Intervals Using Functions
Check Whether a Number can be Expressed as a Sum of Two Prime Numbers
C++ Program to Check Prime Number By Creating a Function
C++ Program to Convert Binary Number to Decimal and vice-versa
C++ Program to Convert Octal Number to Decimal and vice-versa
C++ Program to Convert Binary Number to Octal and vice-versa










features of oops
class
object
encapsulation
abstraction
polymorphism
inheritance


how to declare a class
syntax 
class ClassName{

}; 
syntax for object creation
  ClassName objectName;

syntax for creating multiple objects 
   ClassName obj1,obj2,... and so on  

how we can assing values to member variable
    syntax
        object.memeberVariableName=value;

by default memeberVariable and memberFunction are private
   we can create object only inside main() function. 

public acess modifier
1. if main() is inside the class   --  accessible 
2. if main() is outside of the class -- accessible

private 
1. if main() is inside the class   --  accessible 
2. if main() is outside of the class -- not accessible
           to access outside of class 
           we need two functions getter() or setter()


contructor
   special function, name is same as the classname
   has no returntype, 
   get execute automatically, 
   no need to call constructor

how to create constructor
syntax
     ClassName(){ } //  

types of constructor
   1. default constructor
   2. non parameterized
   3. parameterized constructor

how to initializate member varialble through constructor
syntax
   ClassName(type name){} // declaring parameterized constructor
eg:- Animal(int a){ age=a;}
how to pass value to constructor
syntax
    ClassName objectName(value); // passing value to constructor
 eg:-   Animal obj(25);


Can we initialize multiple member variable through constructor
yes we can. by passing multiple parameters     


Wap to create a class room 
   take 3 memeberVariable , height, width, depth
   calcualte the volume and area


A constructor is a special type of member  function that
 is called automatically when an object is created.
 Note: If we have not defined a constructor in our class, 
 then the C++ compiler will automatically 
 create a default constructor with an empty code and no parameters.

Note: A constructor is primarily used to initialize objects. 
They are also used to run a default code when an object is created.

#include <iostream>
using namespace std;
class Room {
   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    // create object of Room class
    Room room1;
    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;
    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}



#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:
   
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1(42.5, 30.8, 19.2); // using constructor

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2); // using function

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}




#include <iostream>
using namespace std;
class Wall {
  private:
    double length;
    double height;
  public:
    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2(wall1);
  Wall wall3 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}


 //Array Declaration
dataType arrayName[arraySize];

// syntax to access array elements
array[index];

// declare and initialize and array
int x[6] = {19, 10, 8, 17, 9, 15};
int x[] = {19, 10, 8, 17, 9, 15};
int x[6] = {19, 10, 8};

initialization of two-dimensional array
int test[2][3] = {2, 4, 5, 9, 0, 19};
int  test[2][3] = { {2, 4, 5}, {9, 0, 19}};

initialization of three-dimensional array
int test[2][3][4] = { 
                     { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                     { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
                 };







The syntax for passing an array to a function is:

returnType functionName(dataType arrayName[arraySize]) {
    // code
}

#include <iostream>
using namespace std;

int main () {
  int x = 10;
  int y = 20;
  {
    int x;   
    x = 50;  
    y = 50;  
    cout << "inner block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';
  return 0;
}


// initialization of variables

#include <iostream>
using namespace std;

int main ()
{
  int a=5;               
  int b(3);             
  int c{2};              
  int result;            

  a = a + b;
  result = a - c;
  cout << result;

  return 0;
}

create a class Student
public access
    create a variable int roll no ;
    create an object
1.  assing value in variable through objects
    print value of variable through objects
2.  assing value in variable through function
    print value of variable through function
3.  assing value in variable through constructor
    print value of variable through constructor
 private access
    
C++ Program to Display Prime Numbers Between Two Intervals
Display Prime Numbers When Larger Number is Entered first
display all prime numbers between two intervals by using user-
defined function.
C++ Program to Display Prime Numbers Between Two Intervals
 Using Functions    

 #include <iostream>
using namespace std;
class College{
public:
  int year;
  int noOfTeacher;
    ~College(){  // destructor 
        cout<<"destructor is calling"<<endl;
     } 
    College(){     // default constructor
        cout<<"constructor is calling"<<endl;
    }
    College(int a){  //  constructor with 1 parameter
        year=a;
        cout<<"year is : "<<year;
    }
    College(int a, int b){ //  constructor with 2 parameter
        year=a; noOfTeacher=b;
        cout<<"year is : "<<year;
        cout<<"no of teachers is : "<<noOfTeacher;
    }
};
int main(){
   College c1;        // default constructor is going to call
   College c2(2015);   // constructor with 1 parameter is going to call
   College c3(2015,25);// constructor with 2 parameter is going tocall
   
  return 0;
}




crate a class Account
 declare two variable 1 public, 2 private
                         name        account_no
 create a constructor to take user input
 and a function to print the data

also print the total no of object created 
C++ Program to Check Whether a Number is Prime or Not
C++ Program to Display Prime Numbers Between Two Intervals
Display Prime Numbers When Larger Number is Entered first
display all prime numbers between two intervals by using user-
defined function.
C++ Program to Display Prime Numbers Between Two Intervals Using
 Functions
Check Whether a Number can be Expressed as a Sum of Two Prime 
Numbers
C++ Program to Check Prime Number By Creating a Function
C++ Program to Convert Binary Number to Decimal and vice-versa
C++ Program to Convert Octal Number to Decimal and vice-versa
C++ Program to Convert Binary Number to Octal and vice-versa





Passing Arrays as Function Parameters
The syntax for passing an array to a function is:

returnType functionName(dataType arrayName[arraySize]) {
    // code
}

int display(int marks[5]) {
    
}


// declare and initialize an array
    int marks[5] = {88, 76, 90, 61, 69};
    
    // call display function
    // pass array as argument
    display(marks);

The function parameter int m[5] converts to int* m;. 
This points to the same address pointed by the array marks 

 Passing Multidimensional Array to a Function
void display(int n[][2]) {

}   
display(num);

Note: It is not mandatory to specify the number of rows in the array. However, the number of columns should always be specified. 
This is why we have used int n[][2].





C++ Strings
String is a collection of characters. 
There are two types of strings commonly used in C++ 
programming language:

1. Strings that are objects of string class ( Library string class)
2. C-strings (C-style Strings)
In C programming, the collection of characters is stored in 
the form of arrays.
C-strings are arrays of type char terminated with null character,
 that is, \0 (ASCII value of null character is 0).

 How to define a C-string?
char str[] = "C++\0";

Alternative ways of defining a string
char str[4] = "C++";     
char str[] = {'C','+','+','\0'};
char str[4] = {'C','+','+','\0'};



C++ String to read a line of text

    char str[100];
    cout << "Enter a string: ";
    //cin>>str;
   
  cin.get(str, 100); // use this function when , we want to
                      take a full sentence as input  
  cout<<str;       

string Object
In C++, you can also create a string object for holding strings.
// Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout<<str;







Passing String to a Function

Strings are passed to a function in a similar way 
arrays are passed to a function.    

void display(char s[]){}  // passing c type string, function declare 
void display(string s){}  // passing string object

string str1;       //declaring string object
char str[100];     // declaring c type string 

display(str1);  // passing string object
display(str);   // passing c type string




2. create a c type string taking input from user. 
    use both way 1. to take only word as input
                 2. to take the line as input
     and print it.            

3. create a object string taking input from user. 
    use both way 1. to take only word as input
                 2. to take the line as input
     and print it. 

1. create a program to take input from user into array.
   create a function that take array as parameter.
   to print the array. 



   



How to declare a structure in C++ programming?
The struct keyword defines a structure type 
followed by an identifier (name of the structure).

struct Person
{
    char name[50];
    int age;
    float salary;
};

Person bill; // bill is a variable of person type. 

When a structure is created, no memory is allocated.
When structure variable is defined, 
only then the required memory is allocated by the compiler.
The members of structure variable is accessed
 using a dot (.) operator.

 bill.age = 50; // assing the value 50 to variable

 Structure variables can be passed to a function 
 and returned in a similar way as normal arguments.

 void displayData(Person p){ };   // Function declaration

 displayData(p);  // calling the function 

 Returning structure from function in C++

 Person getData(Person p) {

    return p;
 }; 

 Person p, temp;

 temp = getData(p);


create a structure 'Student'
create variable name, age, course, rollno
create a function and pass the structure print the data of structure


Gender    Years of Service    Qualifications  Salary 
Male       >= 10           Post-Graduate     15000 
           >= 10           Graduate          10000 
           < 10            Post-Graduate    10000 
           < 10            Graduate         7000 
Female >= 10               Post-Graduate    12000 
       >= 10               Graduate        9000 
       < 10                Post-Graduate       10000
       < 10                Graduate            600





Person getData(Person p) {
    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}

pointers are variables that 
store the memory addresses of other variables.

Here is how we can declare pointers.
int *pointVar;

We can also declare pointers in the following way.
int* pointVar; // preferred syntax
int *pointVar, p;
Assigning Addresses to Pointers
int *pointVar, var;
var = 5;
// assign address of var to pointVar pointer
pointVar = &var;
To get the value pointed by a pointer, we use the * operator

// access value pointed by pointVar
cout << *pointVar << endl;   // Output: 5

When * is used with pointers, 
its called the dereference operator. 

Note: In C++, pointVar and *pointVar is completely different. 
We cannot do something like *pointVar = &var;

Changing Value Pointed by Pointers
int var = 5;
int* pointVar;

// assign address of var
pointVar = &var;

// change value at address pointVar
*pointVar = 1;

cout << var << endl; //

Common mistakes when working with pointers
int var, *varPoint;

// Wrong! 
// varPoint is an address but var is not
varPoint = var;

// Wrong!
// &var is an address
// *varPoint is the value stored in &var
*varPoint = &var;

// Correct! 
// varPoint is an address and so is &var
varPoint = &var;

 // Correct!
// both *varPoint and var are values
*varPoint = var;



write a program to create a pointer,
print the address of pointer
print the value of pointer

print the variable, print the value of variable.

Q1. WAP A company insures its drivers in the following cases:
If the driver is married.
If the driver is unmarried, male & above 30 years of age.
If the driver is unmarried, female & above 25 years of age.
In all other cases, the driver is not insured. If the marital 
status, sex and 
age of the driver are the inputs, write a program to determine whether 
the driver should be insured or not.

Q2 Gender    Years of Service    Qualifications  Salary 
Male       >= 10           Post-Graduate     15000 
           >= 10           Graduate          10000 
           < 10            Post-Graduate    10000 
           < 10            Graduate         7000 
Female >= 10               Post-Graduate    12000 
       >= 10                Graduate        9000 
       < 10             Post-Graduate       10000
       < 10             Graduate            600


 
 Pointers can also store the address of cells of an array.
 int *ptr;
int arr[5];
ptr = arr; // store the address of the first element of arr in ptr
Notice that we have used arr instead of &arr[0]. This is because
both are the same

Point to Every Array Elements
int *ptr;
int arr[5];
ptr = arr;
ptr + 1 is equivalent to &arr[1];
ptr + 2 is equivalent to &arr[2];
ptr + 3 is equivalent to &arr[3];
ptr + 4 is equivalent to &arr[4];

// use dereference operator another way of it. 
*ptr == arr[0];
*(ptr + 1) is equivalent to arr[1];
*(ptr + 2) is equivalent to arr[2];
*(ptr + 3) is equivalent to arr[3];
*(ptr + 4) is equivalent to arr[4];

ptr = &arr[2]; then

ptr - 2 is equivalent to &arr[0];
ptr - 1 is equivalent to &arr[1]; 
ptr + 1 is equivalent to &arr[3];
ptr + 2 is equivalent to &arr[4];

WAP to display address of each element of an array using pointer
C++ Program to insert and display data entered by using pointer 
notation.

create a function to print last element of arrays by passing array
create a function to print first element of arrays by passing array



Call by Reference: Using pointers
// function that takes value as parameter
void func1(int numVal) {
   
}
void func2(int &numRef) {
    // code
}
int main() {
int num = 5;
    adress of num = x03564ac;
    func1(num); // pass by value  5

    func2(num); // pass by reference 

    return 0;
}

1. WAP to swap two variable,create a function, 
Passing by reference (without pointers) to function
2. WAP to swap two variable,create a function, 
Passing by reference using pointers to function

// function definition to swap values
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

Memory Management: new and delete

C++ allows us to allocate the memory of a variable or an array in 
run time. 
This is known as dynamic memory allocation.
In C++, we need to deallocate the dynamically allocated memory
manually after we have no use for the variable.
We can allocate and then deallocate memory dynamically
 using the new and delete operators respectively.

int* pointVar;

pointVar = new int;
*pointVar = 45;

because the new operator returns the address of the memory location.
syntax for using the new operator is


pointerVariable = new dataType;
                = new int[10];  // num
                =new int[num];



delete Operator
Once we no longer need to use a variable that we have declared
dynamically, we can deallocate the memory occupied by the 
 variable.
the delete operator is used. It returns the memory to the operating system.
 This is known as memory deallocation.

 The syntax for delete operator is
delete pointerVariable;

int* pointVar;
pointVar = new int; 

*pointVar = 45;
cout << *pointVar; // Output: 45
delete pointVar;

Note: If the program uses a large amount of unwanted memory using 
new, the system may crash because there will be no memory available
for the operating system. 
In this case, the delete operator can help the system from crash.


1. WAp to allocate and deallocate the memory (int, float, char, 
   double) assing and print the values as well

2. C++ Program to store GPA of n number of students and display it
where n is the number of students entered by the user

// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  float* ptr;
    
   ptr = new float[num];
  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }


  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}

C++ new and delete Operator for Objects
#include <iostream>
using namespace std;
class Student {
  private:
    int age;
  public:
    Student() : age(12) {}
    void getAge() {
      cout << "Age = " << age << endl;
    }
};
int main() {
  Student* ptr = new Student();
  

  ptr->getAge();
  delete ptr;
  return 0;
}

Notice the arrow operator ->. This operator is used to access
 class members using pointers.


Inheritance 
is one of the key features of Object-oriented programming in C++. 
It allows us to create a new class (derived class) from an
 existing class (base class).

The derived class inherits the features from the base class and 
can have additional features of its ownnheritance is an is-a 
relationship. We use inheritance only if an is-a relationship
 is present between the two classes.

#include <iostream>
using namespace std;
class Animal {
  public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};
class Dog : public Animal { 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};
int main() {
    Dog dog1;     // creating object of Dog class
    dog1.eat();   // calling function of Animal class (parent)
    dog1.sleep(); 
    dog1.bark();  // calling Dog class function

    return 0;
}

 how to use access modifier with inheritance
class Base {
};
class Derived : public Base {
};

class Parent {
};
class Child : protected Parent {
};

class Super {
.... ... ....
};

class Sub : private Super {
.... ... ....
};


class Base {
  public:
    int x;
  protected:
    int y;
  private:
    int z;
};

class PublicDerived: public Base {
  // x is public , accessible
  // y is protected
  // z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
  // x is protected
  // y is protected
  // z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
  // x is private
  // y is private
  // z is not accessible from PrivateDerived
};



// C++ program to demonstrate the working of public inheritance
#include <iostream>
using namespace std;
class Base {
  private:
    int pvt = 1;
  protected:
    int prot = 2;
  public:
    int pub = 3;

    // function to access private member
    int getPVT() {
      return pvt;
    }
};

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;
  return 0;
}
Function Overriding
// C++ program to demonstrate function overriding
#include <iostream>
using namespace std;
class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};
class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};
int main() {
    Derived derived1;
    derived1.print();
    return 0;
}



Call Overridden Function Using Pointer
// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class











#include <iostream>
using namespace std;

class Base {
   public:
    Base(){}
    void funBase(){}
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    Derived(){}
    void funDerived(){}
    void print() {
        cout << "Derived Function" << endl;
    }
};
class Derived2 : public Derived {
   public:
    Derived2(){}
    void funDerived2(){}
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    Base* ptr = &derived1;
    ptr->print();

    return 0;
}


type of inheritance

  1. simple/ single inheritance
         one parent and one Child
  2. multiple inheritance
         one parent and two or more child
           Father , Child1, Child2
  3. multilevel inheritance
        one parent , one child , one sub child
            Grandfather, Father, Son
  4. hierarchical 
         two parent and one child 
         Father and mother, child
     syntax child: public Father, public mother    
  5. hybrid 
       combination of more than one inheritance
         multiple + multilevel
         multiple + hierarchical
         multilevel + hierarchical
 

                homework - inheritance 
        using public access inheritance
WAp multiple using - constructor,function, function Overriding           
WAp multilevel using - constructor,function, function Overriding           
WAp hierarchical using -constructor,function, function Overriding           

 using private access inheritance
WAp multiple using - constructor,function, function Overriding           
WAp multilevel using - constructor,function, function Overriding           
WAp hierarchical using -constructor,function, function Overriding           

 using protected access inheritance
WAp multiple using - constructor,function, function Overriding           
WAp multilevel using - constructor,function, function Overriding           
WAp hierarchical using -constructor,function, function Overriding           







C++ Program to Add Complex Numbers by Passing Structure toFunction
C++ Program to Calculate Difference Between Two Time Period
C++ Program to Add Two Distances (in inch-feet) System Using 
Structures
C++ Program to Remove all Characters in a String Except Alphabets.
C++ Program to Swap Numbers in Cyclic Order Using Call by 
Reference
C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays
C++ Program to Find Transpose of a Matrix
C++ Program to Multiply two Matrices by Passing Matrix Function
C++ Program to Calculate Standard Deviation
C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers

// C++ program to demonstrate protected members
#include <iostream>
#include <string>
using namespace std;
class Animal {
   private:
    string color;
   protected:
    string type;
   public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
    void setColor(string clr) {
        color = clr;
    }
    string getColor() {
        return color;
    }
};

class Dog : public Animal {
   public:
    void setType(string tp) {
        type = tp;
    }
    void displayInfo(string c) {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};
int main() {
   
    Dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

   
    dog1.bark();
    dog1.setType("mammal");

    dog1.displayInfo(dog1.getColor());

    return 0;
}


Summary: public, private, and protected
public elements can be accessed by all other classes and functions.

private elements cannot be accessed outside the class in 
which they are declared, except by friend classes and functions.

protected elements are just like the private, 
except they can be accessed by derived classes.

Note: By default, class members in C++ are private, 
unless specified otherwise.

access mode with inheritance.
  class members   inheritance
   public         public     public      no Change
   protected                 protected
   private                   private     

   public         protected  protected    change in public
   protected                 protected    change in protected
   private                   private 

   public         private    private   
   protected                 private     make all private
   private                   private 



  members variable are 
          public  ------- access outside of class
          private --- access not allows, 
              getter(), setter() should be in the same class
         
         protected -- used in inheritance only. 
                      getter(), setter() in derived class

Ambiguity in Multiple Inheritance
The most obvious problem with multiple inheritance occurs during 
function overriding.
Suppose, two base classes have a same function which is 
not overridden in derived class.
If you try to call the function using the object of the derived
class, compiler shows error.It's because,
compiler doesn't know which function to call.

 class base1 {
  public:
      void someFunction( ) {....}  
};
class base2 {
    void someFunction( ) {....} 
};     // multiple inheritance 
class derived : public base1, public base2 {};

int main() {
    derived obj;
    obj.someFunction() // Error!  
    obj.base1::someFunction(); 
     obj.base1::someFunction();
}

to solve this problem
we need a special operator scope resolutor operator ::
syntax 
       object.baseclass::functionName();

friend Function in C++
A friend function can access the private and protected data of 
a class. We declare a friend function using the friend keyword 
inside the body of the class.
syntax of friend function.

class className {
    
    friend returnType functionName(parameters);
    
}

// C++ program to demonstrate the working of friend function
#include <iostream>
using namespace std;
class Distance {
    private:
        int meter,feet;
         // friend function
        friend int addFive(Distance);

    public:
        Distance() : meter(0),feet(10) {} // initialization of meter
                                 // using constructor 
};
int addFive(Distance d) {
     d.meter += 5;
    cout<<"distance : feet"<<d.feet;
    return d.meter;

}
int main() {
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}

// Add members of two different classes using friend functions
#include <iostream>
using namespace std;
// forward declaration
class ClassB;

class ClassA {
    public:
       ClassA() : numA(12) {}
        
    private:
        int numA;
          friend int add(ClassA, ClassB);
};
class ClassB {
    public:
        ClassB() : numB(1) {}
        private:
        int numB;
         // friend function declaration
        friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}


friend Class in C++
We can also use a friend Class in C++ using the friend keyword. 

class ClassB;

class ClassA {
   // ClassB is a friend class of ClassA
   friend class ClassB;
   
};

class ClassB {
   
};

When a class is declared a friend class, all the member 
functions of the friend class become friend functions.
Since ClassB is a friend class, we can access all members of 
ClassA from inside ClassB.
However, we cannot access members of ClassB from inside ClassA.
 It is because friend relation in C++ is only granted, not taken.

// C++ program to demonstrate the working of friend class
#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
    private:
        int numA;
        // friend class declaration
        friend class ClassB;
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
};
class ClassB {
    private:
        int numB;
    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
    
    // member function to add numA
    // from ClassA and numB from ClassB
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}

Since ClassB is a friend class, we can create objects of ClassA 
inside of ClassB.




C++ Virtual Functions
In C++, we may not be able to override functions if we use 
a pointer of the base class to point to an object of the 
derived class. Using virtual functions 
in the base class ensures that the function can be overridden 
in these cases.

Thus, virtual functions actually fall under function overriding. 
Virtual functions are runtime polymorphism.
// C++ program to demonstrate the use of virtual functions
#include <iostream>
using namespace std;
class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};
class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};
int main() {
    Derived derived1;
    Base* base1 = &derived1;
    base1->print();

    return 0;
}

Here, we have used a virtual function print() in the Base class
to ensure that it is overridden by the function in the
 Derived class.

C++ Pure Virtual Functions
Pure virtual functions are used

if a function doesn't have any use in the base class
but the function must be implemented by all its derived classes
A pure virtual function doesn't have the function body and 
it must end with = 0.
class Shape {
    public:

      // creating a pure virtual function
      virtual void calculateArea() = 0;
};
Note: The = 0 syntax doesn't mean we are assigning 0 to the function. 
It's just the way we define pure virtual functions.

Abstract Class
A class that contains a pure virtual function is known as an 
abstract class.
We cannot create objects of an abstract class. However, 
we can derive classes from them, and use their data members 
and member functions (except pure virtual functions).



// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;
class Shape {
   protected:
    float dimension;
   public:
    void getDimension() {
        cin >> dimension;
    }
    virtual float calculateArea() = 0;
};
class Triangle : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};
int main() {
    Square square;
    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}




 C++ Class Templates
Templates are powerful features of C++ which allows us to write generic programs.
There are two ways we can implement templates:

Function Templates
Class Templates

Class Template Declaration
A class template starts with the keyword template followed by template parameter(s)
inside <> which is followed by the class declaration.

template <class T>
class className {
  private:
    T var;
    
  public:
    T functionName(T arg);
    
};

T is the template argument which is a placeholder for the data type used, 
and class is a keyword.

Creating a Class Template Object
the following syntax

className<dataType> classObject;

className<int> classObject;
className<float> classObject;
className<string> classObject;

// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>
class Number {
   private:
   
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
It is a good practice to specify the type when declaring objects of class templates.
Otherwise, some compilers might throw an error.





//Error
Number numberInt(7);
Number numberDouble(7.7);


Defining a Class Member Outside the Class Template
//syntax
template <class T>
class ClassName {
    
    // Function prototype
    returnType functionName();
};

// Function definition
template <class T>
returnType ClassName<T>::functionName() {
   
}

// code
template <class T>
class Number {    
    T getnum();
};

template <class T>
T Number<T>::getNum() {
    return num;
}



#include <iostream>
using namespace std;
class base {
int i, j;
public:
void set(int a, int b) { i=a; j=b; }
void show() { cout << i << " " << j << "\n";}
};

class derived : private base {
int k;
public:
derived(int x) { k=x; }
void showk() { cout << k << "\n"; }
};
int main()
{
derived ob(3);
ob.set(1, 2); 
ob.show(); 
return 0;
}


Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For 
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).

Write a program for a matchstick game being played between the 
computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows:
    There are 21 matchsticks.
  The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
  After the person picks, the computer does its picking.
  Whoever is forced to pick up the last matchstick loses the game.

Write a program to receive an integer and find its octal equivalent.
(Hint: To obtain octal equivalent of an integer, divide it continuously 
by 8 till dividend doesn’t become zero, then write the remainders 
obtained in reverse direction.)

Population of a town today is 100000. The population has increased 
steadily at the rate of 10 % per year for last 10 years. Write a 
program to determine the population at the end of each year in the 
last decade.

Write a program to print 24 hours of day with suitable suffixes like 
AM, PM, Noon and Midnight.

Write a program to produce the following output: 
A B C D E F G F E D C B A 
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4  1

      

      
Write a program to find the grace marks for a student using switch. 
The user should enter the class obtained by the student and the 
number of subjects he has failed in. Use the following logic:
   If the student gets first class and the number of subjects he 
failed in is greater than 3, then he does not get any grace. 
Otherwise the grace is of 5 marks per subject.

   If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace. 
Otherwise the grace is of 4 marks per subject.

    If the student gets third class and the number of subjects he 
failed in is greater than 1, then he does not get any grace. 
Otherwise the grace is of 5 marks.


Write a general-purpose function to convert any given year into its 
Roman equivalent. Use these Roman equivalents for decimal 
numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.

A positive integer is entered through the keyboard. Write a function 
to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime 
factors of 35 are 5 and 7.

Write a function that receives 5 integers and returns the sum, 
average and standard deviation of these numbers. Call this function 
from main( ) and print the results in main( ).


 Write a function that receives marks received by a student in 3 
subjects and returns the average and percentage of these marks. 
Call this function from main( ) and print the results in main( ).

Write a function to compute the distance between two points and 
use it to develop another function that will compute the area of the 
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use 
these functions to develop a function which returns a value 1 if the 
point (x, y) lines inside the triangle ABC, otherwise returns a value 
0.

 A positive integer is entered through the keyboard, write a function 
to find the binary equivalent of this number :
(1) Without using recursion
(2) Using recursion




C++ File Handling
File handling in C++ is a mechanism to create and perform read/write operations 
on a file.

We can access various file handling methods in C++ by importing the <fstream> class.
#include<fstream>
<fstream> includes two classes for file handling:
    ifstream - to read from a file.
    ofstream - to create/open and write to a file.

Opening and Closing a File
In order to work with files, we first need to open them. In C++, 
we can open a file using the ofstream and ifstream classes.
For example, here's how we can open a file using ofstream:

std::ofstream my_file("example.txt"); 
Note: We can also use the open() function to open a file. For example,

std::ofstream my_file.open("example.txt");

Closing a File
Once we're done working with a file, we need to close it using the close() function.
my_file.close();

#include <iostream>
#include <fstream>
//using namespace std; 
int main() {
    // opening a text file for writing
   std::ofstream my_file("example.txt");

    // close the file
    my_file.close();

    return 0;
}

Check the File for Errors
In file handling, it's important to ensure the file was opened without any error
 before we can perform any further operations on it.There are three common ways to check files for errors:

1. By Checking the File Object

ofstream my_file("example.txt");
// check if the file has been opened properly
if (!my_file) {

    // print error message
    cout << "Error opening the file." << endl;

    // terminate the main() function
    return 1;
}

This method checks if the file is in an error state by evaluating the file object 
itself.
If the file has been opened successfully, the condition evaluates to true.
If there's an error, it evaluates to false, and you can handle the error accordingly.

2. Using the is_open() Function
The is_open() function returns

true - if the file was opened successfully.
false - if the file failed to open or if it is in a state of error.
For example,

ofstream my_file("example.txt");

if (!my_file.is_open()) {
    cout << "Error opening the file." << endl;
    return 1;
}

3. Using the fail() Function

The fail() function returns

true - if the file failed to open or if it is in a state of error.
false - if the file was opened successfully.

ofstream my_file("example.txt");

if (my_file.fail()) {
    cout << "Error opening the file." << endl;
    return 1;
}

Read From a File
Reading from text files is done by opening the file using the ifstream class. 
For example,

ifstream my_file("example.txt");
Then, we need to read the file line-by-line. To do this, 
we need to loop through each line of the file until all the lines are read, 
i.e., until we reach the end of the file.

We use the eof() function for this purpose, which returns

true - if the file pointer points to the end of the file
false - if the file pointer doesn't point to the end of the file
For example,

ifstream my_file("example.txt");
string line;

while (!my_file.eof()) {

    
    getline(my_file, line);
   
    cout << line << endl;
}

#include <iostream>
#include <fstream>
using namespace std; 

int main() {

    ifstream my_file("example.txt");
    ofstream my_out_file("output.txt");
   
    if(!my_file) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }    
    string line;
    while (!my_file.eof()) {
       
        getline(my_file, line);
        cout << line << endl;
        my_out_file << line << endl;
    }


    my_file.close();
    return 0;
}

Write to a File
We use the ofstream class to write to a file. For example,
ofstream my_file("example.txt");
We can then write to the file by using the 
insertion operator << with the ofstream object my_file. For example,
#include <iostream>
#include <fstream>
using namespace std;
int main() {

    ofstream my_file("example.txt");

    if(!my_file) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }

    // write multiple lines to the file
    my_file << "Line 1" << endl;
    my_file << "Line 2" << endl;
    my_file << "Line 3" << endl;

    
    my_file.close();

    return 0;
}

In file handling, we just replace cout with the file object to write to the file
instead of the console. 

Append to a Text File 
To add/append to the existing content of a file, you need to open the file in append mode.

In C++, you can achieve this by using the ios::app flag when opening the file:

ofstream my_file("example.txt", ios::app);
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // open a text file for appending
    ofstream my_file("example.txt", ios::app);

    // if the file doesn't open successfully, print an error message
    if(!my_file) {
        cout << "Failed to open the file for appending." << endl;
        return 1;  
    }

    // append multiple lines to the file
    my_file << "Line 4" << endl;
    my_file << "Line 5" << endl;
    my_file << "Line 6" << endl;

    // close the file
    my_file.close();

    return 0;
}
File Handling With fstream
Instead of using ifstream to read from a file and ofstream to write to the file, 
we can simply use the fstream class for all file operations.

The constructor for fstream allows you to specify the file name and 
the mode for file operations.
Mode        Description 
ios::in     Opens the file to read (default for ifstream).
ios::out    Opens the file to write (default for ofstream).
ios::app    Opens the file and appends new content to it at the end.
syntax                         
fstream my_file("example.txt", ios::out);

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 1. write to a text file
    fstream my_file("example.txt", ios::app);

    if (my_file) {
        my_file << "This is a test line." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }






    // 2. read from the same file
    string line;
    my_file.open("example.txt", ios::in);
    
    if (my_file) {
        while (!my_file.eof()) {
            getline(my_file, line);
            cout << "Read from file: " << line << endl;
        }
        my_file.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    // 3. append data to the end of the file
    my_file.open("example.txt", ios::app);

    if (my_file) {
        my_file << "This is another test line, appended to the file." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for appending." << endl;
        return 1;
    }

    return 0;
}

Note: Using ifstream and ofstream explicitly signifies the intention of reading 
or writing, respectively, making the code more readable and less prone to errors.
Using fstream for both might lead to ambiguity or unintended operations 
if not handled carefully.

C++ cerr
The cerr object in C++ is used to print error messages. 
It is defined in the iostream header file.
#include <iostream>
using namespace std;
int main() {
  // print error message
  cerr << "Error!!";
  return 0;
}
C++ remove()
The remove() function in C++ deletes a specified file. It is defined in the cstdio
header file.
remove() Syntax
The syntax of the remove() function is:
remove(const char* filename);
filename - pointer to the C-string containing the name of the file along with 
the path to delete
Note: Variables of the C++ string class cannot be used as parameters for remove().
remove() Return Value
The remove() function returns:
zero if the file is successfully deleted
non-zero if error occurs in deletion process

Delete Opened Files with remove()
In case the file to be deleted is opened by a process, the behaviour of remove() 
function is implementation-defined:

POSIX systems - If the name was the last link to a file, 
  but any processes still have the file open, 
  the file will remain in existence until the last running process closes the file.
Windows - The file won't be allowed to be deleted if it remains open by any process.

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  char filename[] = "C:\\Users\\file.txt";
    
  int result = remove(filename);
 
  if (result != 0) {
    
    cerr << "File deletion failed";
  }
  else {
    cout << "File deleted successfully";
  }
    
  return 0;
}


fgetc() prototype
int fgetc(FILE* stream);

The fgetc() function takes a file stream as its argument and returns the 
next character from the given stream as a integer type.
It is defined in <cstdio> header file.

fgetc() Parameters
stream: The file stream to read the character.

fgetc() Return value
On success, the fgetc() function returns the read character.

On failure it returns EOF. 

If the failure is caused due to end of file,it sets the eof indicator. 

If the failure is caused by other errors, it sets the error indicator.
















What is an Algorithm?

Qualities of a Good Algorithm

Input and output should be defined precisely.
Each step in the algorithm should be clear and unambiguous.
Algorithms should be most effective among many different ways to 
solve a problem.
An algorithm shouldn't include computer code. 
Instead, 
the algorithm should be written in such a way that it can be used 
in different programming languages.











Algorithm : Find the largest number among three numbers
Step 1: Start
Step 2: Declare variables a,b and c.
Step 3: Read variables a,b and c.
Step 4: If a > b
           If a > c
              Display a is the largest number.
           Else
              Display c is the largest number.
        Else
           If b > c
              Display b is the largest number.
           Else
              Display c is the greatest number.  
Step 5: Stop




Algorithm 5: Check whether a number is prime or not
Step 1: Start
Step 2: Declare variables n, i, flag.
Step 3: Initialize variables
        flag ← 1
        i ← 2  
Step 4: Read n from the user.
Step 5: Repeat the steps until i=(n/2)
     5.1 If remainder of n÷i equals 0
            flag ← 0
            Go to step 6
     5.2 i ← i+1
Step 6: If flag = 0
           Display n is not prime
        else
           Display n is prime
Step 7: Stop 


Algorithm 6: Find the Fibonacci series till the term less than 1000
Step 1: Start 
Step 2: Declare variables first_term,second_term and temp. 
Step 3: Initialize variables first_term ← 0 second_term ← 1 
Step 4: Display first_term and second_term 
Step 5: Repeat the steps until second_term ≤ 1000 
     5.1: temp ← second_term 
     5.2: second_term ← second_term + first_term 
     5.3: first_term ← temp 
     5.4: Display second_term 
Step 6: Stop



Types of Data Structure
Basically, data structures are divided into two categories:

Linear data structure
Non-linear data structure
when the complexity of the program increases, the linear data structures
 might not be the best choice because of operational complexities.

1. Linear data structure 
        Array Data Structure
        Stack Data Structure 
        Queue Data Structure
        Linked List Data Structure


2. Non linear data structures
        Graph Data Structure
        Trees Data Structure


Why Data Structure?   
    This helps you write, memory and time efficient code.

Asymptotic Notations
Asymptotic notations are the mathematical notations used to describe 
the running time of an algorithm when the input tends towards 
a particular value or a limiting value. 
 
There are mainly three asymptotic notations:
    Big-O notation  worst-case complexity
    Omega notation  the best case complexity
    Theta notation  average case  complexity

Big-O notation represents the upper bound of the running time of an
algorithm. Thus, it gives the worst-case complexity of an algorithm.

Omega notation represents the lower bound of the running time of an algorithm.
 Thus, it provides the best case complexity of an algorithm.

Operations that we perform

     Traversal - access each element of the 
     Insertion - adds a new element to the 
     Deletion - removes the existing elements
     updation - to update the existing elements
     Search - find a element in the 
     Sort - sort the elements of the 

Linear Search
Linear search is a sequential searching algorithm where we start from
one end and check every element of the list until the desired
element is found. It is the simplest searching algorithm.



// Linear Search in C++

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}


Linear Search Complexities
Time Complexity: O(n)
          best case: element at the first location. 
          worst case: element at the last location.
          average case: when element at the middle of array

Space Complexity: O(1)

Linear Search Applications
For searching operations in smaller arrays (<100 items).

array 
Traversal - 
          best case: size of array n=1;
          worst case: size of array n=9999
          average case:size of array n=5000

Insertion
        check the size of array > array; 
         if the size of given array is full, we cannot insert element to 
         array because it is overflow condition. 

         best case: to insert at last location - no shifitng required
         worst case: to insert at first location - 
                      need to shift (n-1) elements

         average case: to insert at the middle of array 
                       need to shift n/2 elements.
     

Deletion -
          best case: to delete the last location element
delete 99 {50,30,44,55,89,56,99}
          {50,30,44,55,89,56}
          worst case: to delete the first location element
                 because we need to shift all the remaining element by one
delete 50         {50,30,44,55,89,56,99}
                  {30,44,55,89,56,99}

          average case: to delete the middle location elements
 delete 55 {50,30,44,55,89,56,99}
           {50,30,44,89,56,99}
         require shifiting of the remaining elements, that comes after given 
         element  
   

updation -
      all will reamin same because,location given
          best case: 
          worst case: 
          average case:
      if element given, not location
           best case: if element at the first location
          worst case: if element at the last location
          average case: if element at the middle location
        

     Search -
     temp 75.
     temp->next=28144
     head= temp;

   15|281610   

               35|28191
                                    55|NULL
         25|28213
  
  30| NULL   
45|281537






15|25|35|45|55->next=NULL;












1. create temp node
    pre node = 25
    nextNode node =35
    pre->next = temp;
    temp->next= nextNode



     temp 65
     55->next= temp;
     tail= temp;




head =NULL
tail = NULL

  NULL-pre-15-next-NULL
  

 head=15;
 tail=15; 

  NULL-pre-15-next-NULL

  NULL-pre-25-next-NULL
 
  25->15->
  pre-15

   25->15
   25<-15
  head 25 












15->25->35->45->NULL

NUll<-15<-25<-35<-45


Node *previous =NULL;
Node *NextNode =NULL;
Node *current = Head;
 
 //Current 15;

 while(Current!=NULL){                                                                                 
       NextNode= current->next;         //NextNode 25  // 35      //45    
       current->next = previous;       //15->NULL     //25->15   //35->25
       previous=current;              //pre 15       //25       //35 
       current=nextNode;             //current 25   // 35      //45

}
      head= pre;

 












// Linked list implementation in C++
#include <iostream>
using namespace std;
// Creating a node
class Node {
   public:
  int data;
  Node* next;

};
void print(Node *head){
    while (head != NULL) {
    cout << head->data;
    head = head->next;
  }

}

int main() {
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;

  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();

  // Assign value values
  one->data = 1;
  two->data = 2;
  three->data = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // print the linked list value
  head = one;
  
  print();


}

Linked List Applications
    Dynamic memory allocation
    Implemented in stack and queue
    In undo functionality of softwares
    Hash tables, Graphs

Insert Elements to a Linked List
You can add elements to either the beginning, 
middle or end of the linked list.

1. Insert at the beginning
            Allocate memory for new node
            Store data
            Change next of new node to point to head
            Change head to point to recently created node

void insertAtHead(Node* &head, int d){
              Node* temp= new Node(d);
              temp->next = head;
              head=temp;

}
2. Insert at the End
            Allocate memory for new node
            Store data
            Traverse to last node
            Change next of last node to recently created node

3. Insert at the Middle
            Allocate memory and store data for new node
            Traverse to node just before the required position of new node
            Change next pointers to include new node in between

Delete from a Linked List
You can delete either from the beginning, end or from a particular position.

1. Delete from beginning
    Point head to the second node
    delete the first node
    head = 15
    15->25->35->45->55->NULL
     head->next; 25;
     head->next->next; 35
     head->next->next->nest; 45

  15->25->35->45->55->NULL
            pre->next = curent->next; NULL
15->25->35->45->NULL


  15->25->35->45->NULL




2. Delete from end
   Traverse to second last element
   Change its next pointer to null
   delete the last node

3. Delete from middle
    Traverse to element before the element to be deleted
    Change next pointers to exclude the node from the chain
    and link the previour node to the deleted elements

    15->25->35->45->55->NULL
    remove 35;
    15->25->45->55->NULL

There are three common types of Linked List.

    Singly Linked List
    Doubly Linked List
                We add a pointer to the previous node in a doubly-linked list. 
                Thus, we can go in either direction: forward or backward.

             linkedlist 
                  int data;
                  linkedlist* next=NULL;
                  linkedlist* previous= NULL;

        NULL= previous<-15->next
         previous<-25->next
         previous<-35->next
         previous<-45->next
         previous<-55->next= NULL

        15->25->35->45->55->NULL
  NULL<-15<-25<-35<-45<-55->NULL

  insertAtPosition(head,4,40,tail);
       4,40 
  
      temp is position-1;

       NodeDl* nodeToinsert = new NodeDl(d);
       nodeToinsert->next=temp->next; 
      temp->next->pre=nodeToinsert;
      temp->next=nodeToinsert;
      nodeToinsert->pre=temp;
   
NULL=pre<-nodeToinsert->next=NULL;

NULL=pre<-40->next=NULL;         temp= 35  
         40->next= 45               40->45
       35->next->pre<-45=40         40<-45
       35->next =40                 35->40
       40->pre =35                  35<-40


                             35->40->45
                             35<-40<-45 



    Circular Linked List
          A circular linked list is a variation of a linked list in 
                which the last element is linked to the first element.



Queue follows the First In First Out (FIFO) rule - the item that goes in first
 is the item that comes out first.
In programming terms, putting items in the queue is called enqueue, 
and removing items from the queue is called dequeue.

Basic Operations of Queue
A queue is an object (an abstract data structure - ADT) that allows the 
following operations:
Enqueue: Add an element to the end of the queue
Dequeue: Remove an element from the front of the queue
IsEmpty: Check if the queue is empty
IsFull: Check if the queue is full
Peek: Get the value of the front of the queue without removing it

Working of Queue
Queue operations work as follows:
two pointers FRONT and REAR
    FRONT track the first element of the queue
    REAR track the last element of the queue
step 1 . initially, set value of FRONT and REAR to -1

Enqueue Operation
step 2. check if the queue is full
for the first element, set the value of FRONT to 0
increase the REAR index by 1
add the new element in the position pointed to by REAR

Dequeue Operation
check if the queue is empty
return the value pointed by FRONT
increase the FRONT index by 1
for the last element, reset the values of FRONT and REAR to -1

// Queue implementation in C++

#include <iostream>
#define SIZE 5

using namespace std;
class Queue {
   private:
  int items[SIZE], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }



  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    return false;
  }

  

  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue is full";
    } else {
      if (front == -1) front = 0;
      rear++;
      items[rear] = element;
      cout << endl
         << "Inserted " << element << endl;
    }
  }




  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      element = items[front];
      if (front >= rear) {
        front = -1;
        rear = -1;
      } /* Q has only one element, so we reset the queue after deleting it. */
      else {
        front++;
      }
      cout << endl
         << "Deleted -> " << element << endl;
      return (element);
    }
  }

  void display() {
    /* Function to display elements of Queue */
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << endl
         << "Front index-> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i <= rear; i++)
        cout << items[i] << "  ";
      cout << endl
         << "Rear index-> " << rear << endl;
    }
  }
};

int main() {
  Queue q;

  //deQueue is not possible on empty queue
  q.deQueue();
  //enQueue 5 elements
  q.enQueue(10);
  q.enQueue(20);
  q.enQueue(30);
  q.enQueue(40);
  q.enQueue(50);
  // 6th element can't be added to because the queue is full
  q.enQueue(6);

  q.display();
  //deQueue removes element entered first i.e. 10
  q.deQueue();

  //Now we have just 4 elements
  q.display();

  return 0;
}

There are four different types of queues:

Simple Queue
Circular Queue
Priority Queue
Double Ended Queue

Circular Queue
In a circular queue, the last element points to the first element making 
a circular link.

Circular queue 
The main advantage of a circular queue over a simple queue is better memory 
utilization. If the last position is full and the first position is empty, 
we can insert an element in the first position. This action is not possible 
in a simple queue.

Priority Queue
A priority queue is a special type of queue in which each element is associated
 with a priority and is served according to its priority. 
 If elements with the same priority occur,
 they are served according to their order in the queue.

Deque (Double Ended Queue)
In a double ended queue, insertion and removal of elements can be performed
 from either from the front or rear. 
Thus, it does not follow the FIFO (First In First Out) rule.






Bubble Sort
Bubble sort is a sorting algorithm that compares two adjacent 
elements and swaps them until they are in the intended order.
Just like the movement of air bubbles in the water that rise up to
the surface, each element of the array move to the end 
in each iteration. Therefore, it is called a bubble sort.

Working of Bubble Sort
Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)
Starting from the first index, compare the first and the second 
elements.If the first element is greater than the second element, 
they are swapped.Now, 
compare the second and the third elements. 
  Swap them if they are not in order.
The above process goes on until the last element
Bubble Sort Complexity
Time Complexity  
Best    O(n)
Worst   O(n2)
Average O(n2)

Space Complexity    O(1)
Stability   Yes

Cycle   Number of Comparisons
1st  (n-1)
2nd  (n-2)
3rd  (n-3)
....... ......
last    1
Hence, the number of comparisons is

(n-1) + (n-2) + (n-3) +.....+ 1 = n(n-1)/2
nearly equals to n2
Hence, Complexity: O(n2)

if we observe the code, bubble sort requires two loops. 
Hence, the complexity is n*n = n2

1. Time Complexities
Worst Case Complexity: O(n2)
If we want to sort in ascending order and the array is in descending 
order then the worst case occurs.

Best Case Complexity: O(n)
If the array is already sorted, then there is no need for sorting.

Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order 
(neither ascending nor descending).

2. Space Complexity

Space complexity is O(1) because an extra variable is used for 
swapping.
In the optimized bubble sort algorithm, two extra variables are used. Hence, the space complexity will be O(2).

Bubble Sort Applications
Bubble sort is used if
complexity does not matter
short and simple code is preferred


// Bubble sort in C++

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

    for (int step = 0; step < size; ++step) 
    {
      
      for (int i = 0; i < size - step; ++i) 
      {
       if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
      
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}


Optimized Bubble Sort Algorithm
In the above algorithm, all the comparisons are made,
even if the array is already sorted.

This increases the execution time.
To solve this, we can introduce an extra variable swapped. 
The value of swapped is set true if there occurs swapping of elements. 
Otherwise, it is set false.

After an iteration, if there is no swapping, the value of swapped 
will be false. This means elements are already sorted and there
is no need to perform further iterations.
This will reduce the execution time and
helps to optimize the bubble sort.

Algorithm for optimized bubble sort is

bubbleSort(array)
  swapped <- false
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
      swapped <- true
end bubbleSort

// Optimized bubble sort in C++

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {
    for (int step = 0; step < (size-1); ++step) {
      int swapped = 0;
        for (int i = 0; i < (size-step-1); ++i) {
               if (array[i] > array[i + 1])
          {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
          }
        }
    
        if (swapped == 0)
        break;
    }
}

// print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}




Given an integer array Arr of size N the task is to find the count of elements
 whose value is greater than all of its prior elements.
 Note :1st element of the array should be considered in the count of the result.
 For example,Arr[]={7,4,8,2,9}As 7 is the first element, 
 it will consider in the result.8 and 9 are also the elements that are greater than
  all of its previous elements.
  Since total of 3 elements is present in the array that meets the condition.
  Hence the output = 3.
  Example 1:
  Input 5 -> Value of N, represents size of Arr
  7-> Value of Arr[0]
  4-> Value of Arr[1]
  8-> Value of Arr[2]
  2-> Value of Arr[3]
  9-> Value of Arr[4]
  Output :3




  15->25->35->45->NULL

  NULL<-15<-25<-35<-45
  head 15
  head->next 25
  head->next->next 35
  head->next->next->next 45
  head->next->next->next->next NULL
   

  head->next->next->next  =head->next->next

A stack is a linear data structure that follows the principle of 
Last In First Out (LIFO). This means the last element inserted 
inside the stack is removed first.
You can think of the stack data structure as the pile of plates on 
top of another.
Put a new plate on top, Remove the top plate And, if you want
the plate at the bottom, you must first remove all the plates on top.
This is exactly how the stack data structure works.

LIFO Principle of Stack
In programming terms, putting an item on top of the stack is called 
push and removing an item is called pop.
Basic Operations of Stack
There are some basic operations that allow us to perform different 
actions on a stack.
Push: Add an element to the top of a stack
Pop: Remove an element from the top of a stack
IsEmpty: Check if the stack is empty
IsFull: Check if the stack is full
Peek: Get the value of the top element without removing it
Working of Stack Data Structure
The operations work as follows:

A pointer called TOP is used to keep track of the top element in the
stack. When initializing the stack, we set its value to -1 so
that we can check if the stack is empty by comparing TOP == -1.

On pushing an element, we increase the value of TOP and place 
the new element in the position pointed to by TOP.

On popping an element, we return the element pointed to by TOP and 
reduce its value.
Before pushing, we check if the stack is already full
Before popping, we check if the stack is already empty

Stack Time Complexity
For the array-based implementation of a stack, the push and 
pop operations take constant time, i.e. O(1).

Applications of Stack Data Structure
Although stack is a simple data structure to implement, 
it is very powerful. The most common uses of a stack are:

To reverse a word - Put all the letters in a stack and pop them out. 
Because of the LIFO order of stack, you will get the letters in 
reverse order.
In compilers - Compilers use the stack to calculate the value of 
expressions like 2 + 4 / 5 * (7 - 9) by converting the expression 
to prefix or postfix form.
In browsers - The back button in a browser saves all the URLs
 you have visited previously in a stack. Each time you visit a 
 new page, it is added on top of the stack. 
 When you press the back button, 
 the current URL is removed from the stack, 
 and the previous URL is accessed.

Algorithm for push:
begin
 if stack is full
    return
 endif
else  
 increment top
 stack[top] assign value
end else
end procedure

Algorithm for pop:
begin
 if stack is empty
    return
 endif
else
 store value of stack[top]
 decrement top
 return value
end else
end procedure

isEmpty:
Returns true if the stack is empty, else false.

Algorithm for isEmpty:

begin
 if top < 1
    return true
 else
    return false
end procedure

Complexity Analysis:
Time Complexity
Operations      Complexity
push()  O(1)
pop()       O(1)
isEmpty()   O(1)
size()  O(1)


/* C++ program to implement basic stack 
operations */


using namespace std; 

#define MAX 10 

class Stack { 
    int top; 

public: 
    int a[MAX]; // Maximum size of Stack 

    Stack() { top = -1; } 
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
}; 
bool Stack::push(int x) 
{ 
    if (top >= (MAX - 1)) { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else { 
        a[++top] = x; 
        cout << x << " pushed into stack\n"; 
        return true; 
    } 
} 
int Stack::pop() 
{ 
    if (top < 0) { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else { 
        int x = a[top--]; 
        return x; 
    } 
} 
int Stack::peek() 
{ 
    if (top < 0) { 
        cout << "Stack is Empty"; 
        return 0; 
    } 
    else { 
        int x = a[top]; 
        return x; 
    } 
} 

bool Stack::isEmpty() 
{ 
    return (top < 0); 
} 

// Driver program to test above functions 
int main() 
{ 
    Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack\n"; 
    
    //print top element of stack after popping 
    cout << "Top element is : " << s.peek() << endl; 
    
    //print all elements in stack : 
    cout <<"Elements present in stack : "; 
    while(!s.isEmpty()) 
    { 
        // print top element in stack 
        cout << s.peek() <<" "; 
        // remove top element in stack 
        s.pop(); 
    } 

    return 0; 
}

singular linked list
update in linked linked
search element by element in linkedlist
delete the more than one node,  get the node range from user
      user will give us starting and ending position. 
      we to delete all the node from the range

doubly linked list
update in linked linked
search element by element in linkedlist
delete the more than one node, get the node range from user
      user will give us starting and ending position. 
      we to delete all the node from the range

write a program to fing given  linked list is circular or not

C++ STL Containers
A container is an object that stores a collection of objects
 of a specific type. For example, 
 if we need to store a list of names, we can use a vector.

C++ STL provides different types of containers based on our 
requirements.

Types of STL Container in C++
In C++, there are generally 3 kinds of STL containers:

Sequential Containers
Associative Containers
Unordered Associative Containers

1. Sequential Containers in C++
In C++, sequential containers allow us to store elements that
can be accessed in sequential order.
Internally, sequential containers are implemented 
as arrays or linked lists data structures.

Types of Sequential Containers


Sequential Containers 
            Array
            Vector
            Deque
            List
            Forward List

Associative Containers
            Set
            Map
            Multiset
            Multimap

Unordered Associative Containers
          Unordered Set
          Unordered Map
          Unordered Multiset
          Unordered Multimap


Array
Vector
Deque
List
Forward List


#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <stack>
using namespace std;

int main() {

  // initialize a vector of int type
  vector<int> numbers = {1, 100, 10, 70, 100};
  set<int> set_numbers = {1, 100, 10, 70, 100};

  // print the vector
  cout << "Numbers are: ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  return 0;
}


C++11 introduced the ranged for loop. This for loop is 
specifically used with collections such as arrays and vectors.

Its syntax is,

for (rangeDeclaration : rangeExpression) {
    // code
}

// initialize an int array
int num[3] = {1, 2, 3};

// use of ranged for loop
for (int var : num) {
    // code 
    cout<<var;
}

Note: The ranged for loop automatically iterates the array 
from its beginning to its end. 
We do not need to specify the number of iterations in the loop.


#include <iostream>
#include <vector>
using namespace std;

int main() {

    // declare and initialize vector  
    vector<int> num_vector = {1, 2, 3, 4, 5};

    // print vector elements  
    for (int n : num_vector) {
        cout << n << " ";
    }
  
    return 0;
}

 Declare Collection inside the Loop
 // define the collection in the loop itself
    for (int n : {1, 2, 3, 4, 5}) {
        cout << n << " ";
    }

    int num[3] = {1, 2, 3};

// copy elements of num to var
for (int var : num) {
    // code
}
However, it's better to write the ranged based for loop like this:
// access memory location of elements of num
for (int &var : num) {
    // code
}
Notice the use of & before var. Here,
int var : num - Copies each element of num to the var variable
 in each iteration. This is not good for computer memory.
int &var : num - Does not copy each element of num to var.
Instead, accesses the elements of num directly from num itself.
This is more efficient.

Note: If we are not modifying the array/vector/collection within
the loop, it is better to use the const keyword in range declaration.

// collection is not modified in the loop
for (const int &var : num) {
    // code
}
2. Associative Containers in C++
In C++, associative containers allow us to store elements in 
sorted order. 
The order doesn't depend upon when the element is inserted.
Internally, they are implemented as binary tree data structures.

Types of Associative Containers

Set
Map
Multiset
Multimap

 we will be using the set class to demonstrate the working of 
 an associative container.
#include <iostream>
#include <set>
using namespace std;

int main() {

  // initialize a set of int type
  set<int> numbers = {1, 100, 10, 70, 100};

  // print the set
  cout << "Numbers are: ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  return 0;
}

3. Unordered Associative Containers in C++
In C++, STL Unordered Associative Containers provide the unsorted
versions of the associative container.

Internally, unordered associative containers are implemented as
hash table data structures.

Types of Unordered Associative Containers

Unordered Set
Unordered Map
Unordered Multiset
Unordered Multimap

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

  // initialize an unordered_set of int type
  unordered_set<int> numbers = {1, 100, 10, 70, 100};

  // print the set
  cout << "Numbers are: ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  return 0;
}

Container Adapters in C++
In C++, Container Adapters take an existing STL container and
provide a restricted interface to make them behave differently.
For example,

A stack is a container adapter that uses the sequential container
deque and provides a restricted interface to support push()
and pop() operations only.

Types of Container Adapters

Stack
Queue
Priority Queue


 C++ Container Adapter (stack)
In this example, we will be using the stack class to demonstrate
 the working of a container adapter.

#include <iostream>
#include <stack>
using namespace std;
int main() {
  // create a stack of ints
  stack<int> numbers;
  // push into stack
  numbers.push(1);
  numbers.push(100);
  numbers.push(10);
  cout << "Numbers are: ";
  // we can access the element by getting the top and popping
  // until the stack is empty
  while(!numbers.empty()) {
    // print top element
    cout << numbers.top() << ", ";
    // pop top element from stack
    numbers.pop();
  }

  return 0;
}

 This is because the container adaptor restricts assigning
values directly to the container.That's why we have used 
the push() operation to insert elements to the stack.

Similarly, we are not allowed to directly iterate through this
container. So, we have used a loop that iterates until 
the stack is empty.
while (!numbers.empty()) {
  cout << numbers.top() << ", ";
  numbers.pop();
}
Here,

numbers.empty() - checks if the stack is empty
numbers.top() - returns the element at the top of the stack
numbers.pop() - removes the top element of the stack



C++ Standard Template Library
In C++, the Standard Template Library (STL) provides a set of
programming tools to implement algorithms and data structures 
like vectors, lists, queues, etc.
STL implements these data structures and algorithms using 
general-purpose classes and functions that have been tested 
rigorously.

C++ STL has 3 major components:

Containers
Iterators
Algorithms
In addition to these, STL also provides several other features,
including function objects, smart pointers, and exception handling 
mechanisms.

Note: STL array is different from the common arrays 
we've been using so far. 
STL array is defined in the std::array class,
which contains many useful functions and algorithms in addition to
the array data structure. These features are not present in 
ordinary arrays.

C++ STL Algorithms
An algorithm is a series of instructions to solve a particular
problem.
In C++, we can use the Standard Template Library to implement
some of the commonly used algorithms. 
These STL components are simply known as the "algorithms library".

Some of the most commonly used algorithms in the C++ Standard 
Template Library are:
Sorting algorithms
Searching algorithms
Copying algorithms
Counting algorithms

C++ List
C++ List is a STL container that stores elements randomly in
unrelated locations. To maintain sequential ordering, every
list element includes two links:

one that points to the previous element
another that points to the next element
In C++, the STL list implements the doubly-linked list data 
structure. As a result,we can iterate both forward and backward.

Create C++ STL List
To create a list, we need to include the list header file in our
 program.

#include<list>
Once we import the header file, 
we can now declare a list using the following syntax:

std::list<Type> list_name = {value1, value2, ...};

// create a list of integer type
std::list<int> numbers = {1, 2, 3, 4, 5};
// create a list of character type
std::list<char> vowels = {'a', 'e', 'i', 'o', 'u'};
Note: We can also include list elements without mentioning 
the assignment operator. For example,

std::list<int> number {1, 2, 3, 4, 5};
     list<int> numbers = {1, 2, 3, 4, 5};

#include <iostream>
#include <list>
using namespace std;
int main() {

    // create the list
    list<int> numbers {1, 2, 3, 4};
  
    // display the elements of the list
    cout << "List Elements: ";
    for(int number : numbers) {
        cout << number <<", ";
    }
    
    return 0;

}

Basic operations on List
C++ STL provides various functions that we can use to perform 
different operations on lists. Let's look at some commonly used list functions to perform the following operations:

Add elements
Access elements
Remove elements

1. Add Elements to a List in C++
We can add values in a list using the following functions:

push_front() - inserts an element to the beginning of the list
push_back() - adds an element to the end of the list

Let's see an example,

#include <iostream>
#include <list>

using namespace std;

int main() {
    
    // create a list
    list<int> numbers = {1, 2, 3};
  
    // display the original list 
    cout << "Initial List: ";
    for(int number: numbers) {
        cout << number << ", ";
    }
  
    // add element at the beginning
    numbers.push_front(0);

    // add element at the end
    numbers.push_back(4);

    // display the modified list
    cout << endl << "Final List: ";
    for(int number : numbers) {
        cout << number << ", ";
    }

  return 0;

}

2. Access List Elements
We can access list elements using the following functions:

front() - returns the first element of the list
back() - returns the last element of the list

#include <iostream>
#include <list>

using namespace std;

int main() {

    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
  
    // display the first element
    cout << "First Element: " << numbers.front() << endl;
  
    // display the last element
    cout << "Last Element: " << numbers.back();
  
    return 0;
    
}

3. Delete List Elements
We can delete list elements using the following functions:

pop_front() - removes the element at the beginning of the list
pop_back() - removes the element at the end of the list
#include <iostream>
#include <list>

using namespace std;

int main() {
    // create a list
    list<int> numbers = {1, 2, 3, 4, 5};
 
    // display the original list 
    cout << "Inital List: ";
    for(int number : numbers) {
        cout << number << ",  ";
    }

    // remove the first element of the list
    numbers.pop_front();

    // remove the last element of the list
    numbers.pop_back();

    // display the modified list 
    cout << endl << "Final List: ";
    for(int number : numbers) {
        cout << number << ", ";
    }

    return 0;
}

Other List Functions in C++
While there are many functions that can be used with lists, 
we will only look at some of the functions in the table below:

Function    Description
reverse()   Reverses the order of the elements.
sort()      Sorts the list elements in a particular order.
unique()    Removes consecutive duplicate elements.
empty()     Checks whether the list is empty.
size()      Returns the number of elements in the list.
clear()     Clears all the values from the list
merge()     Merges two sorted lists.


Access elements using an iterator
We can use iterators to access a list element at 
a specified position.
#include <iostream>
#include <list>

using namespace std;

int main() {

     // create a list
    list<int> numbers = {1, 2, 3, 4, 5};

// create an iterator to point to the first element of the list

    list<int>::iterator itr = numbers.begin();
  
    // increment itr to point to the 2nd element
    ++itr;    
    //display the 2nd element
    cout << "Second Element: " << *itr << endl;
  
    // increment itr to point to the 4th element
    ++itr;
    ++itr;

    // display the 4th element
    cout << "Fourth Element: " << *itr;
  
    return 0;
}

In the above example,

list<int>::iterator - defines an iterator for a list of int type
numbers.begin() - sets the iterator to point to the beginning of 
the list
Notice that we have used ++itr; repeatedly instead of adding an
integer to itr like itr+3;.
This is because iterators are not simple numeric values like 
regular integers. They point to specific memory locations in the
container.

Incrementing an iterator with the ++ operator makes it point to 
the next element in the container.


Create C++ STL Queue
In order to create a queue in C++, we first need to include the 
queue header file.

#include <queue>
Once we import this file, we can create a queue using the 
following syntax:

queue<type> q;

Here, type indicates the data type we want to store in the queue. For example,

// create a queue of integer data type
queue<int> integer_queue;

// create a queue of string data type
queue<string> string_queue;


C++ Queue Methods
In C++, the queue class provides various methods to perform different operations on a queue.

Methods Description
push()  inserts an element at the back of the queue
pop()   removes an element from the front of the queue
front() returns the first element of the queue
back()  returns the last element of the queue
size()  returns the number of elements in the queue
empty() returns true if the queue is empty


#include <iostream>
#include <queue>
using namespace std;
int main() {
  
  queue<string> animals;
  
  animals.push("Cat");
  animals.push("Dog");
  cout << "Queue: ";  
  while(!animals.empty()) {
    cout << animals.front() << ", ";
    animals.pop();
  }

  cout << endl;
 
  return 0;
}

Access Element from the Queue
We can access the elements of a queue using the following methods:

front() - returns the element from the front of the queue
back() - returns the element from the back of the queue

#include <iostream>
#include <queue>
using namespace std;

int main() {

  // create a queue of int
  queue<int> nums;

  // push element into the queue
  nums.push(1);
  nums.push(2);
  nums.push(3);
  
  // get the element at the front
  int front = nums.front();
  cout << "First element: " << front << endl;
  
  // get the element at the back
  int back = nums.back();
  cout << "Last element: " << back << endl;
  
  return 0;
}

C++ Unordered Map
In C++, the STL unordered_map is an unordered associative 
container that provides the functionality of an unordered map 
or dictionary data structure.
In contrast to a regular map, the order of keys in an unordered
map is undefined.
Also, the unordered map is implemented as a hash table data
structure whereas the regular map is a binary search tree 
data structure.

Create C++ STL unordered_map
In order to create an unordered map in C++, we first need 
to include the unordered_map header file.
#include <unordered_map>
Once we import this file, we can create an unordered map
using the following syntax:

unordered_map<key_type, value_type> ump;
Here,

key_type indicates the data type for the key
value_type indicates the data type for the value
For example,

// create an unordered_map with integer key and value
unordered_map<int, int> ump_integer;

// create an unordered_map with string key and int value
unordered_map<string, int> ump_string;


#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  unordered_map<string, int> unordered_map1  {
  {"One", 1},
  {"Two", 2},
  {"Three", 3}
 };  
  cout << "Key - Value" << endl;
  for(const auto& map: unordered_map1) {
    string key = map.first;
    int value = map.second;
    cout << key << " - " << value << endl;
  }
  
  return 0;
}

Copy one unordered map to another.
We can copy one unordered map to another using 
range method initialization.

unordered_map<string, int> unordered_map_1 {
  {"One", 1},
  {"Two", 2},
  {"Three", 3}
};

unordered_map<string, int> 
unordered_map_2(unordered_map_1.begin(), unordered_map_1.end());

C++ Unordered Map Methods
In C++, the unordered_map class provides various methods to perform different operations on an unordered map.

Methods Description
insert()    insert one or more key-value pairs
count() returns 1 if key exists and 0 if not
find()  returns the iterator to the element with the specified key
at()    returns the element at the specified key
size()  returns the number of elements
empty() returns true if the unordered map is empty
erase() removes elements with specified key
clear() removes all elements


Insert Key-Value Pairs to an Unordered Map
We can insert a key-value pair in an unordered map using :

insert() - insert key-value pairs
[] - insert a key and value
For example,

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

  unordered_map<string, int> unordered_map1;
  
  // insert key-value pair {"One", 1}
  unordered_map1["One"] = 10;

  // insert a pair {"Two", 2}
  unordered_map1.insert({"Two", 2});

  // insert two pairs {"Three", 3}, {"Four", 4} 
  unordered_map1.insert({{"Three", 3}, {"Four", 4}});
  
  cout << "Key - Value" << endl;

  // display elements of unordered_map1   
  for(const auto& key_value: unordered_map1) {
    string key = key_value.first;
    int value = key_value.second;
    
    cout << key << " - " << value << endl;
  }
 
  return 0;
}

Access Values of Unordered Maps
We can use the following methods to access the values of the specified key of an unordered map:

at() - returns value for the specified key
[] - returns value for the specified key
For example,

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

  unordered_map<string, string> capital_city {
    {"Nepal", "Kathmandu"},
    {"India", "New Delhi"},
    {"Australia", "Canberra"}
  };
  
  cout << "Capital of Nepal is " << capital_city["Nepal"] << endl;
  cout << "Capital of Australia is ";
  cout << capital_city.at("Australia");
  
  return 0;
}


Remove Elements From an Unordered Map
We can remove the element with the specified key of an unordered
map using the erase() method. For example,

#include <iostream>
#include <unordered_map>
using namespace std;

// function prototype for display_unordered_map()
void display_unordered_map(const unordered_map<int, string> &);

int main() {

  unordered_map<int, string> student {
    {111, "John"},
    {132, "Mark"},
    {143, "Chris"}
  };
  
  cout << "Initial Unordered Map:\n";
  display_unordered_map(student);

  // remove element with key: 143  
  student.erase(143);
  
  cout << "\nFinal Unordered Map: \n";
  display_unordered_map(student);

  return 0;
}

// utility function to print unordered_map elements
void display_unordered_map(const unordered_map<int, string> &umap){

  for(const auto& key_value: umap) {
    int key = key_value.first;
    string value = key_value.second;
    
    cout << key << " - " << value << endl;
  }
}

Check if a Key Exists in the Unordered Map
We can use the following methods to check if the specified key
exists in the unordered map.

find() - returns the iterator to the element if the key is found,
        else returns the end() iterator
count() - returns 1 if the key exists and 0 if not
For example,

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

  unordered_map<int, string> student{
      {111, "John"},
      {132, "Mark"},
      {143, "Chris"}
  };
  // find() returns student.end() if the key is not found 
  if (student.find(143) != student.end()) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }
  // count() returns 0 if the key doesn't exist
  if (student.count(1433)) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }

  return 0;
}

STL
Containers
            Sequential Containers 
                        Array
                        Vector
                        Deque
                        List
                        Forward List

            Associative Containers
                        Set
                        Map
                        Multiset
                        Multimap

            Unordered Associative Containers
                      Unordered Set
                      Unordered Map
                      Unordered Multiset
                      Unordered Multimap
Algorithms
            Sorting algorithms
            Searching algorithms
            Copying algorithms
            Counting algorithms



Selection sort is a sorting algorithm that selects the smallest
element from an unsorted list in each iteration and
places that element at the beginning of the unsorted list.

Selection Sort Algorithm
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort

// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the the position of two elements

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);
}


Selection Sort Complexity
Time Complexity  
Best    O(n2)
Worst   O(n2)
Average O(n2)
Space Complexity    O(1)
Stability   No
Cycle   Number of Comparison
1st (n-1)
2nd (n-2)
3rd (n-3)
... ...
last    1
Number of comparisons: (n - 1) + (n - 2) + (n - 3) + ..... + 1 
= n(n - 1) / 2 nearly equals to n2.

Complexity = O(n2)

Also, we can analyze the complexity by simply observing the number of loops. There are 2 loops so the complexity is n*n = n2.

Time Complexities:

Worst Case Complexity: O(n2)
If we want to sort in ascending order and the array is in descending order then, the worst case occurs.
Best Case Complexity: O(n2)
It occurs when the array is already sorted
Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).
The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum element is not known until the end of the array is not reached.

Space Complexity:

Space complexity is O(1) because an extra variable temp is used.

Selection Sort Applications
The selection sort is used when

a small list is to be sorted
cost of swapping does not matter
checking of all the elements is compulsory
cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)









Tree Data Structure
A tree is a nonlinear hierarchical data structure that consists
of nodes connected by edges.

Why Tree Data Structure?
Other data structures such as arrays, linked list, stack, 
and queue are 
linear data structures that store data sequentially. 
In order to perform any operation in a linear data structure, 
the time complexity increases with the increase in the data size.
 But, it is not acceptable in today's computational world.

Different tree data structures allow quicker and easier 
access to the data
as it is a non-linear data structure.

Tree Terminologies
Node
A node is an entity that contains a key or value and pointers to 
its child nodes.

The last nodes of each path are called leaf nodes or external 
nodes 
that do not contain a link/pointer to child nodes.

The node having at least a child node is called an internal node.

Edge It is the link between any two nodes.

Root
It is the topmost node of a tree.

Height of a Node
The height of a node is the number of edges from the node to 
the deepest leaf 
(ie. the longest path from the node to a leaf node).

Depth of a Node
The depth of a node is the number of edges 
from the root to the node.

Height of a Tree
The height of a Tree is the height of the root node or 
the depth of the deepest node.

Degree of a Node
The degree of a node is the total number of branches of that node.

Forest
A collection of disjoint trees is called a forest.

Tree Applications
Binary Search Trees(BSTs) are used to quickly check
whether an element is present in a set or not.
Heap is a kind of tree that is used for heap sort.

A modified version of a tree called Tries is used in modern routers to store routing information.
Most popular databases use B-Trees and T-Trees, which are variants of the tree structure we learned above to store their data
Compilers use a syntax tree to validate the syntax of every program you write.



Graph Data Stucture
A graph data structure is a collection of nodes that have 
data and are 
connected to other nodes.

Let's try to understand this through an example. 
On facebook, everything is
a node. 
That includes User, Photo, Album, Event, Group, Page, Comment, 
Story, Video, Link, Note...anything that has data is a node.

Every relationship is an edge from one node to another. 
Whether you post a photo, join a group, like a page, etc., 
a new edge is created for that relationship.

All of facebook is then a collection of these nodes and edges. 
This is because facebook uses a graph data structure to 
store its data.

a graph is a data structure (V, E) that consists of
A collection of vertices V
A collection of edges E, represented as ordered pairs of vertices (u,v)

In the graph,

V = {0, 1, 2, 3}
E = {(0,1), (0,2), (0,3), (1,2)}
G = {V, E}

Graph Terminology
Adjacency: A vertex is said to be adjacent to another vertex
if there is an edge connecting them. 
Vertices 2 and 3 are not adjacent because there is 
no edge between them.

Path: A sequence of edges that allows you to go from 
vertex A to vertex B
is called a path. 0-1, 1-2 and 0-2 are paths 
from vertex 0 to vertex 2.

Directed Graph: A graph in which an edge (u,v) doesn't 
necessarily mean that there is an edge (v, u) as well. 

The edges in such a graph are represented by arrows to 
show the direction of the edge.

Graph Representation
Graphs are commonly represented in two ways:

1. Adjacency Matrix
An adjacency matrix is a 2D array of V x V vertices. 
Each row and column represent a vertex.
If the value of any element a[i][j] is 1, 
it represents that there is an edge connecting vertex i and 
vertex j.
The adjacency matrix for the graph we created above is


2. Adjacency List
An adjacency list represents a graph as an array of linked lists.

The index of the array represents a vertex and each element in its linked list represents the other vertices that form an edge with the vertex.

The adjacency list for the graph we made in the first example is as follows:

Graph Operations
The most common graph operations are:

Check if the element is present in the graph
Graph Traversal
Add elements(vertex, edges) to graph
Finding the path from one vertex to another


Depth First Search (DFS)
Depth first Search or Depth first traversal is a recursive 
algorithm for searching all the vertices of 
a graph or tree data structure. 

Traversal means visiting all the nodes of a graph.

Depth First Search Algorithm
A standard DFS implementation puts each vertex of the graph into 
one of two categories:

Visited
Not Visited
The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

The DFS algorithm works as follows:

1.Start by putting any one of the graph's vertices on top of a stack.
2.Take the top item of the stack and add it to the visited list.
3.Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of the stack.
4.Keep repeating steps 2 and 3 until the stack is empty.
Depth First Search Example
Let's see how the Depth First Search algorithm works with an example. We use an undirected graph with 5 vertices.

// DFS algorithm in C++

#include <iostream>
#include <list>
using namespace std;
class Graph {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

   public:
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex);
};
// Initialize graph
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
  visited = new bool[vertices];
}

// Add edges
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_front(dest);
}

// DFS algorithm
void Graph::DFS(int vertex) {
  visited[vertex] = true;
  list<int> adjList = adjLists[vertex];
  cout << vertex << " ";
  list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visited[*i])
      DFS(*i);
}
int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  g.DFS(2);
  return 0;
}


Complexity of Depth First Search
The time complexity of the DFS algorithm is represented in the form of O(V + E), where V is the number of nodes and E is the number of edges.

The space complexity of the algorithm is O(V).

Application of DFS Algorithm
For finding the path
To test if the graph is bipartite
For finding the strongly connected components of a graph
For detecting cycles in a graph


Breadth first search
Traversal means visiting all the nodes of a graph. Breadth First Traversal or Breadth First Search is a recursive algorithm for searching all the vertices of a graph or tree data structure.

BFS algorithm
A standard BFS implementation puts each vertex of the graph into one of two categories:

Visited
Not Visited
The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

The algorithm works as follows:

Start by putting any one of the graph's vertices at the back of a queue.
Take the front item of the queue and add it to the visited list.
Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the back of the queue.
Keep repeating steps 2 and 3 until the queue is empty.
The graph might have two different disconnected parts so to make sure that we cover every vertex, we can also run the BFS algorithm on every node

// BFS algorithm in C++

#include <iostream>
#include <list>

using namespace std;

class Graph {
  int numVertices;
  list<int>* adjLists;
  bool* visited;

   public:
  Graph(int vertices);
  void addEdge(int src, int dest);
  void BFS(int startVertex);
};

// Create a graph with given vertices,
// and maintain an adjacency list
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

// Add edges to the graph
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startVertex) {
  visited = new bool[numVertices];
  for (int i = 0; i < numVertices; i++)
    visited[i] = false;

  list<int> queue;

  visited[startVertex] = true;
  queue.push_back(startVertex);

  list<int>::iterator i;

  while (!queue.empty()) {
    int currVertex = queue.front();
    cout << "Visited " << currVertex << " ";
    queue.pop_front();

    for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
      int adjVertex = *i;
      if (!visited[adjVertex]) {
        visited[adjVertex] = true;
        queue.push_back(adjVertex);
      }
    }
  }
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);

  return 0;
}

BFS Algorithm Complexity
The time complexity of the BFS algorithm is represented in the form of O(V + E), where V is the number of nodes and E is the number of edges.

The space complexity of the algorithm is O(V).

BFS Algorithm Applications
To build index by search index
For GPS navigation
Path finding algorithms
In Ford-Fulkerson algorithm to find maximum flow in a network
Cycle detection in an undirected graph
In minimum spanning tree

Binary Tree
A binary tree is a tree data structure in which each parent node
can have at most two children. 
Each node of a binary tree consists of three items:

data item
address of left child
address of right child

Types of Binary Tree
1. Full Binary Tree It is also known as a proper binary tree.
A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

2. Perfect Binary Tree
A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

// Checking if a binary tree is a full binary tree in C++

#include <iostream>
using namespace std;
struct Node {
  int key;
  struct Node *left, *right;
};
// New node creation
struct Node *newNode(char k) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->key = k;
  node->right = node->left = NULL;
  return node;
}
bool isFullBinaryTree(struct Node *root) {
  // Checking for emptiness
  if (root == NULL)
    return true;
  // Checking for the presence of children
  if (root->left == NULL && root->right == NULL)
    return true;
  if ((root->left) && (root->right))
return (isFullBinaryTree(root->left) && 
              isFullBinaryTree(root->right));
  return false;
}
int main() {
  struct Node *root = NULL;
  root = newNode(1);                                1
  root->left = newNode(2);                        2   3
  root->right = newNode(3);
  root->left->left = newNode(4);                4  5
  root->left->right = newNode(5);
  root->left->right->left = newNode(6);           6  7
  root->left->right->right = newNode(7);

  if (isFullBinaryTree(root))
    cout << "The tree is a full binary tree\n";
  else
    cout << "The tree is not a full binary tree\n";
}



Binary Search Tree(BST)
Binary search tree is a data structure that quickly allows 
us to maintain a sorted list of numbers.

It is called a binary tree because each tree node has a maximum 
of two children.
It is called a search tree because it can be used to 
search for the presence of a number in O(log(n)) time.
The properties that separate a binary search tree from
a regular binary tree is

All nodes of left subtree are less than the root node
All nodes of right subtree are more than the root node
Both subtrees of each node are also BSTs 
i.e. they have the above two properties

Search Operation
The algorithm depends on the property of BST that
if each left subtree has values below root and
   each right subtree has values above the root.

If the value is below the root, we can say for sure that 
the value is not in the right subtree; 
we need to only search in the left subtree 
and if the value is above the root, 
we can say for sure that the value is not in the left subtree; we need to only search in the right subtree.

Algorithm:

If root == NULL 
    return NULL;
If number == root->data 
    return root->data;
If number < root->data 
    return search(root->left)
If number > root->data 
    return search(root->right)


Insert Operation
Inserting a value in the correct position is similar to searching because we try to maintain the rule that the left subtree is lesser than root and the right subtree is larger than root.

We keep going to either right subtree or left subtree depending on the value and when we reach a point left or right subtree is null, we put the new node there.

Algorithm:

If node == NULL 
    return createNode(data)
if (data < node->data)
    node->left  = insert(node->left, data);
else if (data > node->data)
    node->right = insert(node->right, data);  
return node;



// Binary Search Tree operations in C++

#include <iostream>
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);
    // Traverse root
    cout << root->key << " -> ";
    // Traverse right
    inorder(root->right);
  }
}
// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);
  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

// Driver code
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Inorder traversal: ";
  inorder(root);

  cout << "\nAfter deleting 10\n";
  root = deleteNode(root, 10);
  cout << "Inorder traversal: ";
  inorder(root);
}    