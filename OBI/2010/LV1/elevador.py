N, C = input().split(" ")
N = int(N)
C = int(C)
result = "N"
pessoas = 0
for i in range(N):
    S, E = input().split(" ")
    pessoas -= int(S)
    pessoas += int(E)
    if(pessoas > C):
        result = "S"
        break
print(result)