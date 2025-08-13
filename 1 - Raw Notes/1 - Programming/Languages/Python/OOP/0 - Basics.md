
---
date: 2025-05-26
Tags: [[OOP]]  [[Python]]
---



---
## Includes: 
class, object , attribute, method, class variables, constructor, Instantiation

---

## 🐍 Python OOP Notes

### 1. **Class**

- A class is a blueprint for creating objects.
    
- It defines **attributes** and **methods** common to all objects of that type.
    

```python
class Car:
    pass
```

---

### 2. **Object**

- An object is an instance of a class.
    
- When a class is instantiated, an object is created with its own unique data.
    

```python
my_car = Car()  # 'my_car' is an object of the class 'Car'
```

---

### 3. **Attribute**

- Attributes are **variables** that belong to an object.
    
- Defined inside the class using `self`, or can be added dynamically.
    

```python
class Car:
    def __init__(self, brand, color):
        self.brand = brand     # instance attribute
        self.color = color

my_car = Car("Toyota", "Red")
print(my_car.brand)  # Output: Toyota
```

---

### 4. **Method**

- A method is a **function defined inside a class**.
    
- The first parameter of a method is always `self` (refers to the object).
    

```python
class Car:
    def start(self):
        print("Car is starting")

my_car = Car()
my_car.start()  # Output: Car is starting
```

---

### 5. **Class Variables**

- Shared across all instances (objects) of the class.
    
- Defined **inside the class**, but **outside methods**.
    

```python
class Car:
    wheels = 4  # class variable

car1 = Car()
car2 = Car()
print(car1.wheels)  # Output: 4
```

---

### 6. **Constructor (`__init__` method)**

- A special method called **automatically when an object is created**.
    
- Used to initialise object attributes.
    

```python
class Car:
    def __init__(self, brand, color):
        self.brand = brand
        self.color = color
```

---

### 7. **Instantiation**

- The process of **creating an object** from a class.
    

```python
my_car = Car("Honda", "Blue")  # Instantiation
```

---

Absolutely! Here's a clear and concise note on `self` in Python OOP:

---

### 8. Self`

### 🔹 What is `self`?

- `self` is a **reference to the current instance** (object) of the class.
    
- It is used **inside class methods** to access **instance variables and methods**.
    
- It must be the **first parameter** of instance methods (but you **don’t pass it explicitly** when calling the method).
    

---

### 🔹 Why is `self` needed?

- It distinguishes between **instance variables** and **local variables** inside methods.
    
- It allows each object to **maintain its own data**.
    

---

### 🔹 Example:

```python
class Car:
    def __init__(self, brand, color):
        self.brand = brand   # 'self.brand' is an instance variable
        self.color = color

    def show_info(self):
        print(f"Brand: {self.brand}, Color: {self.color}")

my_car = Car("Tesla", "Black")
my_car.show_info()  # Output: Brand: Tesla, Color: Black
```

> In this example, `self.brand` and `self.color` belong to the **specific object** `my_car`.

---

### 🔹 Key Points:

- `self` is just a **convention**; you can name it anything, but **`self` is strongly recommended**.
    
- It only makes sense **within class definitions**.
    
- **Don't write `self` when calling a method** — Python handles that for you.
    

---
