salesRecord = {'price': 3.24,
               'num': 4,
               'person': 'chris'}
salesStatement = '{} bought {} items at a price of {} each for a total of {}'
print(salesStatement.format(salesRecord['person'], salesRecord['num'],
                            salesRecord['price'], salesRecord['price'] *
                            salesRecord['num']))
