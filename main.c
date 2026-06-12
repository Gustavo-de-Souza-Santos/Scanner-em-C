#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int conexao;

void metodoScan(char ip[1000], int port){
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    struct sockaddr_in vitima;

    vitima.sin_family = AF_INET;
    vitima.sin_addr.s_addr = inet_addr(ip);
    vitima.sin_port = htons(port);

    // Criando socket
    conexao = socket(AF_INET, SOCK_STREAM, 0);

    if(conexao == INVALID_SOCKET){
        printf("Erro ao criar socket: %d\n", WSAGetLastError());
        WSACleanup();
        return;
    }

    // Fazendo a conexão
    int estado = connect(conexao, (struct sockaddr*)&vitima, sizeof(vitima));

    if(estado != 0){
        printf("Porta %d: FECHADA\n", port);
    } else {
        printf("Porta %d: ABERTA\n", port);
    }

    // Limpeza
    closesocket(conexao);
    WSACleanup();
}

int main(int argc, char *argv[]){
    char ip[1000];
    int port;

    printf("Passa o ip para scanear:\n");
    scanf("%s", ip);

    printf("Passa a porta para o scan:\n");
    scanf("%d", &port);

    metodoScan(ip, port);

    system("pause");

    return 0;
}
