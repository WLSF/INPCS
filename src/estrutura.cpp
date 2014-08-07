
int threadNPC[500];

//Modificação/Atualização - Willian
void EscreverRota_carro(char c[], int tempo, int veh, short leftright, short updown, short addkey, float q1, float q2, float q3, float q4, float x, float y, float z, float velocidadex, float velocidadey, float velocidadez, float carrovida, int vida, int colete, int armaid)
{
	c[0] = (tempo & 0x000000FF);
    c[1] = (tempo & 0x0000FF00) >> 8;
    c[2] = (tempo & 0x00FF0000) >> 16;
    c[3] = (tempo & 0xFF000000) >> 24;

	c[4] = (veh & 0x00FF);
	c[5] = (veh & 0xFF00) >> 8;

	c[6] = (leftright & 0x00FF);
    c[7] = (leftright & 0xFF00) >> 8;
 
    c[8] = (updown & 0x00FF);
    c[9] = (updown & 0xFF00) >> 8;
 
    c[10] = (addkey & 0x00FF);
    c[11] = (addkey & 0xFF00) >> 8;

	char * fsq1 = (char*) &q1;
 
    c[12] = fsq1[0];
    c[13] = fsq1[1];
    c[14] = fsq1[2];
    c[15] = fsq1[3];
 
    char * fsq2 = (char*) &q2;
 
    c[16] = fsq2[0];
    c[17] = fsq2[1];
    c[18] = fsq2[2];
    c[19] = fsq2[3];
 
    char * fsq3 = (char*) &q3;
 
    c[20] = fsq3[0];
    c[21] = fsq3[1];
    c[22] = fsq3[2];
    c[23] = fsq3[3];

	char * fsq4 = (char*) &q4;
 
    c[24] = fsq4[0];
    c[25] = fsq4[1];
    c[26] = fsq4[2];
    c[27] = fsq4[3];

	char * fstrx = (char*) &x;
 
    c[28] = fstrx[0];
    c[29] = fstrx[1];
    c[30] = fstrx[2];
    c[31] = fstrx[3];
 
    char * fstry = (char*) &y;
 
    c[32] = fstry[0];
    c[33] = fstry[1];
    c[34] = fstry[2];
    c[35] = fstry[3];

    char * fstrz = (char*) &z;
 
    c[36] = fstrz[0];
    c[37] = fstrz[1];
    c[38] = fstrz[2];
    c[39] = fstrz[3]; 

	char * fstrvx = (char*) &velocidadex;
 
    c[40] = fstrvx[0];
    c[41] = fstrvx[1];
    c[42] = fstrvx[2];
    c[43] = fstrvx[3];
 
	char * fstrvy = (char*) &velocidadey;
 
    c[44] = fstrvy[0];
    c[45] = fstrvy[1];
    c[46] = fstrvy[2];
    c[47] = fstrvy[3];
 
    char * fstrvz = (char*) &velocidadez;
 
    c[48] = fstrvz[0];
    c[49] = fstrvz[1];
    c[50] = fstrvz[2];
    c[51] = fstrvz[3]; 

	char * vidacarro = (char*) &carrovida;
 
    c[52] = vidacarro[0];
    c[53] = vidacarro[1];
    c[54] = vidacarro[2];
    c[55] = vidacarro[3]; 

	c[56] = vida;
	c[57] = colete;
	c[58] = armaid;

	for (int i = 59; i < 67; ++i)
		c[i] = 0;
}

void EscreverRota(char c[], int tempo, short leftright, short updown, short addkey, float x, float y, float z, float wq, float zq, int vida, int colete, int armaid, int acao, float velocidadex, float velocidadey, float velocidadez, float surfx, float surfy, float surfz, short surfid, short animeid, short animeidx) {

        c[0] = (tempo & 0x000000FF);
        c[1] = (tempo & 0x0000FF00) >> 8;
        c[2] = (tempo & 0x00FF0000) >> 16;
        c[3] = (tempo & 0xFF000000) >> 24;
 
        c[4] = (leftright & 0x00FF);
        c[5] = (leftright & 0xFF00) >> 8;
 
        c[6] = (updown & 0x00FF);
        c[7] = (updown & 0xFF00) >> 8;
 
        c[8] = (addkey & 0x00FF);
        c[9] = (addkey & 0xFF00) >> 8;
 
 
        char * fstrx = (char*) &x;
 
        c[10] = fstrx[0];
        c[11] = fstrx[1];
        c[12] = fstrx[2];
        c[13] = fstrx[3];
 
        char * fstry = (char*) &y;
 
        c[14] = fstry[0];
        c[15] = fstry[1];
        c[16] = fstry[2];
        c[17] = fstry[3];
 
        char * fstrz = (char*) &z;
 
        c[18] = fstrz[0];
        c[19] = fstrz[1];
        c[20] = fstrz[2];
        c[21] = fstrz[3];      
 
        char * fstrw = (char*) &wq;
 
        c[22] = fstrw[0];
        c[23] = fstrw[1];
        c[24] = fstrw[2];
        c[25] = fstrw[3];
        float null = 0.0;
 
        char * fstrn = (char*) &null;
 
        c[26] = fstrn[0];
        c[27] = fstrn[1];
        c[28] = fstrn[2];
        c[29] = fstrn[3];  
 
        c[30] = fstrn[0];
        c[31] = fstrn[1];
        c[32] = fstrn[2];
        c[33] = fstrn[3];
 
        char * fstrzq = (char*) &zq;    
 
        c[34] = fstrzq[0];
        c[35] = fstrzq[1];
        c[36] = fstrzq[2];
        c[37] = fstrzq[3];  
 
        c[38] = vida;
        c[39] = colete;      
        c[40] = armaid;
        c[41] = acao;
 
        char * fstrvx = (char*) &velocidadex;
        c[42] = fstrvx[0];
        c[43] = fstrvx[1];
        c[44] = fstrvx[2];
        c[45] = fstrvx[3];  
 
 
        char * fstrvy = (char*) &velocidadey;
        c[46] = fstrvy[0];
        c[47] = fstrvy[1];
        c[48] = fstrvy[2];
        c[49] = fstrvy[3];  
 
        char * fstrvz = (char*) &velocidadez;
        c[50] = fstrvz[0];
        c[51] = fstrvz[1];
        c[52] = fstrvz[2];
        c[53] = fstrvz[3];  
 
        for(int i = 54; i <68; i++) c[i] = 0;
 
        c[68] = (animeid & 0x00FF);
        c[69] = (animeid & 0xFF00) >> 8;
        c[70] = (animeidx & 0x00FF);
        c[71] = (animeidx & 0xFF00) >> 8;
 
 
}

int updateRate = 50;

bool SetNPCUpdate(int rate) {
	updateRate = rate;
	return true;
}

int GetNPCUpdate() {
	return updateRate;
}

bool DeleteNPCRecord(int npcid) {

	char nomeArquivo[44];

	sprintf(nomeArquivo, "npcmodes/recordings/%dinpc.rec", npcid);

	FILE* fp = fopen(nomeArquivo, "rb");

	if (fp != NULL)
	{
		fclose(fp);
		if (remove(nomeArquivo) != 0) {
			return true;
		}
		return false;
	}

	return false;
}

bool SetNPCPos(int npcid, float  x, float y, float  z) {

	DadosRobo[npcid].x = x ;
	DadosRobo[npcid].y = y ;
	DadosRobo[npcid].z = z ;

	return true;
}


void strcatex( char string[], char texto[], int max, int pos = 0)
{
	for(int i = pos, j = 0; j != max; i++ , j++ )  string[i] = texto[j];
	
}



bool SetNPCVelocity(int npcid, float  x, float y, float  z) {

	DadosRobo[npcid].velocidadex = x;
	DadosRobo[npcid].velocidadey = y;
	DadosRobo[npcid].velocidadez = z;

	return true;
}


bool CreateBuild(int npcid,  float x, float y, float z) 
{
	
			
	if(NULL != DadosRobo[npcid].arquivo) {
		printf("Há arquivo(s) aberto(s) neste NPC ID: %d", npcid);
	}

	SetNPCPos(npcid, x, y, z);

	DadosRobo[npcid].scriptFinal[0] = (char)  0xE8;
	DadosRobo[npcid].scriptFinal[1] = (char)  0x03;
	DadosRobo[npcid].scriptFinal[4] = (char)  0x02;

	DadosRobo[npcid].ultimoDado = 8;

	return true;
}

bool SetNPCAngle(int npcid, float w,float x, float y, float z) {

	DadosRobo[npcid].wq = w;
	DadosRobo[npcid].xq = x;
	DadosRobo[npcid].yq = y;
	DadosRobo[npcid].zq = z;

	return true;
}

bool SaveBuild(int npcid) {

	if(DadosRobo[npcid].blocosUtilizados > MAX_BLOCOS - 1) {

		logprintf("Erro ao salvar o bloco: Limite de blocos atingido %d NPC ID: %d", MAX_BLOCOS, npcid);
		return false;
	}
 
	char script[73];

	EscreverRota(
		script,

		DadosRobo[npcid].tempo,

		0,

		DadosRobo[npcid].updown,
		
		DadosRobo[npcid].addkey,

		DadosRobo[npcid].x,
		DadosRobo[npcid].y,
		DadosRobo[npcid].z,

		DadosRobo[npcid].wq,
	//	DadosRobo[npcid].xq,
	//	DadosRobo[npcid].yq,
		DadosRobo[npcid].zq,

		DadosRobo[npcid].vida,
		DadosRobo[npcid].colete,
		DadosRobo[npcid].armaid,
		DadosRobo[npcid].acao,

		DadosRobo[npcid].velocidadex,
		DadosRobo[npcid].velocidadey, 
		DadosRobo[npcid].velocidadez,

		0.0, 0.0, 0.0,
		0,   0,		0
	);
	

	DadosRobo[npcid].blocosUtilizados ++;
		

	strcatex( DadosRobo[npcid].scriptFinal, script, 72, DadosRobo[npcid].ultimoDado);

	DadosRobo[npcid].ultimoDado += 72;


	return true;
}


bool SetNPCUpDownKey(int npcid, int time) {

	DadosRobo[npcid].updown = time;

	return true;
}

bool GiveNPCTime(int npcid, int time) {

	DadosRobo[npcid].tempo += time;

	return true;
}

bool SetNPCTime(int npcid, int time) {

	DadosRobo[npcid].tempo = time;

	return true;
}

bool SetNPCKey(int npcid, int key) {

	DadosRobo[npcid].addkey = key;

	return true;
}


int GetNPCKey(int npcid) {
	return DadosRobo[npcid].addkey;
}

bool SetNPCArmour(int npcid, int armour){
	DadosRobo[npcid].colete = armour;
	return true;
}

int GetNPCArmour(int npcid){
	return DadosRobo[npcid].colete;
}

bool SetNPCSpecialAction(int npcid, int action){
	DadosRobo[npcid].acao = action;
	return true;
}

int GetNPCSpecialAction(int npcid){
	return DadosRobo[npcid].acao;
}

bool SetNPCWeapon(int npcid, int wep){
	DadosRobo[npcid].armaid = wep;
	return true;
}

int GetNPCWeapon(int npcid){
	return DadosRobo[npcid].armaid ;
}

bool IsRecordOpen(int npcid){
	return (NULL != DadosRobo[npcid].arquivo);
}

bool SetNPCHealth(int npcid, int health){
	DadosRobo[npcid].vida = health;
	return true;
}


int GetNPCHealth(int npcid){
	return DadosRobo[npcid].vida;
}

bool FinishBuild(int npcid) {	

	if(NULL != DadosRobo[npcid].arquivo) {
		logprintf("Há arquivo aberto neste NPC: %d", npcid);
		return false;
	}
 
	char nomeArquivo [44];

	sprintf(nomeArquivo, "npcmodes/recordings/%dinpc.rec", npcid);

	DadosRobo[npcid].arquivo = fopen(nomeArquivo, "wb");

	if(NULL == DadosRobo[npcid].arquivo) {
		logprintf("Erro ao abrir arquivo do NPC: %d", npcid);
		return false;
	}
	

	for(int i = 0, max = DadosRobo[npcid].ultimoDado; i !=  max; i++ )  {
		
		fputc ( DadosRobo[npcid].scriptFinal[i] , DadosRobo[npcid].arquivo );
		DadosRobo[npcid].scriptFinal[i] = 0;
	}

	fclose(DadosRobo[npcid].arquivo);

	DadosRobo[npcid].blocosUtilizados = 0;

	DadosRobo[npcid].arquivo = NULL;

	return true;
}


#define PI					(314159265/100000000)
#define TODEGREES			(3.14159265359f / 180.0f)
#define TORADIAN			(180.0f / 3.14159265359f)


void EulerToQuaternion(float angle, float &w, float &x, float &y, float &z)
{
	float c1; float c2; float c3;
	float s1; float s2; float s3;
	c1 = 1.0;
	c2 = cos(angle / 2 / TORADIAN);
	c3 = 1.0;
	s1 = 0.0;
	s2 = sin(angle / 2 / TORADIAN);
	s3 = 0.0;
	w = (c1*c2*c3) - (s1*s2*s3);
	x = (s1*s2*c3) + (c1*c2*s3);
	y = (s1*c2*c3) + (c1*s2*s3);
	z = (c1*s2*c3) - (s1*c2*s3);
}

void EulerToQuaternion(float h, float a, float b, float &w, float &x, float &y, float &z) {
	float c1 = cos(h / 2 / TORADIAN);
	float s1 = sin(h / 2 / TORADIAN);
	float c2 = cos(a / 2 / TORADIAN);
	float s2 = sin(a / 2 / TORADIAN);
	float c3 = cos(b / 2 / TORADIAN);
	float s3 = sin(b / 2 / TORADIAN);
	w = c1*c2*c3 - s1*s2*s3;
	x = c1*c2*s3 + s1*s2*c3;
	y = s1*c2*c3 + c1*s2*s3;
	z = c1*s2*c3 - s1*c2*s3;

}


void WINAPI PathProcess(cell * id)
{
	int npcid = (int)id;
	
	


	npcid = idss[npcid];
	float x1 = infos_0[npcid];
	float y1 = infos_1[npcid];
	float z1 = infos_2[npcid];

	float x2 = infos_3[npcid];
	float y2 = infos_4[npcid];
	float z2 = infos_5[npcid];
	float velocity = infos_6[npcid];

	
	// em construção


	float distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) + (z2 - z1)*(z2 - z1));

	float angulo = atan2(y2 - y1, x2 - x1);

	float xvel = (velocity * cos(angulo));
	float yvel = (velocity * sin(angulo));
	float zvel = 0.0;

	angulo = (-angulo) / TODEGREES + 90.0F;

	int tempo = (int)(distancia / velocity);

	int espacos = tempo / updateRate;


	float xrate = (x2 - x1) / espacos;
	float yrate = (y2 - y1) / espacos;
	float zrate = (z2 - z1) / espacos;

	tempo = tempo / espacos;

	int atual = 0;

	CreateBuild(npcid, x1, y1, z1);

	float w, x, y, z;
	EulerToQuaternion(angulo, w, x, y, z);

	SetNPCVelocity(npcid, xvel, yvel, 0.0);
	SetNPCAngle(npcid, w, x, y, z);
	SetNPCUpDownKey(npcid, 0x00FF);


	while (atual <= espacos) {		
		if (atual == espacos) {
			SetNPCVelocity(npcid, 00.0, 00.0, 00.0);
			SetNPCUpDownKey(npcid, 0);
			SetNPCPos(npcid, x2, y2, z2);
			SaveBuild(npcid);
			break;
		}

		SetNPCPos(npcid, x1 + xrate * atual, y1 + yrate * atual, z1 + zrate * atual);
		SetNPCTime(npcid, updateRate * atual);
		SaveBuild(npcid);

		atual++;


	}
	
	FinishBuild(npcid);

	threadNPC[npcid] = true;
	processandoNPC[npcid] = false;
}
