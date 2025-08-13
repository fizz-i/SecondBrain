
---
date: 2025-05-26
Tags: [[Data Structures]] [[2 - Collections]] [[Python]]
---




### Includes:

String methods, string indexing and format specifiers

---

  

## 1. String methods:

```Python
Str="This guy stinks"
#Some of the important methods and functions
len(Str)
Str.find(" ")
Str.rfind("s")
Str.capitalize()
Str.upper()
Str.lower()
Str.isdigit()
Str.isalpha()
Str.count("g")
Str.replace("u", "a")
Str.split() # splits individual words in a list (splits on the basis of spaces by default and can be set to any default value)
Str.strip() #removes any whitespaces from the start or end of the string.
Str.index('w') #gives the index value of sub-str if not found gives error
Str.find('w') #It is just like index function but if the given substring is not present it returns -1

#You can see more by printing help(str)
```

  

## 2. String indexing:

It is used to access the elements of a string . [ ] (indexing operator)

[ start : stop : step ]

```Python
number = "98123-46453"
number[0:] \#returns characters from index 0 to the end
number[:7] \#returns character from start to index 7
number[1:5:2] \#returns characters from index 1 to index 5 with skipping every 2
number[-4:] \#returns 4th character from the last to the last i.e 6453
number[-5] \#return 5th character from the last
number[::-1] \#reverses the sequence
```

**Important : The index value of the start can never be less then the stop**