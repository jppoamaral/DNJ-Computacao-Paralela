#Domingos Soares do Carmo Neto - TIA: 32032889
#Joao Pedro de Paula Oliveira do Amaral - TIA: 32049390
#Nicolas de Barros - TIA: 32070837
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
