
---
date: 2025-05-26
Tags: [[0.1 - The BIG 4]] [[OOP]] [[Python]]
---



---

## 🧬 Python OOP: **Inheritance** (Detailed Notes)

---

### 🔹 What is Inheritance?

- **Inheritance** allows a class (called the **child/subclass**) to inherit **attributes and methods** from another class (called the **parent/base/superclass**).
    
- It promotes **code reuse**, **modularity**, and **hierarchical class structure**.
    

---

### 🔹 Syntax of Inheritance:

```python
class Parent:
    # parent class code

class Child(Parent):
    # child class code
```

---

### 🔹 Example:

```python
class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):  # Dog inherits from Animal
    def bark(self):
        print("Dog barks")

dog = Dog()
dog.speak()  # Inherited method
dog.bark()   # Child class method
```

---

## 📚 Types of Inheritance in Python

---

### 1. **Single Inheritance**

- One child class inherits from one parent class.
    

```python
class Parent:
    def show(self):
        print("Parent")

class Child(Parent):
    pass

obj = Child()
obj.show()  # Output: Parent
```

---

### 2. **Multilevel Inheritance**

- A child class inherits from a parent, and another class inherits from that child.
    

```python
class Grandparent:
    def show1(self):
        print("Grandparent")

class Parent(Grandparent):
    def show2(self):
        print("Parent")

class Child(Parent):
    def show3(self):
        print("Child")

c = Child()
c.show1()  # Grandparent
c.show2()  # Parent
c.show3()  # Child
```

---

### 3. **Multiple Inheritance**

- A child class inherits from **more than one parent class**.
    

```python
class Father:
    def skills(self):
        print("Driving")

class Mother:
    def talents(self):
        print("Cooking")

class Child(Father, Mother):
    pass

c = Child()
c.skills()    # From Father
c.talents()   # From Mother
```

> ⚠️ In case of method conflicts, Python uses **MRO (Method Resolution Order)** — left to right.

---

### 4. **Hierarchical Inheritance**

- **Multiple child classes inherit from the same parent class**.
    

```python
class Parent:
    def show(self):
        print("Parent")

class Child1(Parent):
    pass

class Child2(Parent):
    pass

c1 = Child1()
c2 = Child2()
c1.show()  # Output: Parent
c2.show()  # Output: Parent
```

---

### 5. **Hybrid Inheritance**

- A **combination** of two or more types of inheritance.
    

```python
# Combination of multiple and multilevel
class A:
    def showA(self):
        print("Class A")

class B(A):
    def showB(self):
        print("Class B")

class C:
    def showC(self):
        print("Class C")

class D(B, C):
    def showD(self):
        print("Class D")

d = D()
d.showA()
d.showB()
d.showC()
d.showD()
```

---

## 🧰 `super()` Function

### 🔹 What is `super()`?

- `super()` is a built-in function used to **call methods of the parent class**.
    
- Especially useful when **overriding methods** in the child class but still needing parent functionality.
    

---

### 🔹 Syntax:

```python
super().method_name()
```

---

### 🔹 Example:

```python
class Person:
    def __init__(self, name):
        self.name = name

class Student(Person):
    def __init__(self, name, roll):
        super().__init__(name)  # call parent constructor
        self.roll = roll
```

Without `super()`, you'd have to manually call the parent constructor like:  
`Person.__init__(self, name)` — but `super()` is **cleaner** and **respects MRO** in multiple inheritance.

---

## ✅ Summary

| Term            | Description                                                      |
| --------------- | ---------------------------------------------------------------- |
| **Inheritance** | Mechanism to derive a class from another class.                  |
| **Types**       | Single, Multilevel, Multiple, Hierarchical, Hybrid               |
| **super()**     | Calls methods/constructors from the parent class in a clean way. |

---

