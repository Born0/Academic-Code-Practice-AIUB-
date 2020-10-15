largest = None
smallest = None
while True:
    num = input("Enter a number: ")
    if num == "done":
        break
    else:
        try:
            n = int(num)
            if smallest is None or n < smallest:
                smallest = n
            if largest is None or n > largest:
                largest = n
        except:
            print("Invalid input")


print("Maximum is", largest)
print("Maximum is", smallest)
