# 🔍 Port Scanner em C (Winsock)

Um scanner de portas simples desenvolvido em **C** utilizando a biblioteca **Winsock2**, com foco em aprendizado de redes e fundamentos de segurança da informação.

---

## 📌 Objetivo do Projeto

Este projeto foi criado com fins educacionais para entender melhor:

- Comunicação via sockets no Windows  
- Funcionamento de portas TCP  
- Conceitos básicos de varredura de rede (port scanning)  
- Estruturas de rede em C usando `sockaddr_in`

> ⚠️ Este projeto deve ser utilizado apenas em ambientes controlados e autorizados.

---

## ⚙️ Tecnologias Utilizadas

- Linguagem C  
- Winsock2 (Windows Socket API)  
- Biblioteca padrão `<stdio.h>`  
- `<ws2tcpip.h>` para manipulação de IPs  

---

## 🧠 Como funciona

O scanner tenta estabelecer conexão com portas específicas de um host.

### 🔄 Fluxo básico:

1. Inicializa a biblioteca Winsock (`WSAStartup`)
2. Define o endereço IP da máquina alvo
3. Percorre uma faixa de portas definida
4. Tenta conectar em cada porta
5. Se a conexão for bem-sucedida, a porta é considerada **aberta**

---

## 📂 Estrutura do Código

- `WSAStartup()` → inicializa o Winsock  
- `sockaddr_in vitima` → estrutura que armazena IP e porta do alvo  
- `inet_addr(ip)` → converte IP para formato de rede  
- `htons(port)` → converte porta para network byte order  
- `connect()` → tenta conexão com a porta  

---

## 🚀 Como compilar

No Windows (MinGW ou GCC):

```bash
gcc scanner.c -o scanner -lws2_32
