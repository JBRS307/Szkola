def sepGenes(arr):
    returnArr = []
    for subject in arr:
        genes = []
        start = 0
        end = 0
        while True:
            start = subject.find('AA', end)
            end = subject.find('BB', start)
            if start < 0 or end < 0:
                break
            genes.append(subject[start:end+2])
        returnArr.append(genes)
    return returnArr



#=======================================================================
fp = open('dane_gen.txt', 'r')
arr = fp.read().splitlines()
fp.close()

#-----------------------------------------------------------------------
strong = 0
immune = 0
for subject in arr:
    if subject == subject[::-1]:
        strong += 1

reverseArr = []
for subject in arr:
    reverseArr.append(subject[::-1])

arr = sepGenes(arr)
reverseArr = sepGenes(reverseArr)

for i in range(len(arr)):
    arr[i].sort()
    reverseArr[i].sort()
    if arr[i] == reverseArr[i]:
        immune+=1

print('Organizmy odporne:', immune)
print('Organizmy silnie odporne:', strong)

#by Jakub Rekas