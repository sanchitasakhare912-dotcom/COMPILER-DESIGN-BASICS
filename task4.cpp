#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

class Parser {
    std::string expr;
    size_t pos;

public:
    Parser(const std::string& input) : expr(input), pos(0) {}

    int parse() {
        int result = parseExpression();
        if (pos < expr.length()) {
            throw std::runtime_error("Unexpected character at end: " + std::string(1, expr[pos]));
        }
        return result;
    }

private:
    void skipWhitespace() {
        while (pos < expr.length() && isspace(expr[pos])) pos++;
    }

    int parseExpression() {
        int result = parseTerm();
        while (true) {
            skipWhitespace();
            if (pos >= expr.length()) break;
            char op = expr[pos];
            if (op == '+' || op == '-') {
                pos++;
                int rhs = parseTerm();
                if (op == '+') result += rhs;
                else result -= rhs;
            } else {
                break;
            }
        }
        return result;
    }

    int parseTerm() {
        int result = parseFactor();
        while (true) {
            skipWhitespace();
            if (pos >= expr.length()) break;
            char op = expr[pos];
            if (op == '*' || op == '/') {
                pos++;
                int rhs = parseFactor();
                if (op == '*') result *= rhs;
                else {
                    if (rhs == 0) throw std::runtime_error("Division by zero");
                    result /= rhs;
                }
            } else {
                break;
            }
        }
        return result;
    }

    int parseFactor() {
        skipWhitespace();
        if (pos >= expr.length()) throw std::runtime_error("Unexpected end of input");

        if (expr[pos] == '(') {
            pos++;
            int result = parseExpression();
            skipWhitespace();
            if (pos >= expr.length() || expr[pos] != ')') {
                throw std::runtime_error("Expected closing parenthesis");
            }
            pos++;
            return result;
        }

        return parseNumber();
    }

    int parseNumber() {
        skipWhitespace();
        int start = pos;
        while (pos < expr.length() && isdigit(expr[pos])) pos++;
        if (start == pos) throw std::runtime_error("Expected number");
        return std::stoi(expr.substr(start, pos - start));
    }
};

int main() {
    std::string input;
    std::cout << "Enter an arithmetic expression: ";
    std::getline(std::cin, input);

    try {
        Parser parser(input);
        int result = parser.parse();
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
