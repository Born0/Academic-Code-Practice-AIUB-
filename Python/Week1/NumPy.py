import numpy as np

myList = [1, 2, 3]
x = np.array(myList)
print('x:', x)

m = np.array([[7, 8, 9], [10, 11, 12]])
print('m:', m)
print('m.shape:', m.shape)

n = np.arange(0, 30, 2)
print('n:', n)
n = n.reshape(3, 5)
print('n.reshape:', n)

o = np.linspace(0, 4, 9)
print('np.linspace:', o)
o = o.resize(3, 3)          # problem
print('o.resize:', o)

print('ones', np.ones((3, 3)))  # double parentheses

print('zeros', np.zeros((3, 3)))

print('eye', np.eye(3))

print('diag', np.diag(n))

k = np.ones((2, 3), int)
print('k', k)

print('vStack', np.vstack([k, 2*k]))
print('hstack', np.hstack([k, 2*k]))

# array

s = np.arange(13)**2
print('s:', s)
print('s[0], s[4], s[0:3]:  ', s[0], s[4], s[0:3])
print('s[-5::-2]: ', s[-5::-2])

r = np.arange(36)
r.resize(6, 6)
print('r: ', r)
print('r[3, 3:6]:  ', r[3, 3:6])
print('r[: 2, : -1]:  ', r[: 2, : -1])

print('r[r > 30]:  ', r[r > 30])

print(r[2:4, 2:4])

test = np.random.randint(0, 10, (4, 3))
print('test: ', test)

for i in range(len(test)):
    print(test[i])

for i, row in enumerate(test):
    print('row', i, 'is', row)

test2 = test**2
print('Test2: ', test)
for i, j in zip(test, test2):
    print(i, '+', j, '=', i+j)
