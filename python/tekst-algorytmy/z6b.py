fp = open('dane.txt', 'r')
arr = fp.read().splitlines()
fp.close()
#--------------------------------------------------------

#A = 10, B = 11, C = 12, D = 13, E = 14, F = 15

even = 0
for number in arr:
    if number[-1] == 'A' or number[-1] == 'C' or number[-1] == 'E':
        even+=1

print('Liczby parzyste:', even)