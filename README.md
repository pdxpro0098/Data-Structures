# Data Structures

Implementations of common data structures in C and C++. Each folder contains a
small, standalone example with its implementation, header, and `main` file.

## Included

- Arrays
- Singly, doubly, circular, and doubly circular linked lists
- Array-based and linked-list stacks
- Linear, circular, double-ended, and linked-list queues (where available)
- General trees, binary trees, and binary search trees

The `TODO.md` file tracks planned structures such as graphs, heaps, hash maps,
and self-balancing trees.

## Build and run

Compile one example from its own directory so its local `main` file and source
files are used:

```text
cd C++\Stack\Array_Stack
g++ *.cpp -o main.exe
main.exe
```

For C examples, use a C compiler from the relevant directory:

```text
cd C\Array
gcc *.c -o main.exe
main.exe
```

`Compile_run.bat` contains the C++ build-and-run command and can be copied into
the example directory before running it.