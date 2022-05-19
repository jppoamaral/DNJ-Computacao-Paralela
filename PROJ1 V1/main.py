#Domingos Soares do Carmo Neto - 32032889
#Nicolas de Barros - 32070837
#Joao Pedro de Paula Oliveira do Amaral - 32049390

import concurrent.futures

def taylor(x):
    soma = 0
    soma2 = 0
    soma3 = 0
    total = 0
    if x == 0:
      for i in range(500000001):
        if i == 0:
          pass
        else:
          soma += 1/i
    elif x == 1:
        for j in range(500000001, 750000001):
          soma2 += 1/j
    elif x == 2:
        for j in range(750000001, 1000000001):
          soma3 += 1/j
    total = soma + soma2 + soma3
    return total


with concurrent.futures.ThreadPoolExecutor(3) as executor: #A declaração with é usada para criar um executor de instância do ThreadPoolExecutor que irá esvaziar os threads imediatamente após a conclusão.
    futures = []
    for x in range(3):
        futures.append(executor.submit(taylor, x))#Cada chamada a submit retorna uma instância Future que está armazenada na lista futures.
    somaArr = []
    for future in concurrent.futures.as_completed(futures): #Espera cada chamada da função ser concluída para poder imprimir o resultado.
        somaArr.append(future.result())
    sum = somaArr[0] + somaArr[1] + somaArr[2]
    print("Sério de Taylor paralelizada com {} Threads = {}".format( 3,sum))
