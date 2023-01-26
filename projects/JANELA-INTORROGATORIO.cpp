#include <windows.h>
#include <stdlib.h>
#include <math.h>

//---------------------------------------------------------------------------------------------------------------------------------
//-------------------- Declara��o das vari�veis --------------------------------------------------------------------------------(1)

char resposta[2] = "0";
int contador = 0;

//---------------------------------------------------------------------------------------------------------------------------------
//-------------------- Declarando os bot�es e as caixas de texto que ser�o utilizados ------------------------------------------(2)

#define BUTTONOK 10
HINSTANCE g_inst;
HWND caixa_editavel_1, caixa_editavel_2, caixa_editavel_3, caixa_editavel_4, caixa_editavel_5, botao;

//---------------------------------------------------------------------------------------------------------------------------------
//-------------------- Aqui n�s criamos os bot�es e as caixas edit�veis --------------------------------------------------------(3)

void DrawComponents(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {

CreateWindowEx (0,"STATIC","Telefonou para a v�tima?",WS_VISIBLE|WS_CHILD,30, 20, 200, 20,hwnd,NULL,g_inst,NULL);
caixa_editavel_1 = CreateWindowEx (WS_EX_CLIENTEDGE,"EDIT","",WS_VISIBLE|WS_CHILD|WS_BORDER,30, 50, 200, 20,hwnd,NULL,g_inst,NULL);

CreateWindowEx (0,"STATIC","Esteve no local do crime?",WS_VISIBLE|WS_CHILD,30, 80, 200, 20,hwnd,NULL,g_inst,NULL);
caixa_editavel_2 = CreateWindowEx (WS_EX_CLIENTEDGE,"EDIT","",WS_VISIBLE|WS_CHILD|WS_BORDER,30, 110, 200, 20,hwnd,NULL,g_inst,NULL);

CreateWindowEx (0,"STATIC","Mora perto da v�tima?",WS_VISIBLE|WS_CHILD,30, 140, 200, 20,hwnd,NULL,g_inst,NULL);
caixa_editavel_3 = CreateWindowEx (WS_EX_CLIENTEDGE,"EDIT","",WS_VISIBLE|WS_CHILD|WS_BORDER,30, 170, 200, 20,hwnd,NULL,g_inst,NULL);

CreateWindowEx (0,"STATIC","Devia para a v�tima?",WS_VISIBLE|WS_CHILD,30, 200, 200, 20,hwnd,NULL,g_inst,NULL);
caixa_editavel_4 = CreateWindowEx (WS_EX_CLIENTEDGE,"EDIT","",WS_VISIBLE|WS_CHILD|WS_BORDER,30, 230, 200, 20,hwnd,NULL,g_inst,NULL);

CreateWindowEx (0,"STATIC","Trabalhou com a v�tima?",WS_VISIBLE|WS_CHILD,30, 260, 200, 20,hwnd,NULL,g_inst,NULL);
caixa_editavel_5 = CreateWindowEx (WS_EX_CLIENTEDGE,"EDIT","",WS_VISIBLE|WS_CHILD|WS_BORDER,30, 290, 200, 20,hwnd,NULL,g_inst,NULL);

botao = CreateWindowEx (0,"BUTTON","Mostrar nome",WS_VISIBLE|WS_CHILD,30, 320, 200, 20,hwnd,(HMENU)BUTTONOK,g_inst,NULL);

}


//------------------------------------- DAQUI PRA BAIXO N�O PRECISA ALTERAR ----------------------------------------------------
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


//-------------------- Configura��es gerais da janela - N�O ALTERAR ------------------------------------------------------------

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain (HINSTANCE hThisInstance,
HINSTANCE hPrevInstance,
LPSTR lpszArgument,
int nFunsterStil)
{

HWND hwnd;          // O objeto para indicar a janela
MSG messages;       // Objeto mensagem do Windows para controlar o acionamento de bot�es
WNDCLASSEX wincl;   // O objeto para criar a janela

wincl.hInstance     = hThisInstance;
wincl.lpszClassName = "WindowsAppl"; // Nome da classe da janela
wincl.lpfnWndProc   = WindowProcedure;
wincl.style         = CS_DBLCLKS;
wincl.cbSize        = sizeof (WNDCLASSEX);
wincl.hIcon         = LoadIcon (hThisInstance, "A");
wincl.hIconSm       = LoadIcon (hThisInstance, "A");      // Janela com icone default do Windows
wincl.hCursor       = LoadCursor (NULL, IDC_ARROW);          //Cursor default
wincl.lpszMenuName  = NULL;
wincl.cbClsExtra    = 0;
wincl.cbWndExtra    = 0;
wincl.hbrBackground = (HBRUSH)(COLOR_WINDOW+2);

if (!RegisterClassEx (&wincl))  // Se o registro da classe foi mal-sucedido return 0
return 0;

//-------------------- Comando que habilita a cria��o da janela - N�O ALTERAR --------------------------------------------------

hwnd = CreateWindowEx (0,"WindowsAppl","Interrogat�rio",WS_OVERLAPPEDWINDOW,350,250,300,400,HWND_DESKTOP,NULL,hThisInstance,NULL);
ShowWindow (hwnd, nFunsterStil);                // Mostrar a janela

//-------------------- Configura��es gerais de retorno de mensagens - N�O ALTERAR ----------------------------------------------

while (GetMessage (&messages, NULL, 0, 0)) // Recuperar mensagens
{
TranslateMessage(&messages);
DispatchMessage(&messages);
}
return messages.wParam;
}
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
switch (message)
{
case WM_CREATE: // Cria��o da janela
DrawComponents(hwnd,message,wParam,lParam);
break;

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//------------------------------------- AGORA FAREMOS ALGUMAS ALTERA��ES --------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------
//-------------------- Criando a l�gica do programa --------------------------------------------------------------------------(4)

case WM_COMMAND:   // Interpreta��o da janela

if ((HIWORD(wParam) == BN_CLICKED)) //se o bot�o for clicado
{
	

//Aqui est� a l�gica do programa -------	

//------------------- Primeira pergunta -----------------------------------------------
SendMessage((HWND)caixa_editavel_1,(UINT) EM_GETLINE,(WPARAM) 1,(LPARAM) &resposta); //pega o valor digitado na caixa_editavel e armazena na vari�vel n�mero
if((strcmp(resposta,"s")==0) or (strcmp(resposta,"sim")==0) or (strcmp(resposta,"S")==0)){
	contador = contador + 1;
}

//------------------- Segunda pergunta ------------------------------------------------
SendMessage((HWND)caixa_editavel_2,(UINT) EM_GETLINE,(WPARAM) 1,(LPARAM) &resposta); //pega o valor digitado na caixa_editavel e armazena na vari�vel n�mero
if((strcmp(resposta,"s")==0) or (strcmp(resposta,"sim")==0) or (strcmp(resposta,"S")==0)){
	contador = contador + 1;
}

//------------------- Terceira pergunta ------------------------------------------------
SendMessage((HWND)caixa_editavel_3,(UINT) EM_GETLINE,(WPARAM) 1,(LPARAM) &resposta); //pega o valor digitado na caixa_editavel e armazena na vari�vel n�mero
if((strcmp(resposta,"s")==0) or (strcmp(resposta,"sim")==0) or (strcmp(resposta,"S")==0)){
	contador = contador + 1;
}

//------------------- Quarta pergunta ------------------------------------------------
SendMessage((HWND)caixa_editavel_4,(UINT) EM_GETLINE,(WPARAM) 1,(LPARAM) &resposta); //pega o valor digitado na caixa_editavel e armazena na vari�vel n�mero
if((strcmp(resposta,"s")==0) or (strcmp(resposta,"sim")==0) or (strcmp(resposta,"S")==0)){
	contador = contador + 1;
}

//------------------- Quinta pergunta ------------------------------------------------
SendMessage((HWND)caixa_editavel_5,(UINT) EM_GETLINE,(WPARAM) 1,(LPARAM) &resposta); //pega o valor digitado na caixa_editavel e armazena na vari�vel n�mero
if((strcmp(resposta,"s")==0) or (strcmp(resposta,"sim")==0) or (strcmp(resposta,"S")==0)){
	contador = contador + 1;
}

//----------------- Verificar a situa��o do interrogado ----------------------------------

if(contador==0 or contador==1){
	MessageBox (NULL,"Inocente","Resultado da investiga��o", MB_OK);
}else if(contador==2){
	MessageBox (NULL,"Suspeito","Resultado da investiga��o", MB_OK);
}else if(contador==3 or contador==4){
	MessageBox (NULL,"C�mplice","Resultado da investiga��o", MB_OK);
}else if(contador==5){
	MessageBox (NULL,"Assassino","Resultado da investiga��o", MB_OK);
}


}
break;


//------------------------------------- DAQUI PRA BAIXO N�O PRECISA ALTERAR ----------------------------------------------------
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


//-------------------- Comando para encerrar a janela - N�O ALTERAR -------------------------------------------------------------

case WM_DESTROY:   // Destrui��o da janela
PostQuitMessage (0);
break;
default:
return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}
