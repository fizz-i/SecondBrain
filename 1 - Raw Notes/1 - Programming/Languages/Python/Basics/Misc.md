
---
date: 2025-05-26
Tags: [[Python]] 
---



---
### Includes:

Iterables, Membership operators, list comprehension, match-case statements.

---

  

## 1. Iterables:

An object/collection that can return its elements one at a time, allowing it to be iterated over in a loop.

These include: Lists, sets, string, dictionary or tuple.

  

## 2. Membership operators:

Used to test whether a value or variable is found ina sequence.(string, list, set, tuple or dictionary)

these include:

- in
- not in

  

## 3. List comprehension:

A concise way to create lists in python.

compact and easier to read than traditional loops

[expression for value in iterable if condition] → formula.

```Python
doubles = []
for x in range(1,11):
	doubles.append(x*2)
print(doubles)
#--------------#
doubles = [x*2 for value in range(1,11)]
print(doubles)
```

  

## 4. Match-case statement:

An alternative to using many elif statements. Execute some code if a value matches a case. It is much cleaner and readable

  

```Python
\#Normal
def day_of_the_week(day):
	if day == 1:
		return "it is sunday"	
	elif day == 2
		return "It is Monday"
	elif day == 3
		return "It is tuesday"
	elif day == 4
		return "It is wednesday"
	elif day == 5
		return "It is thursday"
	elif day == 6
		return "It is friday"
	elif day == 7
		return "It is saturday"
	else:
		return "Not a valid day"
\#Match-case statements:

def day_of_the_week(day):
	match day:
		case 1:
			return "sunday"
		case 2:
			return "Monday"
		case 3:
			return "tuesday"
		case 4:
			return "wednesday"
		case 5:
			return "thursday"
		case 6:
			return "friday"
		case 3:
			return "saturday"
		
		
```