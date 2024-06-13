mainList = [1, 5, 6, 5, 1, 2, 3]
finalList = []

for item in mainList:
    if item not in finalList:
        finalList.append(item)

print(finalList)