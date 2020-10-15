myList = []
for number in range(0, 10):
    if number % 2 == 0:
        myList.append(number)

newList = [number for number in range(0, 10)if number % 2 == 0]
# print(newList)


def CheckAll(number):
    if number in newList:
        return True


print(map(CheckAll, myList))
