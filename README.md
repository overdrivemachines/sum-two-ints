# Summation Of Two Integers

Create a function that takes a non-empty array of distinct integers and an integer representing a target sum. The function should return an array containing any two numbers from the input array that add up to the target sum, in any order. If no such pair exists, the function should return an empty array.

Please note that in order to obtain the target sum, it is not allowed to add a single integer to itself. The sum must be obtained by adding two different integers from the array.

You can assume that there will be at most one pair of numbers in the array that sums up to the target sum.

### Sample Input

array = [3, 5, -4, 8, 11, 1, -1, 6]
targetSum = 10

### Sample Output

[-1, 11] // the numbers could be in reverse order
