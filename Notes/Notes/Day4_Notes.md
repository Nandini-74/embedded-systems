# Day 4 - Embedded Systems Journey

## Videos Covered
- Binary to Hexadecimal
- Hexadecimal to Binary
- How Computers Store Numbers
- Escape Sequences in C
- Comments in C

---

# 1. Binary Number System

## Definition
Binary is a base-2 number system used internally by computers.

Digits:
0 and 1

Example:

Binary : 1010

Decimal : 10

Reason:
Electronic circuits have only two stable states:
- OFF = 0
- ON = 1

Therefore computers naturally use binary.

---

# 2. Hexadecimal Number System

## Definition

Hexadecimal is a base-16 number system.

Digits:

0 1 2 3 4 5 6 7 8 9 A B C D E F

Where:

A = 10

B = 11

C = 12

D = 13

E = 14

F = 15

---

## Why Hexadecimal?

Binary numbers become very long.

Example:

1111000010101111

can be written as

F0AF

Hexadecimal is easier for engineers to:

- Read
- Write
- Debug
- Represent memory addresses

---

## Binary ↔ Hex Relationship

Every hexadecimal digit represents exactly 4 binary bits.

Example:

A = 1010

F = 1111

5 = 0101

Therefore:

3F

=

0011 1111

---

# 3. How Computers Store Numbers

Computers store every type of information as binary.

Examples:

Decimal 5

↓

Binary 00000101

Characters are also stored as binary using encoding systems such as ASCII.

Everything inside memory is ultimately represented using 0s and 1s.

---

# 4. Escape Sequences

Escape sequences are special characters beginning with a backslash (\).

They perform formatting operations while printing.

Common Escape Sequences:

\n  → New Line

\t  → Horizontal Tab

\\  → Prints a backslash

\"  → Prints a double quote

\'  → Prints a single quote

---

Example

printf("Hello\nWorld");

Output:

Hello
World

---

# 5. Comments in C

Comments improve code readability.

The compiler ignores comments.

Types:

Single Line

// This is a comment

Multi Line

/*
This
is
a
comment
*/

---

## Why Comments Matter

- Explain program logic
- Help debugging
- Improve teamwork
- Make code easier to maintain

---

# Embedded Perspective

Binary is the language understood by hardware.

Hexadecimal is the language preferred by engineers.

C allows direct interaction with hardware.

Comments help maintain firmware.

Escape sequences improve console output while debugging.

---

# Interview Questions

Q. Why do computers use binary?

A. Electronic circuits have only two stable states (ON/OFF), making binary the natural choice.

---

Q. Why do embedded engineers prefer hexadecimal?

A. Hexadecimal represents binary in a compact and readable form, making debugging and memory representation easier.

---

Q. Does the CPU understand hexadecimal?

A. No.

The CPU understands only binary.

Hexadecimal is only for human convenience.

---

# Key Takeaways

✓ Computers understand binary.

✓ Humans prefer hexadecimal.

✓ Comments are ignored by the compiler.

✓ Escape sequences format output.

✓ Embedded engineers constantly work with binary and hexadecimal while debugging hardware.
