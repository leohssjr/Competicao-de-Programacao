Aqui está uma versão diferenciada em markdown:

---

# [InfraTranDF](https://github.com/unb-mds/2024-2-InfraTranDF)

O [InfraTranDF](https://github.com/unb-mds/2024-2-InfraTranDF) é uma iniciativa da disciplina **Métodos de Desenvolvimento de Software** com o propósito de criar uma plataforma intuitiva, onde cidadãos possam ter acesso e reportar informações sobre infrações e multas de trânsito no Distrito Federal. A ideia central é facilitar o acesso e a transparência, permitindo que usuários possam:

- **Acessar Informações sobre Infrações:** Consultar facilmente registros de infrações de trânsito, com detalhes como o tipo e descrição de cada ocorrência.
- **Reportar Incidentes:** Usuários podem relatar infrações observadas, anexando título, descrição e imagem, contribuindo ativamente para a segurança no trânsito.

Este projeto é distribuído como software livre, sob a licença [MIT](./LICENSE).

## 📑 Índice

- [InfraTranDF](#infratrandf)
  - [📑 Índice](#-índice)
  - [👤 Equipe](#-equipe)
  - [🚀 Primeiros Passos](#-primeiros-passos)
    - [🛠 Pré-requisitos](#-pré-requisitos)
    - [⚙️ Configuração do Ambiente](#️-configuração-do-ambiente)
    - [📦 Instalação das Dependências](#-instalação-das-dependências)
    - [▶️ Execução do Projeto](#️-execução-do-projeto)
      - [Sobre o Docker](#sobre-o-docker)
  - [📖 Documentação](#-documentação)
  - [🔗 Links Úteis](#-links-úteis)
    - [Diagrama de Arquitetura](#diagrama-de-arquitetura)
    - [Protótipo Visual](#protótipo-visual)

## 👤 Equipe


<div style="text-align: center;">
  <table>
    <tr>
      <td><img src="https://github.com/Arturhk05.png" width="150">  <br> [**_Artur Handow Krauspenhar_**](https://github.com/Arturhk05)</td>
      <td><img src="https://github.com/Diaxiz.png" width="150">  <br> [**_Diassis Bezerra Nascimento_**](https://github.com/Diaxiz)</td>
      <td><img src="https://github.com/Edumorais08.png" width="150">  <br> [**_Eduardo de Almeida Morais_**](https://github.com/Edumorais08)</td>
    </tr>
    <tr>
      <td><img src="https://github.com/fbressa.png" width="150">  <br> [**_Filipe Bressanelli Azevedo Filho_**](https://github.com/fbressa)</td>
      <td><img src="https://github.com/Guga301104.png" width="150">  <br> [**_Gustavo Gontijo Lima_**](https://github.com/Guga301104)</td>
      <td><img src="https://github.com/leohssjr.png" width="150">  <br> [**_Leonardo Henrique Sobral Sauma Junior_**](https://github.com/leohssjr)</td>
    </tr>
  </table>
</div>







## 🚀 Primeiros Passos

Para clonar este repositório, execute:

```bash
git clone https://github.com/unb-mds/2024-2-InfraTranDF.git
```

### 🛠 Pré-requisitos

Antes de rodar o projeto, instale as seguintes ferramentas:

- GNU Make 4.4 ou superior
- Python 3.10.12 e Pip 22.0.2 ou superior
- Node 20.9.0 e NPM 10.1.0 ou superior
- Docker Engine 24.0.6 e Docker Compose 2.21.0 ou superior

### ⚙️ Configuração do Ambiente

Para configurar o ambiente de desenvolvimento, execute:

```bash
make config
```

### 📦 Instalação das Dependências

Execute os seguintes comandos para instalar as dependências:

```bash
# Crie o ambiente virtual do Python
python3 -m venv api/env

# Ative o ambiente virtual
source api/env/bin/activate

# Instale as bibliotecas para Python e Node
make install
```

### ▶️ Execução do Projeto

Para iniciar o projeto, rode:

```bash
docker compose up
```

#### Sobre o Docker

Para usos específicos do Docker, veja abaixo:

```bash
# Executar em segundo plano
docker compose up -d

# Reconstruir imagens após mudanças no Dockerfile
docker compose up --build

# Remover volumes, se necessário
docker compose down -v
```

```bash
# Atualizar a base de dados para os períodos desejados
make updatedb-all

# Comando alternativo
docker exec django-api python3 ./manage.py updatedb -a
```

## 📖 Documentação

Acesse a documentação completa do projeto [aqui](https://unb-mds.github.io/2024-2-InfraTranDF/).

## 🔗 Links Úteis

### Diagrama de Arquitetura

- Visualize o diagrama de arquitetura do projeto [aqui](https://www.figma.com/).

### Protótipo Visual

- Para visualizar o protótipo do projeto, clique [aqui](https://www.figma.com/).
