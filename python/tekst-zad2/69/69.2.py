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

#-----------------------------------------------------------
arr = sepGenes(arr)

counter = 0
for subject in arr:
    for gene in subject:
        if 'BCDDC' in gene:
            counter+=1
            break

print("Liczba zmutowanych osobnikow:", counter)