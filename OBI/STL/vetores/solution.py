n = int(input())
fila = input().split(" ")
m = int(input())
saidasFila = set(input().split(" "))

nova_fila = [int(pessoa) for pessoa in fila if pessoa not in saidasFila]

for pessoa in nova_fila:
    print(pessoa, end=' ')