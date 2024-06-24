# sorting function
def sortAss(lst):
    n = len(lst)
    for i in range(n):
        for j in range(0, n-i-1):
            if lst[j] > lst[j+1]:
                lst[j], lst[j+1] = lst[j+1], lst[j]
    return lst

# Calling Function Example: 
List = [1, 5, 2, 9, 3, 22, 13]
sortedList = sortAss(List)
print(sortedList)
