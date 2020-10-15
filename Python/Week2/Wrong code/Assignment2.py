
# coding: utf-8

# # Assignment 2
# 
# Before working on this assignment please read these instructions fully. In the submission area, you will notice that you can click the link to **Preview the Grading** for each step of the assignment. This is the criteria that will be used for peer grading. Please familiarize yourself with the criteria before beginning the assignment.
# 
# An NOAA dataset has been stored in the file `data/C2A2_data/BinnedCsvs_d400/fb441e62df2d58994928907a91895ec62c2c42e6cd075c2700843b89.csv`. This is the dataset to use for this assignment. Note: The data for this assignment comes from a subset of The National Centers for Environmental Information (NCEI) [Daily Global Historical Climatology Network](https://www1.ncdc.noaa.gov/pub/data/ghcn/daily/readme.txt) (GHCN-Daily). The GHCN-Daily is comprised of daily climate records from thousands of land surface stations across the globe.
# 
# Each row in the assignment datafile corresponds to a single observation.
# 
# The following variables are provided to you:
# 
# * **id** : station identification code
# * **date** : date in YYYY-MM-DD format (e.g. 2012-01-24 = January 24, 2012)
# * **element** : indicator of element type
#     * TMAX : Maximum temperature (tenths of degrees C)
#     * TMIN : Minimum temperature (tenths of degrees C)
# * **value** : data value for element (tenths of degrees C)
# 
# For this assignment, you must:
# 
# 1. Read the documentation and familiarize yourself with the dataset, then write some python code which returns a line graph of the record high and record low temperatures by day of the year over the period 2005-2014. The area between the record high and record low temperatures for each day should be shaded.
# 2. Overlay a scatter of the 2015 data for any points (highs and lows) for which the ten year record (2005-2014) record high or record low was broken in 2015.
# 3. Watch out for leap days (i.e. February 29th), it is reasonable to remove these points from the dataset for the purpose of this visualization.
# 4. Make the visual nice! Leverage principles from the first module in this course when developing your solution. Consider issues such as legends, labels, and chart junk.
# 
# The data you have been given is near **Ann Arbor, Michigan, United States**, and the stations the data comes from are shown on the map below.

# In[2]:

import matplotlib.pyplot as plt
import mplleaflet
import pandas as pd

def leaflet_plot_stations(binsize, hashid):

    df = pd.read_csv('data/C2A2_data/BinSize_d{}.csv'.format(binsize))

    station_locations_by_hash = df[df['hash'] == hashid]

    lons = station_locations_by_hash['LONGITUDE'].tolist()
    lats = station_locations_by_hash['LATITUDE'].tolist()

    plt.figure(figsize=(8,8))

    plt.scatter(lons, lats, c='r', alpha=0.7, s=200)

    return mplleaflet.display()

leaflet_plot_stations(400,'fb441e62df2d58994928907a91895ec62c2c42e6cd075c2700843b89')


# In[3]:

print('hello')


# In[4]:

get_ipython().magic('matplotlib notebook')


# In[5]:


import matplotlib as mpl
mpl.get_backend()


# In[6]:

import matplotlib.pyplot as plt
get_ipython().magic('pinfo plt.plot')


# In[7]:

plt.plot(3, 2)


# In[8]:

plt.plot(3, 2, '.')


# In[9]:

from matplotlib.backends.backend_agg import FigureCanvasAgg
from matplotlib.figure import Figure


fig = Figure()


canvas = FigureCanvasAgg(fig)


ax = fig.add_subplot(111)


ax.plot(3, 2, '.')

canvas.print_png('test.png')


# In[10]:

get_ipython().run_cell_magic('html', '', "<img src='test.png' />")


# In[11]:

plt.figure()


plt.plot(3, 2, 'o')


ax = plt.gca()


ax.axis([0,6,0,10])


# In[12]:

plt.figure()


plt.plot(1.5, 1.5, 'o')

plt.plot(2, 2, 'o')

plt.plot(2.5, 2.5, 'o')


# In[13]:

ax = plt.gca()
ax.get_children()


# In[14]:

import numpy as np

x = np.array([1,2,3,4,5,6,7,8])
y = x

plt.figure()
plt.scatter(x, y)


# In[15]:


x = np.array([1,2,3,4,5,6,7,8])
y = x


colors = ['green']*(len(x)-1)
colors.append('red')

plt.figure()


plt.scatter(x, y, s=100, c=colors)


# In[17]:

zip_generator = zip([1,2,3,4,5], [6,7,8,9,10])


zip_generator = zip([1,2,3,4,5], [6,7,8,9,10])

print(*zip_generator)


# In[18]:

print(list(zip((1, 6), (2, 7), (3, 8), (4, 9), (5, 10))))
zip_generator = zip([1,2,3,4,5], [6,7,8,9,10])
x, y = zip(*zip_generator) 
print(x)
print(y)


# In[19]:


plt.scatter(x[:2], y[:2], s=100, c='red', label='Tall students')

plt.scatter(x[2:], y[2:], s=100, c='blue', label='Short students')


# In[20]:

plt.xlabel('The number of times the child kicked a ball')
plt.ylabel('The grade of the student')
plt.title('Relationship between ball kicking and grades')


# In[21]:

plt.legend()


# In[22]:

plt.legend(loc=4, frameon=False, title='Legend')


# In[23]:

plt.gca().get_children()


# In[24]:

legend = plt.gca().get_children()[-2]


# In[25]:

legend.get_children()[0].get_children()[1].get_children()[0].get_children()


# In[26]:

from matplotlib.artist import Artist

def rec_gc(art, depth=0):
    if isinstance(art, Artist):
        # increase the depth for pretty printing
        print("  " * depth + str(art))
        for child in art.get_children():
            rec_gc(child, depth+2)


rec_gc(plt.legend())


# In[33]:

import pandas as pd

plt.figure()
observation_dates = np.arange('2017-01-01', '2017-01-09', dtype='datetime64[D]')
observation_dates = map(pd.to_datetime, observation_dates) # trying to plot a map will result in an error
plt.plot(observation_dates, linear_data, '-o',  observation_dates, exponential_data, '-o')


# In[28]:

plt.plot([22,44,55], '--r')


# In[29]:

plt.xlabel('Some data')
plt.ylabel('Some other data')
plt.title('A title')
plt.legend(['Baseline', 'Competition', 'Us'])


# In[30]:

plt.gca().fill_between(range(1, len(linear_data) + 1), 
                       linear_data, exponential_data, 
                       facecolor='blue', 
                       alpha=0)


# In[31]:

plt.figure()

observation_dates = np.arange('2017-01-01', '2017-01-09', dtype='datetime64[D]')

plt.plot(observation_dates, linear_data, '-o',  observation_dates, exponential_data, '-o')


# In[32]:

import pandas as pd

plt.figure()
observation_dates = np.arange('2017-01-01', '2017-01-09', dtype='datetime64[D]')
observation_dates = map(pd.to_datetime, observation_dates) # trying to plot a map will result in an error
plt.plot(observation_dates, linear_data, '-o',  observation_dates, exponential_data, '-o')


# In[34]:

import numpy as np

linear_data = np.array([1,2,3,4,5,6,7,8])
exponential_data = linear_data**2

plt.figure()
# plot the linear data and the exponential data
plt.plot(list(range(1,9)), linear_data, '-o', list(range(1,9)), exponential_data, '-o')


# In[35]:

plt.plot([22,44,55], '--r')


# In[36]:

plt.xlabel('Some data')
plt.ylabel('Some other data')
plt.title('A title')
# add a legend with legend entries (because we didn't have labels when we plotted the data series)
plt.legend(['Baseline', 'Competition', 'Us'])


# In[37]:

plt.gca().fill_between(range(1, len(linear_data) + 1), 
                       linear_data, exponential_data, 
                       facecolor='blue', 
                       alpha=0)


# In[38]:

plt.figure()

observation_dates = np.arange('2017-01-01', '2017-01-09', dtype='datetime64[D]')

plt.plot(observation_dates, linear_data, '-o',  observation_dates, exponential_data, '-o')


# In[39]:

import pandas as pd

plt.figure()
observation_dates = np.arange('2017-01-01', '2017-01-09', dtype='datetime64[D]')
observation_dates = map(pd.to_datetime, observation_dates) 
plt.plot(observation_dates, linear_data, '-o',  observation_dates, exponential_data, '-o')


# In[40]:

plt.figure()
observation_dates = np.arange('2017-01-01', '2017-01-09', dtype='datetime64[D]')
observation_dates = list(map(pd.to_datetime, observation_dates)) # convert the map to a list to get rid of the error
plt.plot(observation_dates, linear_data, '-o',  observation_dates, exponential_data, '-o')


# In[41]:

x = plt.gca().xaxis

# rotate the tick labels for the x axis
for item in x.get_ticklabels():
    item.set_rotation(45)


# In[42]:

plt.subplots_adjust(bottom=0.25)


# In[43]:

ax = plt.gca()
ax.set_xlabel('Date')
ax.set_ylabel('Units')
ax.set_title('Exponential vs. Linear performance')


# In[44]:

ax.set_title("Exponential ($x^2$) vs. Linear ($x$) performance")


# In[45]:

plt.figure()
xvals = range(len(linear_data))
plt.bar(xvals, linear_data, width = 0.3)


# In[46]:

new_xvals = []


for item in xvals:
    new_xvals.append(item+0.3)

plt.bar(new_xvals, exponential_data, width = 0.3 ,color='red')


# In[47]:

from random import randint
linear_err = [randint(0,15) for x in range(len(linear_data))] 


plt.bar(xvals, linear_data, width = 0.3, yerr=linear_err)


# In[48]:

plt.figure()
xvals = range(len(linear_data))
plt.bar(xvals, linear_data, width = 0.3, color='b')
plt.bar(xvals, exponential_data, width = 0.3, bottom=linear_data, color='r')


# In[49]:

plt.figure()
xvals = range(len(linear_data))
plt.barh(xvals, linear_data, height = 0.3, color='b')
plt.barh(xvals, exponential_data, height = 0.3, left=linear_data, color='r')


# In[ ]:



