🔍 Port Scanner em C (Winsock)

Um scanner de portas simples desenvolvido em C utilizando a biblioteca Winsock2, com foco em aprendizado de redes e fundamentos de segurança da informação.

📌 Objetivo do Projeto

Este projeto foi criado com fins educacionais para entender melhor:

Comunicação via sockets no Windows
Funcionamento de portas TCP
Conceitos básicos de varredura de rede (port scanning)
Estruturas de rede em C usando sockaddr_in

⚠️ Este projeto deve ser utilizado apenas em ambientes controlados e autorizados.

⚙️ Tecnologias Utilizadas
Linguagem C
Winsock2 (Windows Socket API)
Biblioteca padrão <stdio.h>
<ws2tcpip.h> para manipulação de IPs
🧠 Como funciona

O scanner tenta estabelecer conexão com portas específicas de um host.

Fluxo básico:

Inicializa a biblioteca Winsock (WSAStartup)
Define o endereço IP da máquina alvo
Percorre uma faixa de portas definida
Tenta conectar em cada porta
Se a conexão for bem-sucedida, a porta é considerada aberta
📂 Estrutura do Código
WSAStartup() → inicializa o Winsock
sockaddr_in vitima → estrutura que armazena IP e porta do alvo
inet_addr(ip) → converte IP para formato de rede
htons(port) → converte porta para network byte order
connect() → tenta conexão com a porta
🚀 Como compilar

No Windows (MinGW ou GCC):

gcc scanner.c -o scanner -lws2_32
▶️ Como executar
scanner.exe <IP> <porta_inicial> <porta_final>

Exemplo:

scanner.exe 192.168.0.1 20 100
📊 Exemplo de saída
[+] Porta 22 aberta
[-] Porta 23 fechada
[+] Porta 80 aberta
📚 Conceitos aprendidos
Sockets TCP/IP
Estruturas de rede em C
Conversão de endianness (htons, inet_addr)
Inicialização de bibliotecas no Windows
Tratamento básico de conexões
🧪 Melhorias futuras
Multithread para acelerar o scan
Timeout personalizado para conexões
Suporte a Linux (BSD sockets)
Interface mais amigável
Exportação de resultados (TXT/JSON)
👨‍💻 Autor

Desenvolvido por Gustavo
Estudante de Cibersegurança focado em Pentest e Segurança Ofensiva.
