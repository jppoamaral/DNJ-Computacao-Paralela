# Como compilar:
O código foi compilado pelo Visual Studio Code no Windows. Para calcular o tempo de execução, executamos o segunte código "Measure-Command {python .\PROJETO.py}" no Windows PowerShell.

# Como resolveram o problema: descrição simples do algoritmo e estratégia de paralelismo adotada
Usamos a linguagem Python para resolver o desafio. Primeiramente tentamos implementar pthreads, porém descobrimos que não existe na linguagem python. Sendo assim, importamos a biblioteca "concurrent.futures". Dessa biblioteca usamos a classe "ProcessPoolExecutor" e a função "as_completed".


# Qual foi o speedup da última versão e como eles fizeram para melhorar
Tempo de execução serial (para T = 10^9) : 38,37 segundos

![image](https://user-images.githubusercontent.com/84483063/170840782-fc6deb13-93c4-4e32-a24d-b9d6f32bdb34.png)

Tempo de execução paralelo com 3 threads (T = 10^9) : 19,49 segundos

![image](https://user-images.githubusercontent.com/84483063/170840859-fb965994-5ee9-41cd-98f3-c257daf5c2ec.png)

Tempo de execução paralelo com 4 threads (T = 10^9) :  13,99 segundos

![image](https://user-images.githubusercontent.com/84483063/170840933-951f0e39-29bd-4297-981d-c69774c461b5.png)
__________________________________________________________________________________________________________________
Tempo de execução serial (para T = 10^10) : 796,76 segundos

![image](https://user-images.githubusercontent.com/84483063/170841352-b4100953-3596-414a-a400-da6b0a7b98db.png)

Tempo de execução paralelo com 3 threads (T = 10^10) : 407,60 segundos

![image](https://user-images.githubusercontent.com/84483063/170841642-9c172166-417a-4258-8437-cc75a0611f7f.png)

Tempo de execução paralelo com 4 threads (T = 10^10) : 236,06 segundos

![image](https://user-images.githubusercontent.com/84483063/170841858-688ddd4c-a169-4bcc-b7bc-dbb4a954a5dc.png)

### Speedup: 796,76 / 236,06 = 3,375
____________________________________________________________________________________________________________________

# Considerações sobre a estratégia de paralelismo adotada e como isso auxiliou na escala do problema. 
Primeiramente rodamos o código para com 3 threads e depois com 4 threads para analisar a melhora no tempo de execução. Testamos tanto para T = 10^9 quanto para T = 10^10.
