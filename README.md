# I'm Thinking of a Number - Algorithm

1. Ask the user for their name and store it in a variable `user_name`.
2. Print a greeting using the user's name.
3. Generate a random number between 1 and 100 and store it in `secret_number`.
4. Initialize a variable `turns` to 0.
5. Initialize `keepGoing` to true (1 in C).
6. While `keepGoing` is true:
    a. Increment `turns`.
    b. Ask the user to guess a number and store it in `guess`.
    c. Compare `guess` with `secret_number`:
        - If guess > secret_number → print "too high".
        - If guess < secret_number → print "too low".
        - If guess == secret_number → print "you got it!" and set `keepGoing` to false (0).
7. After loop ends, give feedback:
    - turns < 7 → "very good"
    - turns == 7 → "average"
    - turns > 7 → "poor performance"
8. End program.
