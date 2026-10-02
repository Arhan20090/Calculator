# Calculator-1

# 🧮 Menu-Driven Calculator in C

A simple **menu-driven calculator program written in C** that performs basic arithmetic operations based on the user's choice.

## 📌 Features

The calculator supports:

* Addition
* Subtraction
* Multiplication
* Division
* Modulus (remainder)
* Division-by-zero error handling

## 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC / Clang / Any standard C compiler

## 🚀 Getting Started

### 1. Clone or download the project

Download the source code and navigate to the project directory.

### 2. Compile the program

Using GCC:

```bash
gcc calculator.c -o calculator
```

### 3. Run the program

On macOS/Linux:

```bash
./calculator
```

On Windows:

```bash
calculator.exe
```

## 💻 How It Works

The program asks the user to select an arithmetic operation from a menu and then takes two numbers as input.

For example:

```text
Enter your choice:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
```

The selected operation is performed and the result is displayed.

### Modulus Operation

For option `5`, the program calculates the remainder:

```c
if (b == 0) {
    printf("Error: Cannot divide by zero\n");
} else {
    printf("Result = %d\n", a % b);
}
```

The program checks whether the second number is `0` before performing the modulus operation, preventing an invalid division-by-zero operation.

## 📋 Example

```text
Enter two numbers: 10 3

Result = 1
```

Because:

```text
10 % 3 = 1
```

## ⚠️ Notes

* The modulus operator (`%`) is used with integer values.
* Division and modulus operations cannot use `0` as the second operand.
* The program returns `0` after successful execution.

## 📄 License

This project is free to use and modify for learning and educational purposes.
