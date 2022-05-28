#Domingos Soares do Carmo Neto - TIA: 32032889
#Joao Pedro de Paula Oliveira do Amaral - TIA: 32049390
#Nicolas de Barros - TIA: 32070837
import concurrent.futures

def taylor(x):
  t = 100000000
  t2 = t/2
  t4 = t/4
  ts = t2 + t4
  soma = 0
  soma2 = 0
  soma3 = 0
  soma4 = 0
  total = 0
  if x == 0:
    for i in range(int(t4)):
      if i == 0:
        pass
      else:
        soma += 1/i

  elif x == 1:
    for j in range(int(t4)):
        soma2 += 1/t4
        t4 += 1

  elif x == 2:
    for k in range(int(t4)):
        soma3 += 1/t2
        t2 += 1

  elif x == 2:
    for l in range(int(t4)):
        soma4 += 1/ts
        ts += 1

  total = soma + soma2 + soma3 + soma4
  return total


if __name__ == '__main__':
    executor = concurrent.futures.ProcessPoolExecutor(4) #A declaração with é usada para criar um executor de instância do ThreadPoolExecutor que irá esvaziar os threads imediatamente após a conclusão.
    futures = []
    somaArr = []
    for x in range(4):
        futures.append(executor.submit(taylor, x)) #Cada chamada a submit retorna uma instância Future que está armazenada na lista futures.
    for y in concurrent.futures.as_completed(futures): #Espera cada chamada da função ser concluída para poder imprimir o resultado.
        somaArr.append(y.result())
    sum = somaArr[0] + somaArr[1] + somaArr[2] + somaArr[3] #Soma os resultados de cada 'for' que foras armazenados na lista. 
    print("Sério de Taylor paralelizada com {} Threads = {}".format(4,sum))