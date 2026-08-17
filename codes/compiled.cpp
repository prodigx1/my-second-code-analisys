#include <string>
#include <iostream>
#include <windows.h>


int main(){
    //cria um handle
    HANDLE hFile = CreateFileA("teste.txt", GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hFile == INVALID_HANDLE_VALUE){

        return 1;
    }

    //cria o texto, escreve na ref do arquivo, fecha o handle.
    const char* texto = "Hi, this text";
    DWORD bytesEscritos; 
    WriteFile(hFile, texto, (DWORD)strlen(texto), &bytesEscritos, nullptr);
    CloseHandle(hFile);
    
    return 0;
}


