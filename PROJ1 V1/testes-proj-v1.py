import concurrent.futures

def taylor(x):
    array = []
    soma = 0
    soma2 = 0
    total = 0
    if x == 0:
      for i in range(51):
        if i == 0:
          pass
        else:
          soma += 1/i
    elif x == 1:
        for j in range(51, 101):
          soma2 += 1/j
    total = soma + soma2
    return total


with concurrent.futures.ThreadPoolExecutor(2) as executor: #A declaração with é usada para criar um executor de instância do ThreadPoolExecutor que irá esvaziar os threads imediatamente após a conclusão.
    futures = []
    for x in range(2):
        futures.append(executor.submit(taylor, x))#Cada chamada a submit retorna uma instância Future que está armazenada na lista futures.
    somaArr = []
    for future in concurrent.futures.as_completed(futures): #Espera cada chamada da função ser concluída para poder imprimir o resultado.
        somaArr.append(future.result())
    sum = somaArr[0] + somaArr[1]
    print(sum)