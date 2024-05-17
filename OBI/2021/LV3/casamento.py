#run: python3 casamento.py < input.txt
def adcZeroAEsquerda(number, n):
    return "0" * n + number

A = str(input())
B = str(input())

if len(A) < len(B):
    A = adcZeroAEsquerda(A, len(B) - len(A))
if len(B) < len(A):
    B = adcZeroAEsquerda(B, len(A) - len(B))

newA = ""
newB = ""
for dA, dB in zip(A, B):
    dA = int(dA)
    dB = int(dB)
    if dA > dB:
        newA += str(dA)
    elif dB > dA:
        newB += str(dB)
    else:
        newA += str(dA)
        newB += str(dB)
newA = -1 if newA == "" else int(newA)
newB = -1 if newB == "" else int(newB)
print(newB, newA)
