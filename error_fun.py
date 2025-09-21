# Python: Missing colon to cause a syntax error
def calculate_sum(arr) # <--- Syntax error here
    total = 0
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)
