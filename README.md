# COMPILER-DESIGN-BASICS

COMPANY: CODETECH IT SOLUTIONS

NAME: SANCHITA SACHIN SAKHARE

INTERN ID: CT04DY2689

DOMAIN: C++ PROGRAMMING

DURATION: 4 WEEKS

MENTOR: NEELA SANTHOSH KUMAR

# discription

This task involves designing and implementing a simple compiler in C++ that can parse and evaluate basic arithmetic expressions. At its core, the assignment introduces foundational concepts in compiler design, such as lexical analysis, parsing, and expression evaluation. While it doesn’t require building a full-fledged compiler with multiple phases like semantic analysis or code generation, it provides a practical and focused entry point into how compilers interpret and process human-readable code into executable logic. The goal is to create a program that accepts arithmetic expressions as input—such as “(3 + 5) * 2 - 4 / 2”—and produces the correct numerical result by parsing and evaluating the expression according to standard operator precedence and associativity rules.

The implementation uses a recursive descent parser, which is a top-down parsing technique commonly used in compiler construction. This method breaks down the input expression into manageable components based on a defined grammar. In this case, the grammar supports integers, parentheses, and the four basic arithmetic operators: addition (+), subtraction (-), multiplication (*), and division (/). The parser is structured into multiple functions, each responsible for handling a specific level of precedence. For example, parseExpression() handles addition and subtraction, parseTerm() handles multiplication and division, and parseFactor() deals with parentheses and numeric literals. This layered approach ensures that the parser respects the correct order of operations, such as evaluating multiplication before addition unless overridden by parentheses.

To make the compiler robust and user-friendly, the code includes error handling for common issues such as unexpected characters, missing parentheses, and division by zero. These errors are caught using exceptions, and meaningful messages are displayed to the user to indicate what went wrong. This not only improves the reliability of the program but also mirrors the behavior of real-world compilers, which must provide clear diagnostics when encountering invalid syntax. Additionally, the parser skips whitespace between tokens, allowing users to format their expressions freely without affecting correctness.

The program begins by prompting the user to enter an arithmetic expression. It then creates a Parser object initialized with the input string and calls the parse() method to evaluate the expression. If the input is valid, the result is printed to the console. If an error occurs during parsing or evaluation, an exception is thrown and caught in the main() function, which then displays an error message. This structure separates the parsing logic from the user interface, making the code modular and easier to maintain or extend.

From an educational standpoint, this task is highly valuable for students and developers interested in understanding how compilers work. It introduces key concepts such as tokenization (even though this implementation does not use a separate lexer), recursive parsing, and expression trees in a simplified context. By working through this project, learners gain insight into how programming languages are interpreted and how complex expressions are broken down and evaluated step by step. It also lays the groundwork for more advanced topics like abstract syntax trees (ASTs), symbol tables, and intermediate code generation.

Moreover, the task encourages good programming practices such as modular design, exception handling, and input validation. The use of standard C++ libraries like <string>, <cctype>, and <stdexcept> demonstrates how built-in tools can be leveraged to simplify development while maintaining performance and clarity. The recursive structure of the parser also reinforces the importance of function decomposition and logical flow control, which are essential skills in both compiler design and general software engineering.

This project can be extended in many directions to deepen understanding and add functionality. For example, one could implement support for floating-point numbers, variables, and assignment statements, turning the simple evaluator into a mini interpreter. Another enhancement could involve building a tokenizer to separate lexical analysis from parsing, which is how professional compilers are structured. Additionally, the parser could be modified to generate an abstract syntax tree, which could then be traversed for evaluation or transformed into another representation, such as bytecode or machine code.

In summary, this task offers a hands-on introduction to compiler design by focusing on the parsing and evaluation of arithmetic expressions. It combines theoretical concepts with practical implementation, allowing learners to see how compilers process input and produce output. The recursive descent parser used in the solution is a powerful and intuitive method for handling expression grammars, and the overall structure of the program reflects real-world compiler architecture in a simplified form. Whether used as a classroom assignment, a personal learning project, or a stepping stone to more advanced compiler development, this task provides a solid foundation in one of the most important areas of computer science.

<img width="1920" height="1080" alt="Screenshot 2025-10-18 221949" src="https://github.com/user-attachments/assets/39bf456b-f89f-4600-8964-ff9ada101978" />
