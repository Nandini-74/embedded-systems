# Day 5 - Variables & Data Types

## Videos Covered

- ASCII in C
- Variable Naming Rules
- Local Variables
- Global Variables
- int Data Type
- float Data Type

---

# 1. ASCII (American Standard Code for Information Interchange)

## What is ASCII?

ASCII is a character encoding standard where every character is assigned a unique decimal value.

Computers do not understand characters directly.
They understand numbers.

For example:

'A' → 65

'a' → 97

'0' → 48

'9' → 57

' ' (Space) → 32

---

## Why is ASCII used?

- Computers store characters as numbers.
- Makes communication between different devices possible.
- Used in keyboards, LCD displays, UART communication, Bluetooth, Serial Communication, etc.

---

## Example

```c
char ch = 'A';

printf("%d", ch);
```

Output

```
65
```

---

# 2. Variables

## What is a Variable?

A variable is a named memory location used to store data.

Think of it as a labeled box.

```
Marks ---> 95

Age -----> 19

Temperature ---> 35
```

The value inside the variable can change during program execution.

---

## Declaration

```c
int age;
```

## Initialization

```c
int age = 19;
```

---

# 3. Variable Naming Rules

## Rules

✅ Must start with a letter or underscore (_)

✅ Can contain letters, digits and underscores

❌ Cannot start with a number

❌ No spaces allowed

❌ No special symbols except underscore

❌ Cannot use keywords

---

## Valid

```c
marks

studentMarks

_marks

temperature1
```

## Invalid

```c
2marks

student marks

marks@

float
```

---

## Good Practice

Use meaningful variable names.

Good

```c
int temperature;
```

Bad

```c
int t;
```

---

# 4. Local Variables

## Definition

Variables declared inside a function.

Example

```c
int main()
{
    int age = 19;
}
```

## Scope

Accessible only inside that function.

## Lifetime

Destroyed when the function finishes execution.

---

# 5. Global Variables

## Definition

Variables declared outside all functions.

Example

```c
int age = 19;

int main()
{

}
```

## Scope

Accessible throughout the program.

## Lifetime

Exists from the start of the program until it ends.

---

# Difference Between Local and Global Variables

| Local Variable | Global Variable |
|---------------|-----------------|
| Declared inside a function | Declared outside functions |
| Accessible only inside that function | Accessible throughout the program |
| Exists only while the function executes | Exists throughout program execution |

---

# 6. int Data Type

## Purpose

Used to store whole numbers.

Example

```c
int age = 19;
```

Format Specifier

```c
%d
```

Common Size

4 Bytes (may vary depending on compiler/system)

Example Values

```
-10

0

25

1000
```

---

# 7. float Data Type

## Purpose

Used to store decimal numbers.

Example

```c
float cgpa = 9.25;
```

Format Specifier

```c
%f
```

Common Size

4 Bytes (commonly)

Example Values

```
3.14

5.75

9.25
```

---

# Quick Revision

✔ ASCII stores characters as numbers.

✔ Variables store values in memory.

✔ Use meaningful variable names.

✔ Local variables are accessible only inside a function.

✔ Global variables are accessible throughout the program.

✔ int stores integers.

✔ float stores decimal values.

---

# Interview Questions

1. What is ASCII?

2. Why are meaningful variable names important?

3. What is the difference between local and global variables?

4. Why can't keywords be used as variable names?

5. What is the difference between int and float?
