# Filename: type_system_py.py
def combine(a, b):
    try:
        result = a + b
        print(f"Python Result ({type(a).__name__} + {type(b).__name__}): {result}")
    except TypeError as e:
        print(f"Python Error: {e}")

combine(10, 5)          # Integer addition
combine("Hello, ", "World!") # String concatenation
combine(10, "World!")   # Throws a TypeError