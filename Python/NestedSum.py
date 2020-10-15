def nested_sum(myList):
    total = 0
    for item in myList:
        if isinstance(item, list):
            total += nested_sum(item)
        else:
            total += item
    return total


number = [1, 2, [3, 4, [5, 6], 7], 8, 9]

total = nested_sum(number)
print(total)
