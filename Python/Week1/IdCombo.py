# lowercase = 'abcdefghijklmnopqrstuvwxyz'
# digits = '0123456789'

lowercase = 'abc'
digits = '123'

answer = [i+j+k+m for i in lowercase for j in lowercase for k in digits for m
          in digits]

print('length: ', len(answer))
print(answer)
