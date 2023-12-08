#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_3digit_palindrome():
    max_palindrome = 0
    for x in range(100, 1000):
        for y in range(100, 1000):
            product = x * y
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product
    return max_palindrome

result = largest_3digit_palindrome()  
print(result)
