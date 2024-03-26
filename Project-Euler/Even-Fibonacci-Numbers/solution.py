beforeLastValue, lastValue, currentValue = 1, 0, 0
sumValues = 0
while(currentValue < 4000000):
    currentValue = beforeLastValue + lastValue
    if(currentValue % 2 == 0):
        sumValues += currentValue
    beforeLastValue = lastValue
    lastValue = currentValue
print(sumValues)
