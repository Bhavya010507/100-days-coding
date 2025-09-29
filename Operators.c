#include<stdio.h>
    int main() {
    int a, b;
    int result;
    char op, sop;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Enter operator category : ");
    scanf(" %c", &op);
    switch (op) {
        case 'r': // Relational Operators
            printf("Enter specific relational operator");
            scanf(" %c", &sop); // Read the first character of the operator
            switch (sop) {
                case 'e': result = (a == b); break;
                case 'n': result = (a != b); break;
                case 'g': result = (a > b); break;
                case 's': result = (a < b); break;
                case 'G': result = (a >= b); break;
                case 'S': result = (a <= b); break;
                default: printf("Invalid relational operator.\n"); 
                return 1;
            }
            printf("Relational result: %d\n", result);
            break;

        case 'l': // Logical Operators
            printf("Enter specific logical operator (a for &&, o for ||, n for !): ");
            scanf(" %c", &sop);
            switch (sop) {
                case 'a': result = (a && b); break;
                case 'o': result = (a || b); break;
                case 'n': result = (!a); break; // Unary operator
                default: printf("Invalid logical operator.\n"); return 1;
            }
            printf("Logical result: %d\n", result);
            break;

        case 'b': // Bitwise Operators
            printf("Enter specific bitwise operator (&, |, ^, ~, < for <<, > for >>): ");
            scanf(" %c", &sop);
            switch (sop) {
                case '&': result = (a & b); break;
                case '|': result = (a | b); break;
                case '^': result = (a ^ b); break;
                case '~': result = (~a); break; // Unary operator
                case '<': result = (a << 1); break; // Shift by 1 for demonstration
                case '>': result = (a >> 1); break; // Shift by 1 for demonstration
                default: printf("Invalid bitwise operator.\n"); return 1;
            }
            printf("Bitwise result: %d\n", result);
            break;

        case 'a': // Assignment Operators
            printf("Enter specific assignment operator (=, p for +=, m for -=, t for *=, d for /=, o for %%=): ");
            scanf(" %c", &sop);
            switch (sop) {
                case '=': result = (a = b); break;
                case 'p': a += b; result = a; break;
                case 'm': a -= b; result = a; break;
                case 't': a *= b; result = a; break;
                case 'd': a /= b; result = a; break;
                case 'o': a %= b; result = a; break;
                default: printf("Invalid assignment operator.\n"); return 1;
            }
            printf("Assignment result (value of 'a' after operation): %d\n", result);
            break;

        case 'i': // Increment/Decrement Operators
            printf("Enter specific increment/decrement operator (P for pre-increment, O for post-increment, D for pre-decrement, E for post-decrement): ");
            scanf(" %c", &sop);
            switch (sop) {
                case 'P': result = (++a); break;
                case 'O': result = (a++); break; // Value of 'a' in this line is before increment
                case 'D': result = (--a); break;
                case 'E': result = (a--); break; // Value of 'a' in this line is before decrement
                default: printf("Invalid increment/decrement operator.\n"); return 1;
            }
            printf("Increment/Decrement result: %d (value of 'a' after operation: %d)\n", result, a);
            break;

        default:
            printf("Invalid operator category.\n");
            return 1;
    }

    return 0;
}