# Algorithms

Resolution of several algorithms, from basic to advanced

## BASIC

-   ### Plus Minus

    This algorithm addresses the counting and calculation of proportions for three distinct categories of numbers within a vector:

    1. **Positive Numbers:** Counts the quantity of positive numbers in the vector.
    2. **Negative Numbers:** Counts the quantity of negative numbers in the vector.
    3. **Zeros:** Counts the quantity of zeros in the vector.

    After the counting phase, the algorithm uses the `<iomanip>` library to adjust the output formatting. Specifically, `setprecision(5)` is employed to set the output precision to 5 digits after the decimal point. The `fixed` keyword is used to ensure that this precision applies to the digits to the right of the decimal point.

    Finally, the algorithm prints the proportions of the three categories. Each proportion represents the count of elements in a specific category divided by the total size of the vector. The adjusted formatting ensures that trailing zeros are printed, even when the fractional part has no significant digits.

    <a href="./BASIC/PlusMinus">Source Code</a>

-   ### Staircase

    The ladder algorithm can be considered as a counterpoint to array-based structures. While LinkedLists are dynamic and flexible, staircases offer a visual representation in the form of steps, created and adjusted according to demand.

    <a href="./BASIC/Staircase/">Source Code</a>

-   ### MiniMax Sum

    This algorithm checks the maximum and minimum sum in a range of 4 values ​​in a vector

    <a href="./BASIC/MiniMaxSum/">Source Code</a>

-   ### BogoSort

    BogoSort is an extremely inefficient sorting algorithm. It is based on random reordering of elements. Not used in practice, but can be used to teach more efficient algorithms.

    <a href="./BASIC/BogoSort/">Source Code</a>

-   ### Birthday Cake Candles

    You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age

    <a href="./BASIC/Candles/">Source Code</a>

## MEDIUM

-   ### Linked List

    LinkedLists can be seen as a counterpoint to array-based structures. LinkedList are dynamic lists. Unlike array-based structures, objects in a LinkedList are created and removed on demand.

    <a href="./MEDIUM/LinkedList">Source Code</a>
