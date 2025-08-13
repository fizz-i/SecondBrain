
---
date: 2025-05-26
Tags:  [[Python]]
---




### Includes:

functions, arguments.

---

  

## 1. Functions:

A block of reusable code:

```Python
\#syntax
def function_name():
		print("Hello")

\#invoke a function by using () after its name

function_name()
```

  

## 2. Arguments:

Value passed for a certain parameter:

```Python
\#Parameter
#				 |      
#        \/
def name(name):
		print(name)
name("Gautam")
			# ^
			# |
			\#Argument		
```

Different types of arguments:

- Positional : The arguments whose order matters with that of the parameter.

  

- Default: The argument which can be left empty and already has a default value to it

  

- Keyword: An argument preceded with a identifier helps with readability. The order of the arguments does not matter. Positional argument should always come before keyword.

  

- Arbitrary: When we need multiple arguments.
    
    There are two types of arbitrary arguments:
    
    1. *args = allows you to pass multiple non-key arguments. Returns a tuple
    2. **kwargs = allows you to pass multiple keyword arguments. Returns a dictionary
    
    **The important identifier of arbitrary arguments is * the unpacking operator. the name can be anything instead of args and kwargs**