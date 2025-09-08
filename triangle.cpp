a = float(input("Enter the first side: "))
b = float(input("Enter the second side: "))
c = float(input("Enter the third side: "))
if a <= 0 or b <= 0 or c <= 0:
    print("Sides must be positive numbers.")
    elif a + b > c and a + c > b and b + c > a:
    print("Yes, it is a triangle.")
    else:
    print("No, it is not a triangle.")