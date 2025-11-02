# C for windows

> [!WARNING]
> I will redo this tutorial at some point, mostly to add more and to refactor some. I *may* make a youtube series on this. :3

# installation
## Downloads
Download the [C/C++ compiler](https://www.msys2.org/) and [Visual Studio Code](https://code.visualstudio.com/download)

## Installing Msys2
Run the program follow the wizard to install it. After that copy and paste this command into the terminal.
```
pacman .S mingw.w64.ucrt.x86_64.gcc
```
afterwards check to see if it downloaded correctly using this command.
```
gcc ..version
```
If it works you'll see `gcc.exe (Rev2, Built by MSYS2 project) 13.2.0`

> [!TIP]
> Version numbers will vary

## Installing Visual Studio Code
Run the Visual Studio Code.exe.\
when it asks for `select additional tasks` check all the boxes.

- [x] Create a desktop icon
- [x] Add "Open with Code action to Windows Explorer file context menu
- [x] Add "Open with Code action to Windows Explorer directory context menu
- [x] Register Code as an editor for supported file types
- [x] Add to PATH

Finish the installation.

### Addons
Download the Visual Studio Code addons [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms.vscode.cpptools.extension.pack).
It comes with 
- Debugger
- Intellisense
- Cmake
- Themes

> [!NOTE]
> This next part is optional, but is recommended to new users.

Download [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code.runner) to run your code faster and easier

### compiling from Code Runner
press the triangle in the corner of your screen, and it compiles and runs.

# Tutorial Topics

> [!WARNING]
> This tutorial does NOT cover algorithms or how to write clean code.

### Basic
1.  🟩 Print
2.  🟩 Comments
3.  🟩 Escape Sequences
4.  🟩 Variables
5.  🟩 Constants
6.  🟩 Namespaces
7.  🟩 Arithmetic
8.  🟩 Typedef & Using
9.  🟩 Type Conversion
10. 🟩 User Input

### Library Functions
1. 🟩 Math Functions
2. 🟩 String Functions
3. 🟩 Random Numbers
4. 🟩 Beep
5. 🟩 Lambda Functions

### Statements
1. 🟩 If Statements
2. 🟩 Ternary Statement
3. 🟩 Switch Statement

### More Operators
1. 🟩 Logical Operators
2. 🟩 Bitwise Operators

### Functions
1. 🟩 Functions
2. 🟩 Function Prototypes
3. 🟩 Return Statement
4. 🟩 Overloaded Functions
5. 🟩 Function Templates

### Data Structures
1. 🟩 Enums
2. 🟩 Structs
3. 🟩 Unions
4. 🟩 Vectors
5. 🟥 Queue
6. 🟥 Deque
7. 🟩 List
8. 🟩 Map

### Loops
1. 🟩 For Loops
2. 🟩 Break vs Continue
3. 🟩 While Loops
4. 🟩 Do While Loops
5. 🟩 Nested Loops
6. 🟩 For Each loop

### Arrays
1. 🟩 Array
2. 🟩 Size of 
3. 🟩 Iterate over an Array
4. 🟩 Pass Array to Function
5. 🟩 Search Array for Element
6. 🟩 Sort an Array
7. 🟩 Fill
8. 🟥 Fill Array with User Input
9. 🟥 Multidimensional Arrays

### Object Oriented Programming (OOP)
1. 🟩 Classes
2. 🟥 Public, Private, Protected
3. 🟩 Constructors
4. 🟩 Getters & Setters
5. 🟩 Inheritance
6. Multiple Inheritance

### Memory
1. 🟥 Memory Addresses
2. 🟥 Pointers
3. 🟥 Malloc
4. 🟥 Calloc
5. 🟥 Realloc
6. 🟥 Smart Pointers
7. 🟥 Auto

### Error Handling
1. 🟥 Try
2. 🟥 Catch
3. 🟥 Throw
4. 🟥 No Except

### Threads
1. 🟥 Create & Removing Threads
2. 🟥 Coroutines

### Files
1. 🟩 Write
2. 🟩 Read
3. 🟥 Append
4. 🟥 Delete

### Libraries
1. 🟥 Header Files
2. 🟥 Dynamic Link Libraries (DLL) Files

### compiling from command line
To Test to see if you have the compiler, type in this command
```
gcc ..version
```

Copy and paste this command to compile
```
gcc helloWorld.cpp
```

> [!NOTE]
> Spaces do not work with file names when compiling from command line.\
> File names will vary.

Then to run the file type the name of the .exe you made.
```
a.exe
```