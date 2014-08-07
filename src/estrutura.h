
#pragma warning( disable : 4996 )

#define MAX_BLOCOS 10000

struct EstruturaApe {


	char script[73];
	char scriptFinal[73 * MAX_BLOCOS];

	int blocosUtilizados;
	
	FILE * arquivo;

	int tempo;

	short leftright;
	short updown;

	short addkey;

	float x;
	float y;
	float z;

	float wq;
	float xq;
	float yq;
	float zq;

	int vida;

	int colete;
	int armaid;

	int acao;
	
	float velocidadex;
	float velocidadey;
	float velocidadez;

	float surfx;
	float surfy;
	float surfz;
	short surfid;

	short animeid;
	short animeidx;

	int ultimoDado;
} ;

// Modificado/Atualizado - Willian
struct EstruturaCarro
{

	char script[73];
	char scriptFinal[73 * MAX_BLOCOS];

	int blocosUtilizados;
	
	FILE * arquivo;

	int tempo;

	short carro;

	short leftright;
	short updown;
	short addkey;

	float wq;
	float xq;
	float yq;
	float zq;

	float x;
	float y;
	float z;
	
	float velocidadex;
	float velocidadey;
	float velocidadez;
	
	float vidaveh;
	float vida;
	float colete;
	int armaid;
	short useless; //useless
	short useless2; //useless
};


struct EstruturaApe DadosRobo[1000];
struct EstruturaCarro DadosRoboVeh[1000];




/*
 *
 *
 * Fun��o EscreverRota
 * Essa fun��o recebe os dados passados pelos par�metros e monta um bloco inteiro com as informa��es dadas do NPC.
 * O arquivo � montado em Little Endian Encode
 *
 *
*/






/*
 * 
 * Vari�vel pAMX
 * Respons�vel por indicar qual script amx est� sendo processado no momento 
 *
*/


AMX * pAMX;




/*
 *
 * Declarar fun��o logprintf para registrar nos logs de samp_server.txt
 *
*/

typedef void (*logprintf_t)(char* format, ...);
logprintf_t logprintf;

extern void *pAMXFunctions;