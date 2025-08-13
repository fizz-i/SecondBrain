
---
date: 2025-05-26
Tags:  [[Data Structures]] [[Python]]
---



--- 
### Includes:

List, Sets, tuples, dictionary.

---

All the collections are iterable

## 1. List:

These are ordered and mutable. There can be duplicate elements. They are iterable by for loops.

```Python
fruits = ["Apple", "banana", "mango", "pear"]
fruits[0] \#We can print specific elements using their index values 
len(fruits)
\#Important Methods
fruits.append("pineapple") \#adds and element in the end of the list
fruits.extend() 
fruits.remove("banana") \#removes the element
fruits.insert(0, "guava") \#inserts an element wherever specified
fruits.sort() \#sorts the list
fruits.reverse() \#reverse the list
fruits.clear() \#empties the list
fruits.index("pineapple") \#returns the index value of the element
fruits.count("apple") \#returns how many times apple is in the list
help(fruits) \#will tell us all about attributes and methods of the list
```

  

## 2. Sets:

These are unordered and immutable. We can add and remove elements. No duplicate elements allowed.

```Python
sets = {"apple","orange","banana","mango"}
\#use
help(sets) \#tells us about all the attributes and methods of sets
dir(sets) \#tells us about all the available attributes and methods of the set
\#some basic methods:
sets.add("guava")
sets.remove("apple")
sets.pop() \#removes a random element
```

  

## 3. Tuples:

These are ordered and mutable. Duplicate elements are allowed. They are faster than list.

```Python
tupple = ("apple","orange","banana","mango")
\#use
help(sets) \#tells us about all the attributes and methods of tuples
dir(sets) \#tells us about all the available attributes and methods of the tuple
\#some basic methods:
tupple.count("apple")
tupple.index("apple")
```

  

## 4. Dictionary:

Dictionary consists of key value pairs. They are ordered and changeable. No duplicate key values allowed.

```Python
capitals = {"India":"New Delhi",
						"America":"Washington DC",
						"china":"beijing",
						"Russia":"Moscow",
						}
\#use
help(capitals)\#tells us about all the attributes and methods of dictionary
dir(capitals) \#tells us about all the available attributes and methods of the dictionary

\#Some important:

capitals.get("Russia") \#returns the value of the key
capitals.update("Germany":"Berlin") \#adds this key value pair at last of the dictionary
capitals.update("India":"Delhi") \#with update we can add new or update existing key value pair
capitals.pop("china") \#removes the key value pair from the dictionary
capitals.popitem() \#removes the key value pair at last 
capitals.keys() \#this returns a list of all keys which is iterable
capitals.values() \#this returns a list of all values which is iterable
capitals.items() \#This returns a 2d list of tuples which is also iterable
```