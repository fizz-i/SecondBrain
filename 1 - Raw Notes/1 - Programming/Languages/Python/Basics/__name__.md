
---
date: 2025-05-26
Tags: [[Misc]] [python]
---



---

### Includes:
use of `__name__` variable

--- 

## 1. `__name__`:

`__name__` is used when we need to make separate file with all the functions we need in another file. It is followed by `__name__ == "__main__"`  what this means is if our file is being run directly then this statement will return true otherwise false, that's why it is used in modules so that they are not run directly and if they do we can print something else like help function.
example: 
```python 
def sum(a,b):
	return a+b
if __name__ == "__main__":
	print("this file has a sum function which returns the sum of the arguments")
``` 
