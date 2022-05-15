#Domingos Soares do Carmo Neto - 32032889
#Nicolas de Barros - 32070837
#Joao Pedro de Paula Oliveira do Amaral - 32049390

import threading
import time

def taylor(T):
  soma = 0
  for i in range(T):
      if i == 0:
        pass
      else:
        soma += 1/i
  print("Serie de Taylor paralelizada para T = {}: {}".format(T-1, soma))


start = time.time()
thread = threading.Thread(target = taylor, args =(101,))
thread.start()
end = time.time()
print("Speedup versao paralela: {}".format(end - start))
