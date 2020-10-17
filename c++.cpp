// https://www.youtube.com/watch?v=yGB9jhsEsr8&t=1786s

//============================ Basic structure of c++==========================

/*
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
*/


# include <iostream>
using namespace std;
// ====================================single line comment=================================.

/*
=======================================multiline comment=======================================
*/

int main(){
    //=============================for next line use (<<  end1 )or cout<<"himanshu \n";=======================
    /*
      cout<<"himanshu "<<  endl;
 //   cout<<"himanshu \n";
      cout<<"oshank"<<  endl;
    */
     
    // ====================== variable declaration===================.

     /*int a,b,c;
     short sa=3;
     cout<<sa << end1;
    */


//==============================variable/data type=====================================

// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false

/*


int myNum = 5;               // Integer (whole number without decimals)
cout<< myNum <<  endl;

double myFloatNum = 5.99;    // Floating point number (with decimals)
cout<<myFloatNum <<  endl;

char myLetter = 'D';         // Character
cout<< myLetter<<  endl;

string myText = "Hello";     // String (text)
cout<< myText<<  endl;

bool myBoolean = true;       // Boolean (true or false)
bool myBoolean2 = false; 

cout<< myBoolean<<  endl;  
cout<< myBoolean2<<  endl;


*/


    //=========================== Camel case notation.  ====================================

   /*
   int marksInMATH=43;
    cout<< "The marks of student in math is "<< marksInMATH<< end1;
   */

//==========================constant variable==================

/*
  const int myNum = 15; // myNum will always be 15
//   int myNum = 10;   // error: assignment of read-only variable 'myNum'
  cout << myNum<<  endl;

*/

// ========================================C++ User Input=========================================
// cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
// cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

 /*

 int a, b;

 cout<<"enter first number"<<endl;

 cin>>a; //take input from user.

 cout<<"enter second number"<<endl;

 cin>>b; //take input from user.

 cout<<"a+b is "<<a + b<<endl;

 cout<<"a-b is "<<a - b<<endl;

 cout<<"a*b is "<<a * b<<endl;

 cout<<"a/b is "<<(float)a / b<<endl; //if you wont divide with reminder the change one value into float out of two integer.

 */

// ================================Declare Many Variables=================================
/*
int x = 5, y = 6, z = 50;
cout << x + y + z <<endl;
cout << x - y + z <<end1;
*/


// ===========The general rules for constructing names for variables (unique identifiers) are:==========

// Names can contain letters, digits and underscores
// Names must begin with a letter or an underscore (_)
// Names are case sensitive (myVar and myvar are different variables)
// Names cannot contain whitespaces or special characters like !, #, %, etc.
// Reserved words (like C++ keywords, such as int) cannot be used as names

// =================================Creating a Simple Calculator=======================================
/*
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
*/
// and
/*
   int a, b;

   cout<<"enter first number"<<endl;

   cin>>a; //take input from user.

   cout<<"enter second number"<<endl;

   cin>>b; //take input from user.

   cout<<"a+b is "<<a + b<<endl;

   cout<<"a-b is "<<a - b<<endl;

   cout<<"a*b is "<<a * b<<endl;

   cout<<"a/b is "<<(float)a / b<<endl; //if you wont divide with reminder the change one value into float out of two integer.
*/

   
  // ===================================C++ divides the operators into the following groups:===========================

// =====================================Arithmetic operators=======================================================
// https://www.w3schools.com/cpp/cpp_operators.asp#arithmetic 
// +	Addition	Adds together two values	x + y	
// -	Subtraction	Subtracts one value from another	x - y	
// *	Multiplication	Multiplies two values	x * y	
// /	Division	Divides one value by another	x / y	
// %	Modulus	Returns the division remainder	x % y	
/*
int x = 5;
  int y = 2;
  cout << x % y;
 */ 
// ++	Increment	Increases the value of a variable by 1	++x	
/*
int x = 5;
  ++x;
  cout << x;
*/
// --	Decrement	Decreases the value of a variable by 1	--x	
/*
int main() {
  int x = 5;
  --x;
  cout << x;
*/

//=============================== assignment operators:========================================
//  https://www.w3schools.com/cpp/cpp_operators_assignment.asp

// =	   x = 5	  x = 5	
// +=	   x += 3	  x = x + 3	
// -=	   x -= 3	  x = x - 3	
// *=	   x *= 3	  x = x * 3	
// /=	   x /= 3	  x = x / 3	
// %=	   x %= 3	  x = x % 3	
// &=	   x &= 3	  x = x & 3	
// |=	   x |= 3	  x = x | 3	
// ^=	   x ^= 3	  x = x ^ 3	
// >>=	 x >>= 3	x = x >> 3	
// <<=	 x <<= 3	x = x << 3

//=============================== comparison operator=====================================
// https://www.w3schools.com/cpp/cpp_operators_comparison.asp

// ==	Equal to	x == y	
// !=	Not equal	x != y	
// >	Greater than	x > y	
// <	Less than	x < y	
// >=	Greater than or equal to	x >= y	
// <=	Less than or equal to	x <= y

// =================================Logical operators ====================================
// https://www.w3schools.com/cpp/cpp_operators_logical.asp

// && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
// || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
// !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

//========================================Bitwise operators==================================

//========================================String=======================================
   /*
   string greeting = "Hello";
    cout << greeting<<endl;
   */
//==================================String Concatenation==============================

// The + operator can be used between strings to add them together to make a new string.
//  This is called concatenation:
/*
  string firstname ="himanshu ";  //note the space in "himanshu--"
  string lastname ="gupta";
  string fullname = firstname + lastname;
  cout<<fullname<<endl;
//       or
   string fullname = firstname + " " + lastname;
//      or 
   string fullname = firstname.append(lastname);//It is up to you whether you want to use + or append().
                                                //The major difference between the two,
                                                //is that the append() function is much faster. 
                                                //However, for testing and such, it might be easier to just use +.
*/  

//===============================String Length=====================================

//To get the length of a string, use the length() or size() function:
/*
  string text = "ABCDEFGHIJKLMNOPQRSTWUVXYZ";
  cout<< "The length of the text string is: "<<text.length()<<endl;
//  or
  cout<< "The length of the text string is: "<<text.size()<<endl;
*/

//======================================Access Strings==============================

//You can access the characters in a string by referring to its index number inside square brackets [].
/*
  string mystring ="Himanshu";
  cout<< mystring[0]<<endl;
*/
// To change the value of a specific character in a string, refer to the index number, and use single quotes:
/*
  string newstring ="oshank";
  newstring [0] = 'L';
  newstring [5] = 'f';
  cout<< newstring<<endl;
*/
///////////////////////////////////conditions /////////////////////////////////////////////

// Less than: a < b
// Less than or equal to: a <= b
// Greater than: a > b
// Greater than or equal to: a >= b
// Equal to a == b
// Not Equal to: a != b   
//====if else===
/*
if(400>300){
  cout<< "right"<<endl;
}else cout<< "wrong"<<endl;
*/
/*
int age;
cout<<"enter your age"<<endl;
cin>>age;
if(age>=18){
  cout<<"you can vote"<<endl;
  }else
  {
   cout<<"you can not vote"<<endl;
  }
*/
/*

  int date;
  cout<<"enter date"<<endl;
  cin>>date;
  if(date>=50){
  cout<<"happy birthday"<<endl;
  }else
  {
   cout<<"your birthday is comming"<<endl;

  }
  */

    return 0;
}


