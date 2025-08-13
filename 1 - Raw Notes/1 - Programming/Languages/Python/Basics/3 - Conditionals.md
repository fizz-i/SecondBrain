
---
date: 2025-05-26
Tags: [[Python]] 
---


---

### Includes:

conditionals, logical operators, conditional expressions

---

  

## 1. Conditionals:

Conditional statements are pieces of code that runs when certain condition is met

```Python
\#These consist of if and else statements 
# example:
x=10
if x<=10:
	print(x)
elif x%2==0:
	print(f"{x} is even")
else:
	print("too long")
```

  

## 2. Logical operators:

These help us evaluate multiple conditions, they help in linking other conditions.

```Python
\#These include
and or not in 

\#example:
x= 5
if x==5 and x<10:
	print(x)
elif x==5 or x%5==0:
	print(x)
```

  

## 3. Conditional expressions:

It is a one line shortcut for if-else statement.

X if condition else Y

```Python
print("positive" if 5%5==0 else "negative")
```