
### Includes:

Variables, type casting, data types, user input, **Arithmetic & Math**

---

---
date: 2025-05-26
Tags: [[String]]  [[Python]] 
---



## 1. Variables:

Created using:

```Python
variable_name = "string or integer or boolean or float"
```

  

## 2. Data types:

Mainly four types of data types:

- string
- boolean
- integer
- float

```Python
"This is a string" \#series of characters
	290121 \#Any integer is interger -_-
	21.012 \#number containing a decimal is floating point interger
	True or False \#these two are booleans
```

  

## 3. Type casting:

Changing a string into integer or float OR string into Bool or bool into string:

```Python
# These are the functions used to type caste
int()
bool()
float()
str()
\#Inside there parenthese variable in written which is to be type casted
\#example:
num = "981281912"
int(num)
# Now on printing num is won't be string but a integer
```

  

## 4. User Input:

User’s input is gathered using the input() function:

```Python
# Syntax:
input("")
\#By default input returns a string
\#We can type caste it according to our needs
\#Its value can be stored in a variable
\#Example: 

name = input("Enter your name")
```

  

## 5. Arithmetic & Math:

Performing basic Addition, Multiplication, subtraction, Division:

```Python
# We can add subtract multiply divide no. very easily
6+7 \#Addition
6-7 \#Subtraction
6*7 \#Multiplication
6/7 \#This gives the quotient
6%7 \#this returns the modulus of the division
6//7 \#this returns the rounded off quotient
6**7 \#This raises the power of 6 by 7
```

```Python
\#We can also perform these in-built functions
x=1
x=x+1 
\#Both above and below are same
x+=1 # This is called "Augumented assignment operator". It can be used with all mentioned above

#Important functions:

round(3.14) \#Rounds off the value
abs(-4) \#Tells the distance of the value from 0 as a whole no.
pow(x,y) # Raises the power of x to y
max(x,y,z) \#Tells the maximum value from the given x,y,z
min(x,y,z) \#Tells the minimum value from the given x,y,z

```

  

### Math:

math is a in-built module which has very useful functions:

```Python
import math
\#imp fxns
math.pi \#Gives the value of pi
math.e \#Gives the value of e
math.sqrt(x) \#Gives the squareroot of x
math.ceil(9.1) \#Rounds off a no. upwards
math.float(9.9) \#Rounds off a no. downwards
```


### 6. Bitwise Operators:

```python
x = 6
y = 2

print(x & y) #Bitwise AND operator 
print(x | y) #Bitwise OR operator
print(x ^ y) #Bitwise XOR operaor
print(~x) #Bitwise NOT operator
n=1

print(x<<n) #Bitwise left shift (x*2^n) where n is the number by which we are left shifting.
print(x>>n) #Bitwise Right shift (x/2^n) where n is the number by which we are right shifting.

```

Bitwise operators first change the given numbers in binary and then operate:

1. AND:
	1. suppose x = 6 and y = 2
	2. Now turning them in binary will give us x = 0110 and y = 0010
	3. For AND we add both x and y only if both are 1 then return 1 otherwise return 0
	4. 0110
		0010
		this will give 0010
	5. Which is 2 hence the AND operator for x= 6 and y=2 will return 2

2. OR:
	1. supppose the same
	2. Now as the name OR suggest either one should be 1 to return 1
	3. 0110
		0010
		this will give 0110
	4. Which is 6 therefore OR operator for x = 6 and y=2 will return 6

3. XOR:
	1. Suppose the same
	2. Now for XOR 0 - 1 return 1 not 1 - 1 or 0 - 0 
	3. 0110
		0010
		this will give 0100 which is 4
	4. Therefore XOR operator will give 4 for x = 6 and y = 2

4. NOT:
		NOT is very simple it changes the 1 with 0 and 0 with 1 of any given number
			for x = 2 its binary will be 0010
			after using NOT it will change to - (x+1) so it will be -3