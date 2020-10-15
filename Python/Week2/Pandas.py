import numpy as np
import pandas as pd

animals = ['tiger', 'bear', 'moose']
s = pd.Series(animals)               # upper case S in series
print(s)

animals = ['tiger', 'bear', None]
print(pd.Series(animals))

numbers = [1, 2, 3, None]
print(pd.Series(numbers))

print(np.nan == None)       # wrong
print(np.nan == np.nan)     # wrong
print(np.isnan(np.nan))     # right

sports = {'Archery': 'Bhutan',
          'Golf': 'Scotland',
          'Sumo': 'Japan',
          'Taekwondo': 'SouthKorea'}

a = pd.Series(sports)
print(a)

print(a.index)

a = pd.Series(['tiger', 'Bear', 'moose'], index=['India', 'America', 'Canada'])
print(a)
