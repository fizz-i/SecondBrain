
---
date: 2025-05-26
Tags: [[Python]] 
---



  

## 1. For loops:

Execute a block of code a fixed amount of time. You can iterate or a range, sequence, string etc.

```Python
for i in range(1,11):
	print(i)
\#output of the code: 1 2 3 4 5 6 7 8 9 10
\#the stop of range function excludes the last number
for i in reversed(range(1,11)):
	print(i) \#output: 10 9 8 7 6 5 4 3 2 1

for i in range(1,11,-1):
	print(i) \#output: 10 9 8 7 6 5 4 3 2 1

\#We can also iterate lists,tuples,dictionaries
```

  

## 2. While loops:

Execute a line of code until the given condition stays true.

```Python
x=10
while x = 10:
	print("HALLO")
\#the code above will run forever if the value of x does not change 

x=0
while x <6:
	print(x)
	x += 1
\#The code above will run five times because every time it runs it is adding 1 to x
\#output:
#1
#2
#3
#4
#5
```

  

## 3. Nested loops:

A loop in another loop.

```Python
for x in range(3):
	for i in range(1,10):
		print(i, end="") \#end="" sets how our iteration will give output with end="" output
	print()            \#will be 123456789
	\#empty print() statement prints a new line
```