def moreThanOne(arr, setArr):
    counter = 0
    for word in setArr:
        if arr.count(word) > 1:
            counter += 1
    return counter
#-------------------------------------------------------------------

def mostFrequent(arr, setArr):
    counter = 0
    word = ''
    for string in setArr:
        curr = arr.count(string)
        if curr > counter:
            word = string
            counter = curr
    
    return counter, word


#===========================================================================
fp = open('dane.txt', 'r')
arr = fp.read().splitlines()
fp.close()
#--------------------------------------------------------

setArr = set(arr)
print('Wyrazy powtarzajace sie:', moreThanOne(arr, setArr))
counter, word = mostFrequent(arr, setArr)

print('Najczestszy wyraz:', word)
print('Wystapienia najczestszego wyrazu:', counter)
