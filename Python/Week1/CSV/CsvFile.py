import csv


with open('mpg.csv') as csvfile:
    mpg = list(csv.DictReader(csvfile))
    mpg[:3]
    print(len(mpg))
    print(mpg[0].keys())

print('City fuel avg: ', sum(float(d['cty'])for d in mpg)/len(mpg))
print('HighWay fuel avg: ', sum(float(d['hwy'])for d in mpg)/len(mpg))

cylinders = set(d['cyl'] for d in mpg)
print(cylinders)

ctyMpgByCyl = []
for c in cylinders:
    sumMpg = 0
    cylTypeCount = 0
    for d in mpg:
        if d['cyl'] == c:
            sumMpg += float(d['cty'])
            cylTypeCount += 1
    ctyMpgByCyl.append((c, sumMpg/cylTypeCount))
ctyMpgByCyl.sort(key=lambda x: x[0])
print(ctyMpgByCyl)
vehiclClass = set(d['class'] for d in mpg)
print(vehiclClass)

hwyMpgByClass = []

for t in vehiclClass:
    sumMpg = 0
    vClassCount = 0
    for d in mpg:
        if d['class'] == t:
            sumMpg += float(d['hwy'])
            vClassCount += 1
    hwyMpgByClass.append((t, sumMpg/vClassCount))
hwyMpgByClass.sort(key=lambda x: x[1])
print(hwyMpgByClass)
