def decimalToBinary(n):
    bin = ""
    while n > 0:
        r = n % 2
        if r > 0:
            bin += "1"
        else:
            bin += "0"
        n = n // 2 
    
    if(len(bin) < 4):
        bin += ("0" * (4 - len(bin)))
    return bin [::-1]

t = input().split(",")
binValues = []
for i in t:
    binValues.append(decimalToBinary(int(i)))

for x in zip(*binValues):
    for s in x:
        print(s, end='')
    print()
