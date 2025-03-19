# Super Trunfo de Países - Cadastro de Cartas e Cálculos Adicionais

Este projeto simula a criação de um jogo **Super Trunfo** utilizando dados de cidades brasileiras. O programa permite ao usuário inserir informações sobre duas cidades e exibir esses dados de forma organizada. Na **Parte 2**, o programa foi aprimorado para incluir o cálculo da **densidade populacional** e **PIB per capita**.

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

1. **Densidade Populacional**: Representa o número de habitantes por quilômetro quadrado, calculada dividindo a população da cidade pela sua área.
2. **PIB per Capita**: Representa a riqueza média por pessoa na cidade, calculada dividindo o PIB da cidade pela sua população.

### Funcionalidades da Parte 2:
- O programa agora calcula a **densidade populacional** e o **PIB per capita** para cada cidade.
- Exibe as informações adicionais de forma clara e formatada com duas casas decimais.

# Parte 3: Batalha de Cartas no Super Trunfo

Na terceira parte do projeto, o sistema foi aprimorado para permitir a comparação entre duas cartas, levando em consideração todos os atributos numéricos, incluindo o cálculo do **Super Poder** de cada cidade. Além disso, o programa agora compara as cartas atributo por atributo e exibe quem venceu em cada comparação.

### Funcionalidades da Parte 3:
- **Super Poder**: Calculado somando todos os atributos numéricos, incluindo:
  - População
  - Área
  - PIB
  - Número de pontos turísticos
  - PIB per capita
  - O inverso da densidade populacional (quanto menor a densidade, maior o poder)
  
- **Comparação das Cartas**: As cartas são comparadas de acordo com os seguintes critérios:
  - **População, Área, PIB, Pontos Turísticos, PIB per Capita e Super Poder**: A carta com o maior valor vence.
  - **Densidade Populacional**: A carta com a menor densidade vence (quanto menor a densidade, maior o poder).
  
- **Exibição dos Resultados**: O programa exibe qual carta venceu para cada atributo.

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

