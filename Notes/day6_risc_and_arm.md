# Day 6 - RISC & ARM Architecture

## Topics Covered

- CISC Architecture
- RISC Architecture
- ARM Architecture
- ARM Cortex Family

---

# 1. CISC (Complex Instruction Set Computer)

## Definition

CISC stands for **Complex Instruction Set Computer**.

It is a processor architecture that contains a **large number of complex instructions**. A single instruction can perform multiple operations such as loading data from memory, performing an arithmetic operation, and storing the result.

---

## Characteristics

- Large instruction set
- Complex instructions
- Variable instruction length
- One instruction may require multiple clock cycles
- Complex hardware design
- Reduced number of instructions in a program

---

## Advantages

- Fewer instructions are required to complete a task.
- Complex operations can be performed using a single instruction.
- Easier programming at the assembly level.

---

## Disadvantages

- Processor design is complex.
- Higher power consumption.
- Slower execution for many instructions.
- More difficult to pipeline efficiently.

---

## Example

Intel x86 processors are based on CISC architecture.

---

# 2. RISC (Reduced Instruction Set Computer)

## Definition

RISC stands for **Reduced Instruction Set Computer**.

It is a processor architecture that uses a **small and simple set of instructions**. Each instruction performs a single operation and is designed to execute quickly.

---

## Characteristics

- Small instruction set
- Fixed instruction length
- Simple instructions
- Most instructions execute in one clock cycle
- Simpler hardware design
- Efficient pipelining

---

## Advantages

- Faster execution
- Lower power consumption
- Easier hardware implementation
- Better performance per watt
- Ideal for embedded systems

---

## Disadvantages

- More instructions may be required to complete a task.
- Larger program size compared to CISC.

---

## Example

ARM processors are based on RISC architecture.

---

# Difference Between CISC and RISC

| CISC | RISC |
|------|------|
| Complex instruction set | Simple instruction set |
| Variable instruction length | Fixed instruction length |
| Multiple clock cycles per instruction | Usually one clock cycle per instruction |
| Complex hardware | Simpler hardware |
| Higher power consumption | Lower power consumption |
| Difficult pipelining | Easier pipelining |
| Example: Intel x86 | Example: ARM |

---

# 3. ARM Architecture

## Definition

ARM stands for **Advanced RISC Machine**.

ARM is a processor architecture based on the RISC principle. It is designed to provide high performance while consuming very little power.

---

## Features

- Based on RISC architecture
- Low power consumption
- High performance
- Small chip size
- Cost effective
- Widely used in embedded systems

---

## Applications

- Smartphones
- IoT devices
- Embedded systems
- Robotics
- Medical devices
- Automotive electronics

---

# 4. ARM Cortex Family

ARM processors are divided into three major Cortex series.

## Cortex-M (Microcontroller)

Purpose:
Designed for embedded systems and microcontrollers.

Applications:
- STM32
- IoT
- Robotics
- Wearables
- Consumer electronics

Examples:
- Cortex-M0
- Cortex-M3
- Cortex-M4
- Cortex-M7

---

## Cortex-A (Application)

Purpose:
Designed for devices running operating systems.

Applications:
- Smartphones
- Tablets
- Smart TVs
- Linux systems

Examples:
- Cortex-A53
- Cortex-A72
- Cortex-A76

---

## Cortex-R (Real-Time)

Purpose:
Designed for real-time and safety-critical systems.

Applications:
- Automotive systems
- Aircraft control
- Industrial automation
- Hard disk controllers

Examples:
- Cortex-R5
- Cortex-R7
- Cortex-R8
- Cortex-R52

---

# Key Points

- ARM is based on RISC architecture.
- RISC uses simple instructions for faster execution.
- Cortex-M is mainly used in embedded systems.
- Cortex-A is used in application processors.
- Cortex-R is used in real-time systems.
