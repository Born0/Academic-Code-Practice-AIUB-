def has_no_e(string):
    if 'e' in string:
        return False

    else:
        return True


file = open('word.txt')

for line in file:
    word = line.strip().split(' ')

counter = 0
for string in word:
    if has_no_e(string):
        print(string)
        counter += 1

percent = 100 * float(counter)/float(len(word))

print('Total: ', len(word))
print(percent, '%')
