fp = open('dane.txt', 'r')
arr = fp.read().splitlines()
fp.close()
#--------------------------------------------------------

palindromes = 0
for word in arr:
    if word == word[::-1]:
        palindromes += 1

print('Ilosc palindromow:', palindromes)