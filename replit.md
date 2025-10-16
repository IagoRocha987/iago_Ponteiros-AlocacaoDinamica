# Dynamic Memory Allocation with Pointers (C Project)

## Overview
This is an educational C programming project demonstrating dynamic memory allocation and pointer manipulation. The program creates an array of random integers and performs operations on them.

## Project Structure
- `main.c` - Main source code with pointer-based functions for array manipulation
- `Makefile` - Build configuration
- `testes/test1.sh` - Test script for validation
- `README.md` - Original project instructions (in Portuguese)

## Current Features
The project implements the following functions using pointers:
- `numbers_create()` - Allocates dynamic memory for integer array
- `numbers_read()` - Fills array with random values (0-49)
- `numbers_average()` - Calculates average of array elements
- `numbers_show()` - Displays array contents
- `numbers_destroy()` - Frees allocated memory

## Build System
- **Language**: C (using Clang compiler)
- **Build Tool**: Make
- **Build Command**: `make` (or `make all`)
- **Clean Command**: `make clean`
- **Test Command**: `make test`

## Running the Project
The workflow compiles and runs the program, which:
1. Generates a random array size (0-99)
2. Fills the array with random numbers (0-49)
3. Displays the array contents
4. Calculates and shows the average

## Recent Changes
- **2025-10-16**: Initial Replit environment setup
  - Installed C toolchain (c-clang14)
  - Configured build workflow
  - Created .gitignore for C projects
  - Project builds and runs successfully

## Project Goals (from README)
Students should add new functions to:
1. Find the maximum number in the dataset
2. Find the minimum number in the dataset
3. Display even numbers from the dataset
4. Display odd numbers from the dataset
5. Add a creative custom functionality
6. Create a PDF report explaining the code

All implementations should maintain the existing pointer-based pattern.
