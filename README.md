# push_swap

# Pushswap - 1337 Project

## Description
Pushswap is focuses on sorting a stack of integers using the smallest number of operations. The goal is to implement an efficient algorithm to sort the numbers on a stack using a limited set of operations. This project helps improve your understanding of algorithms, data structures, and optimization techniques in a low-level programming environment.

## Operations
- **sa**: Swap the first 2 elements of stack A.
- **sb**: Swap the first 2 elements of stack B.
- **ss**: Perform `sa` and `sb` at the same time.
- **pa**: Push the top element of stack B to stack A.
- **pb**: Push the top element of stack A to stack B.
- **ra**: Rotate stack A (move the first element to the last position).
- **rb**: Rotate stack B (move the first element to the last position).
- **rr**: Perform `ra` and `rb` at the same time.
- **rra**: Reverse rotate stack A (move the last element to the first position).
- **rrb**: Reverse rotate stack B (move the last element to the first position).
- **rrr**: Perform `rra` and `rrb` at the same time.

## Project Objective
The goal of the Pushswap project is to sort a list of integers using a stack-based approach and the smallest number of operations. The project encourages learning about:
- **Sorting algorithms**: Implementing efficient sorting algorithms such as QuickSort, MergeSort, etc., or developing a custom one.
- **Data structures**: Understanding and working with stack-based data structures.
- **Algorithm optimization**: Minimizing the number of operations required to sort the stack.

## Installation

### Prerequisites:
- A Linux or macOS system.
- **GCC** or **Clang** compiler installed.
- **Make** for building the project.

### Steps to Install and Run:
1. Clone the repository:
   ```bash
   git clone https://github.com/haghouli/push_swap.git
   cd pushswap
   make
   ./pushswap 3 2 5 1 4
