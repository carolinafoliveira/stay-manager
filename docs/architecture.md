# Arquitetura do StayManager

## 1. Visão geral

O StayManager é um sistema de gerenciamento de hotel desenvolvido em C++23. O sistema será construído inicialmente em modo console e terá como objetivo controlar hóspedes, quartos, reservas e operações financeiras básicas.

## 2. Módulos do sistema

### Hóspedes

Responsável pelo cadastro, listagem, pesquisa, alteração e exclusão de hóspedes.

Dados principais:

- Código
- Nome
- CPF
- Telefone
- E-mail

### Quartos

Responsável pelo controle dos quartos disponíveis no hotel.

Dados principais:

- Número
- Tipo
- Quantidade de camas
- Valor da diária
- Status

Status possíveis:

- Livre
- Reservado
- Ocupado

### Reservas

Responsável pelo vínculo entre hóspede e quarto.

Dados principais:

- Código da reserva
- Código do hóspede
- Número do quarto
- Data de entrada
- Data de saída
- Quantidade de dias
- Valor total

### Financeiro

Responsável pelo cálculo de valores e relatórios simples.

Funções previstas:

- Calcular valor total da hospedagem
- Listar faturamento
- Exibir reservas finalizadas

## 3. Fluxo principal

1. O usuário acessa o menu principal.
2. Escolhe um módulo: hóspedes, quartos, reservas ou financeiro.
3. Realiza uma operação.
4. O sistema processa a solicitação.
5. O resultado é exibido na tela.
6. O usuário pode voltar ao menu principal ou encerrar o sistema.

## 4. Fluxo de reserva

1. O hóspede deve estar cadastrado.
2. O quarto deve estar cadastrado.
3. O quarto precisa estar livre.
4. O usuário informa o código do hóspede e o número do quarto.
5. O sistema calcula o valor total da reserva.
6. O quarto passa para o status Reservado.
7. A reserva é armazenada no sistema.

## 5. Estrutura inicial do projeto

```txt
stay-manager/
│
├── src/
│   └── main.cpp
│
├── docs/
│   └── architecture.md
│
├── data/
│
├── README.md
└── .gitignore
