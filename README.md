# C++ Module 04 - Subtype Polymorphism, Abstract Classes, and Interfaces

## Project Purpose
This module introduces key object-oriented programming principles in C++ through the use of subtype polymorphism, abstract classes, and interfaces. The exercises are designed to build a foundation in OOP and focus on creating and managing class hierarchies, implementing polymorphic behavior, and exploring abstract interfaces.

Each exercise gradually expands on the previous one, providing hands-on experience with dynamic polymorphism and encapsulation in a C++ context.

## Exercises Overview

### Exercise 00: Polymorphism
**Objective**: Develop a simple inheritance structure to demonstrate polymorphism using an `Animal` base class with `Cat` and `Dog` subclasses.

**Why We Created This Class**: This exercise demonstrates subtype polymorphism by allowing different `Animal` subclasses to produce distinct sounds. It forms the basis for understanding how derived classes can exhibit unique behaviors while sharing a common interface.

### Exercise 01: Brain Class (Dynamic Allocation and Deep Copy)
**Objective**: Introduce a `Brain` class as a dynamically allocated component for `Dog` and `Cat`. Each `Dog` and `Cat` instance now has its own `Brain` to simulate unique attributes.

**Why We Created This Class**: The `Brain` class represents individual characteristics for each animal, showcasing the importance of dynamic memory management and deep copying in C++.

### Exercise 02: Abstract Class (Non-Instantiable Animal)
**Objective**: Transform the `Animal` class into an abstract base class, preventing instantiation and enforcing the implementation of certain functions by subclasses.

**Why We Created This Class**: Making `Animal` an abstract class reflects real-world hierarchies where some types are conceptual and should not be directly instantiated. This design ensures specific behaviors are implemented by all derived classes.

### Exercise 03: Interface & Recap
**Objective**: Implement an interface-like structure using abstract classes. This exercise culminates in designing `AMateria`, `ICharacter`, and related classes to model an inventory system, demonstrating advanced polymorphism and interface usage.

**Why We Created This Class**: This exercise simulates a real-world inventory system, showing how abstract interfaces and polymorphic classes enable extensibility and modular design in complex software.

## Compilation and Testing
Each exercise is contained within its own directory (`ex00/`, `ex01/`, `ex02/`, and `ex03/`). To compile, navigate to the specific exercise folder and use the provided `Makefile`. Run the executable to test functionality and explore the expected polymorphic behaviors and memory management features.

**Example:**
```bash
cd ex00
make
./your_executable
