Este projeto é um simulador de movimentação do Rover em Marte em duas configurações diferentes. O código é escrito em linguagem C e consiste em dois arquivos: "RoverFita.c" e "RoverPlano.c". O objetivo é apresentar o novo local do Rover após receber uma lista de comandos para movimentação.

# Configuração 1 - RoverFita.c
Nesta configuração, o Rover é movimentado em uma fita unidimensional. O Rover começa na posição 0 e recebe uma lista de comandos para se mover para esquerda (E) ou direita (D) na fita. O programa verifica se o comando é válido e atualiza a posição do Rover de acordo. A posição final é impressa na tela.

## Utilização
Para utilizar a configuração 1, basta compilar e executar o arquivo "RoverFita.c" com o compilador de C de sua preferência.

```
gcc RoverFita.c -o RoverFita
./RoverFita
```

# Configuração 2 - RoverPlano.c
Nesta configuração, o Rover é movimentado em um plano bidimensional. O plano é representado por uma matriz quadrada de tamanho definido pela variável "tamMatriz". O Rover começa na posição (0,0) e recebe uma lista de comandos para se mover para cima (C), baixo (V), esquerda (E) ou direita (D) na matriz. O programa verifica se o comando é válido e atualiza a posição do Rover de acordo. A posição final é impressa na tela.

## Utilização
Para utilizar a configuração 2, basta compilar e executar o arquivo "RoverPlano.c" com o compilador de C de sua preferência.
```
gcc RoverPlano.c -o RoverPlano
./RoverPlano
```

# Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para enviar pull requests para melhorias ou correções de bugs.

# Licença
Este projeto está licenciado sob a licença MIT. Veja o arquivo LICENSE para mais informações.