# Overloading in C++
In this article, we will discuss about overloading in C.

## Appreciation
Before we discuss this topic, 

I really appreciate the solution by Jerry Coffin in StackOverflow.

I have NEVER heard something he or she talked about.

I have learned a lot from the solution.

I paid off from writing these series of articles in GitHub. (The articles you're reading)

I spent half one day to review and writing article about OOP and OOP in C++ and OOP in Python.

## Function Overloading in C++

The syntax is very simple. 

Just declare two functions with same name seperately.

## Operator Overloading in C++

The core concept of operator overloading in C/C++ is easy to understand, 

but there are many details we have to care about.

### NOTICE

1. Behaviour of operators may be changed when the behaviour of one or many other functions or operators is changed.

Some examples that behaviour of operators is ALWAYS changed when the behaviour of one or many other functions or operators is changed.

In C/C++, arithmetic assigment operators.
About the arithmetic assignment operators in C/C++, we have that

x <assign_op>=y is equivalent to x=x<assign_op>y

where <assign_op> is one of arithmetic assignment operators +,-,*,/,%.

If the operator <assign_op> is overloaded , then the corresponding assigment operator <assign_op>= will also be overloaded.

For example,

We overload the operator + for class namely "classA".

Then += for "classA" will be overloaded.

The reason why is the C/C++ compiler consider the statement

x<assign_op>=y

as

x = x <assign_op> y

Some examples that behaviour of operators NEVER be changed when the behaviour of one or many other functions or operators is changed.

In C/C++, comparison operators.
For all comparison operators <comp_op>,

if the operator <comp_op> is overloaded , then the corresponding assigment operator <comp_op>= and its negation will NEVER be overloaded.

For example,

We overload the operator == for class namely "classA".

Then != for "classA" will be overloaded.

The reason why is the C/C++ compiler consider

==

and

!=

independently.

2.Behaviour of logical operator (including || and && (Of course, ||= and &&= )) must be ALWAYS changed after overloading.

It may cause undefined behaviour.

Recall the fact in C/C++, 

For effectiveness (Or to make it faster), in C/C++

Unncessary operations does NOT performed at runtime (especially for logical operators and of coursely logical assignment operators).

Given two statement P and Q. At runtime,

if P is false, then for P && Q , Q is NOT evaluated since whatever Q is, P && Q is always false.

Similary,

if P is true, then for P || Q ,  Q is NOT evaluated since whatever Q is, P && Q is always true.

However, after overloading the logical operators.

All statements are evaluated.

i.e.The rule are broken.

  Unncessary operations does NOT performed at runtime.

3. There are slightly difference in C/C++ for overloadable operators.
  
  In C++, the number of overloadable operator more than C.

### Syntax 
#### For declaration,
<types> operator <overloadable_op> (parameters) { /* contents */}
  
#### For call,
 These statements are equivalent.
  
 a <overloadable_op> b
  
 or
  
 a.operator<overloadable_op>(b)
  
### Overloadable operator
Overloadable Operator in C/C++
  
1. arithmetic operator
  
+ 
  
- 
  
* 
  
/ 
  
%

2.Postfix and prefix operator
  
3. assigment operator
  
= 
  
4. arithmetic assigment operator
  
+=
  
-=
  
*=
  
/=   
  
%=

5. comparison operator
  
!
  
> 
  
==
  
!=

>=
  
6. bitwise operator
  
&

|
 
^
  
~
  
7. bitwise assignment operator
 
&=
  
|=
  
^=
  
8. logical operator
  
||
  
&&
  
9. logical assignment operator
 
||=
  
&&=
  
  
10. stream operator
  
>>
  
11. member assignment operator
  
->*  
  
->

12. memory management operator

new
  
new[]
  
delete

delete[]
  
13. bracket 
  
[]
  
()
  
14. single comma
  
,
  
## NonOverloadable Operators in C++

1. ternary operator
 
?:
  
2. dot 
  
.
  
3. combination of dot and asterisk

.*
  
4. scope resolution operator
  
::
  
5. member access function
  
.
  
6.  some special builtin function
  
such as

 sizeof()
  
 typeid()
  
## Ref

1. Link to Overloadable operators in C++.
  
https://cplusplus.com/doc/tutorial/templates/
  
2. Link to NonOverloadable operators in C++.
  
In this link, there are many people answers what operators are NonOverloadable? and gives some details about operator overloading.
  
https://stackoverflow.com/questions/2874589/unoverloadable-c-operators
