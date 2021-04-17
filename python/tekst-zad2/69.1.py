fp = open('dane_gen.txt', 'r')
arr = fp.read().splitlines()
fp.close()
#-----------------------------------------------------------

tempArr = [0]*501

for subject in arr:
    tempArr[len(subject)] += 1

species = 0
for num in tempArr:
    if num != 0:
        species += 1

print(f"Liczba gatunkow: {species}")
print(f"Najliczniejszy gatunek: {max(tempArr)}")