def taylor():
    T = 1000000000
    soma = 0
    for i in range(T+1):
        if i == 0:
            pass
        else:
            soma += 1/i
    print(soma)
taylor()