/*
    Exercise 1.6: Explain whether the following program fragment is legal.
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;

    If the program is legal, what does it do?
    If the program is not legal, why not? How would you fix it?

    19/08/2024
*/

/*
    The program is not legal. The errors are caused by the semicolons after
    v1 and v2:
    std::cout << "The sum of " << v1; // Error: semicolon
              << " and " << v2; // Error: semicolon
              << " is " << v1 + v2 << std::endl;

    This breaks up the statement into three lines where the '<<' operator
    has no left-hand operand on the second and third lines. To fix this, simply remove the first two semicolons.
*/
