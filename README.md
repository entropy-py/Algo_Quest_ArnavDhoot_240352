# Algo_Quest_ArnavDhoot_240352
This repository contains C++ solutions to a collection of data structures and algorithms problems. The solutions are organized into weekly directories, covering topics such as arrays, strings, linked lists, sliding window techniques, and binary search.

## Repository Structure

The code is organized into three main directories, one for each week of the challenge:

-   `week1/`: Solutions for problems from the first week.
-   `week2/`: Solutions for problems from the second week.
-   `week3/`: Solutions for problems from the third week.

## Problems Solved

Below is a breakdown of the problems solved in each week.

### Week 1

| File | Problem Description |
| :--- | :--- |
| `Q1.cpp` | Counts the number of contiguous subarrays with a sum equal to a target value `x`. |
| `Q2.cpp` | Finds the frequency of the most frequent element in an array. |
| `Q3.cpp` | Solves a maximization problem by sorting elements based on the ratio of values from two arrays and calculating a cumulative score. |
| `Q4.cpp` | Determines if an array can be sorted by only swapping elements at indices of the same parity (even with even, odd with odd). |
| `Q6.cpp` | Calculates the length of the longest valid (well-formed) parentheses substring. |

### Week 2

| File | Problem Description |
| :--- | :--- |
| `q1.cpp` | Finds the length of the longest subarray with a sum equal to a target value `k` using a sliding window. |
| `q2.cpp` | Solves the "3Sum" problem by finding all unique triplets in an array that sum to zero. |
| `q3.cpp` | Finds the length of the longest substring without repeating characters. |
| `q4.cpp` | Finds all starting indices of anagrams of a pattern string `p` within a larger string `s` using a sliding window and hash arrays. |
| `q5.cpp` | Sorts an array containing only the numbers 0, 1, and 2 (Sort Colors/Dutch National Flag problem). |
| `q6.cpp` | Counts the number of subarrays with exactly `B` distinct elements using a sliding window and a set. |
| `q7.cpp` | Counts the number of subarrays whose sum is strictly less than a target value `B`. |

### Week 3

| File | Problem Description | Notes |
| :--- | :--- | :--- |
| `Q1.cpp` | Detects if a cycle exists in a linked list (LeetCode 141). | Implements Floyd's Tortoise and Hare algorithm (fast and slow pointers). |
| `Q2.CPP` | Reverses a linked list. | This solution reverses the *values* of the nodes using a stack, not the node pointers. |
| `Q3.cpp` | Deletes duplicate nodes from a sorted linked list. | Uses an iterative approach to remove consecutive duplicates. |
| `Q4.cpp` | Finds the intersection node of two linked lists. | Provides two implementations: one using a hash set (`O(m+n)` time, `O(m)` space) and a more space-efficient two-pointer approach (`O(m+n)` time, `O(1)` space) which is commented out. |
| `Q5.cpp` | Reverses the values of nodes at even positions in a linked list. | Uses a stack to store values from even-positioned nodes and then re-populates them in reverse order. |
| `Q7.cpp` | Finds the total count of a given element `B` in a sorted array `A`. | Uses binary search to efficiently find the first and last occurrences of the element. |
| `Q8.cpp` | Finds the k-th smallest element in an unsorted array. | Implements an efficient solution using binary search on the range of possible answer values, achieving a time complexity better than sorting. |
