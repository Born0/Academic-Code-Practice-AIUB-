import pandas as pd
percept_sequence = (('loc_A', 'clean'), ('loc_A', 'dirty'), ('loc_B', 'clean'),
                    ('loc_B', 'dirty'))

action = ('Right', 'Suck', 'Left', 'Suck')

a = pd.Series(action, index=percept_sequence)
print(a)
