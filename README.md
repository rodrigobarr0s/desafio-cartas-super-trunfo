# Super Trunfo de Países - Cadastro de Cartas e Cálculos Adicionais

Este projeto simula a criação de um jogo Super Trunfo utilizando dados de cidades brasileiras. O programa permite ao usuário inserir informações sobre duas cidades e exibir esses dados de forma organizada. Na Parte 2, o programa foi aprimorado para incluir o cálculo da densidade populacional e PIB per capita.

## Parte 1: Cadastro das Cartas

Na primeira parte do projeto, o objetivo era criar um sistema simples de cadastro das cartas do Super Trunfo. O programa permite que o usuário insira os seguintes dados sobre cada cidade:

- **Estado**: Uma letra de 'A' a 'H' representando um estado.
- **Código da Carta**: Uma combinação do estado e um número de 01 a 04 (exemplo: A01, B03).
- **Nome da Cidade**: O nome da cidade para a qual a carta é criada.
- **População**: O número de habitantes da cidade.
- **Área (em km²)**: A área total da cidade.
- **PIB**: O Produto Interno Bruto da cidade em bilhões de reais.
- **Número de Pontos Turísticos**: O número de pontos turísticos na cidade.

Após o usuário inserir as informações, o programa exibe os dados de cada carta de forma organizada e legível.

### Funcionalidades da Parte 1:

- Leitura de dados do usuário sobre as cidades.
- Armazenamento das informações em variáveis apropriadas.
- Exibição dos dados de forma organizada.

## Parte 2: Cálculos Adicionais - Densidade Populacional e PIB per Capita

Na segunda parte do projeto, o sistema foi aprimorado para calcular e exibir duas novas informações sobre cada cidade:

- **Densidade Populacional**: Representa o número de habitantes por quilômetro quadrado, calculada dividindo a população da cidade pela sua área.
- **PIB per Capita**: Representa a riqueza média por pessoa na cidade, calculada dividindo o PIB da cidade pela sua população.

### Funcionalidades da Parte 2:

- O programa agora calcula a densidade populacional e o PIB per capita para cada cidade.
- Exibe as informações adicionais de forma clara e formatada com duas casas decimais.

## Parte 3: Batalha de Cartas no Super Trunfo

Na terceira parte do projeto, o sistema foi aprimorado para permitir a comparação entre duas cartas, levando em consideração todos os atributos numéricos, incluindo o cálculo do Super Poder de cada cidade. Além disso, o programa agora compara as cartas atributo por atributo e exibe quem venceu em cada comparação.

### Funcionalidades da Parte 3:

- **Super Poder**: Calculado somando todos os atributos numéricos, incluindo:
    - População
    - Área
    - PIB
    - Número de pontos turísticos
    - PIB per capita
    - O inverso da densidade populacional (quanto menor a densidade, maior o poder)

- **Comparação das Cartas**: As cartas são comparadas de acordo com os seguintes critérios:
    - População, Área, PIB, Pontos Turísticos, PIB per Capita e Super Poder: A carta com o maior valor vence.
    - Densidade Populacional: A carta com a menor densidade vence (quanto menor a densidade, maior o poder).

- **Exibição dos Resultados**: O programa exibe qual carta venceu para cada atributo.

## Parte 4: Comparando Cartas do Super Trunfo

Após o cadastro das cartas, o programa permite a comparação de duas cartas com base em um atributo específico. O código compara atributos como População, Área, Densidade Populacional, PIB per Capita e Super Poder. Aqui está como funciona a comparação:

### Como o programa compara as cartas:

- **População**: A carta com a maior população vence.
- **Área**: A carta com a maior área vence.
- **PIB**: A carta com o maior PIB vence.
- **Pontos Turísticos**: A carta com o maior número de pontos turísticos vence.
- **Densidade Populacional**: A carta com a menor densidade populacional vence (quanto menor a densidade, maior o poder).
- **PIB per Capita**: A carta com o maior PIB per capita vence.
- **Super Poder**: A carta com o maior "super poder" vence, que é a soma de vários atributos, incluindo o inverso da densidade populacional.

### Exemplo de Comparação de Cartas:

Após o usuário inserir os dados de duas cartas, o programa exibe as comparações de cada atributo e declara qual carta venceu em cada caso.

## Parte 5: Menu Interativo de Comparação de Atributos

Na quinta parte do projeto, foi implementado um menu interativo usando `switch` para que o usuário possa escolher qual atributo será usado para comparar as cartas. Além disso, foram utilizadas estruturas de decisão aninhadas para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. O menu oferece a opção de comparar as cartas com base em um dos seguintes atributos:

- **Nome do País** (apenas para exibição, sem comparação)
- **População** (int)
- **Área** (float)
- **PIB** (float)
- **Número de Pontos Turísticos** (int)
- **Densidade Demográfica** (float)
- **PIB per Capita** (float)

### Funcionalidades da Parte 5:

- **Menu Interativo**: O usuário escolhe qual atributo utilizar para comparar as cartas.
- **Comparação de Atributos**: A lógica de comparação foi aprimorada para considerar regras específicas para cada atributo:
    - **População, Área, PIB, Pontos Turísticos, PIB per Capita**: A carta com o maior valor vence.
    - **Densidade Demográfica**: A carta com a menor densidade vence.

- **Exibição dos Resultados**: Após a escolha do atributo, o programa exibe qual carta venceu, incluindo o nome dos dois países, o atributo usado na comparação, os valores do atributo para cada carta e o vencedor.

## Parte 6: Comparação Avançada com Atributos Múltiplos

Na sexta parte do projeto, foi implementada uma lógica de comparação ainda mais avançada, permitindo que o jogador escolha **dois atributos** diferentes para comparar as cartas. Essa melhoria permite comparar cartas com base em dois atributos simultaneamente, calculando a soma dos valores desses atributos para decidir qual carta vence. Abaixo estão as principais funcionalidades implementadas:

### Como Funciona:

1. **Escolha de Dois Atributos**: O usuário pode escolher dois atributos numéricos diferentes para a comparação das cartas. Após o primeiro atributo ser escolhido, o segundo menu exibe apenas os atributos restantes, garantindo que o jogador não escolha o mesmo atributo duas vezes.
   
2. **Comparação de Atributos**: O sistema compara as cartas com base nos dois atributos escolhidos, de acordo com as seguintes regras:
    - **População, Área, PIB, Pontos Turísticos, PIB per Capita**: A carta com o maior valor em cada atributo vence.
    - **Densidade Populacional**: A carta com a menor densidade populacional vence (quanto menor a densidade, maior o poder).

3. **Soma dos Atributos**: Após as comparações individuais de cada atributo, os valores de ambos os atributos são somados para cada carta. A carta com a maior soma vence a rodada.

4. **Tratamento de Empates**: Caso a soma dos valores dos atributos para ambas as cartas seja igual, o sistema exibe a mensagem **"Empate!"**.

5. **Menus Dinâmicos**: Para garantir uma navegação fluida, o sistema implementa menus dinâmicos. Após o primeiro atributo ser escolhido, o segundo menu exibe apenas os atributos restantes, garantindo que o jogador não possa escolher o mesmo atributo duas vezes.

### Funcionalidades da Parte 6:

- **Escolha de Atributos para Comparação**: O jogador escolhe dois atributos para comparar as cartas, com restrições para não selecionar o mesmo atributo duas vezes.
- **Comparação de Dois Atributos**: O sistema compara as cartas com base nos dois atributos escolhidos, seguindo as regras mencionadas.
- **Cálculo da Soma dos Atributos**: Após a comparação, o sistema soma os valores dos atributos para cada carta e exibe a carta vencedora.
- **Tratamento de Empates**: Caso as somas sejam iguais, o sistema exibe **"Empate!"**.
- **Exibição Clara do Resultado**: O resultado é exibido de forma organizada, mostrando os dois atributos comparados, os valores para cada carta, a soma dos atributos e o vencedor.

### Exemplo de Comparação:

1. O jogador escolhe **População** e **PIB** para comparar as cartas.
2. O sistema compara os dois atributos e exibe os valores de **População** e **PIB** para cada carta.
3. A soma dos valores de **População** e **PIB** de cada carta é calculada.
4. A carta com a maior soma vence a rodada. Caso a soma seja igual, o sistema declara **"Empate!"**.


## Como Usar

### Passo 1: Compilação
Para compilar o código em um ambiente Linux ou Mac, execute o seguinte comando:

```bash
gcc -o super_trunfo super_trunfo.c
```
Para Windows, utilize o compilador de sua preferência.

### Passo 2: Execução

Após a compilação, execute o programa com o seguinte comando:

```bash
./super_trunfo
```

### Passo 3: Inserção de Dados

O programa pedirá para você inserir os seguintes dados para duas cartas:

- **Estado** (uma letra de 'A' a 'H')
- **Código da Carta** (letra do estado seguida de um número de 01 a 04, por exemplo: A01, B03)
- **Nome da Cidade**
- **População** (número inteiro)
- **Área** (em km², número flutuante)
- **PIB** (em bilhões de reais, número flutuante)
- **Pontos Turísticos** (número inteiro)

### Passo 4: Resultados

Após inserir os dados, o programa exibirá os resultados das comparações de todas as cartas, indicando qual carta venceu em cada atributo:

- **População**
- **Área**
- **PIB**
- **Pontos Turísticos**
- **Densidade Populacional**
- **PIB per Capita**
- **Super Poder**

## Contribuições

Se você desejar contribuir com melhorias ou sugestões para o código, sinta-se à vontade para abrir uma **issue** ou enviar um **pull request**.
