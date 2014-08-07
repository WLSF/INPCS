/*

	Copyright (c) 2013 ipsBruno
	
*/

#include "main.h"


cell AMX_NATIVE_CALL p_SetNPCAngle(AMX * amx, cell * params) {

	SetNPCAngle((int)params[1], amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]), amx_ctof(params[5]));
	return true;
}

cell AMX_NATIVE_CALL p_GetNPCRate(AMX * amx, cell * params) {

	return GetNPCUpdate();
}


cell AMX_NATIVE_CALL p_SetNPCRate(AMX * amx, cell * params) {

	SetNPCUpdate((int)params[1]);
	return true;
}

cell AMX_NATIVE_CALL p_SetNPCVelocity(AMX* amx, cell* params)
{		
	
	SetNPCVelocity((int)params[1], amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));

	return true;
}


cell AMX_NATIVE_CALL p_SetNPCPos(AMX* amx, cell* params)
{		
	
	SetNPCPos((int)params[1], amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));

	return true;
}


cell AMX_NATIVE_CALL p_CreateBuild(AMX* amx, cell* params)
{		
	
	CreateBuild((int)params[1], amx_ctof(params[2]), amx_ctof(params[3]), amx_ctof(params[4]));

	return true;
}


cell AMX_NATIVE_CALL p_SaveBuild(AMX* amx, cell* params)
{		
	
	SaveBuild((int)params[1]);

	return true;
}


cell AMX_NATIVE_CALL p_SetNPCTime(AMX* amx, cell* params)
{		
	
	SetNPCTime((int)params[1], (int)params[2]);

	return true;
}

cell AMX_NATIVE_CALL p_SetNPCKey(AMX* amx, cell* params)
{		
	
	SetNPCKey((int)params[1], (int)params[2]);

	return true;
}



cell AMX_NATIVE_CALL p_GetNPCKey(AMX* amx, cell* params)
{		
	
	return GetNPCKey((int)params[1]);

}


cell AMX_NATIVE_CALL p_SetNPCArmour(AMX* amx, cell* params)
{		
	
	SetNPCArmour((int)params[1], (int)params[2]);

	return true;

}


cell AMX_NATIVE_CALL p_GetNPCArmour(AMX* amx, cell* params)
{	

	return GetNPCArmour((int)params[1]);

}


cell AMX_NATIVE_CALL p_SetNPCHealth(AMX* amx, cell* params)
{		
	
	SetNPCHealth((int)params[1], (int)params[2]);

	return true;

}



cell AMX_NATIVE_CALL p_GetNPCHealth(AMX* amx, cell* params)
{		
	
	return GetNPCHealth((int)params[1]);


}

cell AMX_NATIVE_CALL p_SetNPCWeapon(AMX* amx, cell* params)
{		
	
	return SetNPCWeapon((int)params[1], (int)params[2]);


}


cell AMX_NATIVE_CALL p_GetNPCWeapon(AMX* amx, cell* params)
{		
	
	return GetNPCWeapon((int)params[1]);


}



cell AMX_NATIVE_CALL p_GetNPCSpecialAction(AMX* amx, cell* params)
{		
	
	return GetNPCSpecialAction((int)params[1]);


}

cell AMX_NATIVE_CALL p_SetNPCUpDownKey(AMX* amx, cell* params)
{		
	
	return SetNPCUpDownKey((int)params[1],(int)params[2]);


}

cell AMX_NATIVE_CALL p_DeleteNPCRecord(AMX* amx, cell* params)
{

	return DeleteNPCRecord((int)params[1]);


}

cell AMX_NATIVE_CALL p_SetNPCSpecialAction(AMX* amx, cell* params)
{		
	
	return SetNPCSpecialAction((int)params[1],(int)params[2]);


}



AMX* amxGlobal;

void WINAPI PathProcess(cell * id);

cell AMX_NATIVE_CALL p_CalculatePath(AMX* amx, cell* params)
{
	if (processandoNPC[(int)params[1]] == 1) return false;

	amxGlobal = amx;


	idss[(int)params[1]] = (int)params[1];

	processandoNPC[(int)params[1]] = true;

	infos_0[(int)params[1]] = amx_ctof(params[2]);
	infos_1[(int)params[1]] = amx_ctof(params[3]);
	infos_2[(int)params[1]] = amx_ctof(params[4]);
	infos_3[(int)params[1]] = amx_ctof(params[5]);
	infos_4[(int)params[1]] = amx_ctof(params[6]);
	infos_5[(int)params[1]] = amx_ctof(params[7]);
	infos_6[(int)params[1]] = amx_ctof(params[8]);

	DWORD dwXuxaTHR;
	HANDLE hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)PathProcess, (void*)params[1], 0, &dwXuxaTHR);



	return true;
}



cell AMX_NATIVE_CALL p_IsRecordOpen(AMX* amx, cell* params)
{
	return IsRecordOpen((int)params[1]);
}


cell AMX_NATIVE_CALL p_FinishBuild(AMX* amx, cell* params)
{			
	return FinishBuild((int)params[1]);
}






AMX_NATIVE_INFO natives[ ] =
{
	{"SetNPCVelocity"		,		p_SetNPCVelocity		}	,
	{"SetNPCPos"		, 		p_SetNPCPos		}	,
	{"CreateBuild"		,	 	p_CreateBuild		}	,
	{"SaveBuild"		,		p_SaveBuild		}	,
	{"SetNPCTime"		,		p_SetNPCTime		}	,
	{"SetNPCKey"		,		p_SetNPCKey		}	,
	{"GetNPCKey"		,		p_GetNPCKey		}	,
	
	{"SetNPCArmour"		,		p_SetNPCArmour		}	,
	{"GetNPCArmour"		,		p_GetNPCArmour		}	,

	{"SetNPCHealth"		,		p_SetNPCHealth		}	,
	{"GetNPCHealth"		, 		p_GetNPCHealth		}	,

	{"SetNPCWeapon"		,		p_SetNPCWeapon		}	,
	{"GetNPCWeapon"		, 		p_GetNPCWeapon		}	,

	{"SetNPCSpecialAction"	,		p_SetNPCSpecialAction	}	,
	{"GetNPCSpecialAction"	,		p_GetNPCSpecialAction	}	,

	{"FinishBuild"		,		p_FinishBuild		}	,
	{ "GetNPCUpdateRate", p_GetNPCRate },
	{ "SetNPCUpdateRate", p_SetNPCRate },
	{"SetNPCAngle",				p_SetNPCAngle },
	{"SetNPCUpDownKey",			p_SetNPCUpDownKey},
	{ "MoveNPCThread", p_CalculatePath },
	{ "DeleteNPCRecord", p_DeleteNPCRecord },
	{ "IsRecordOpen", p_IsRecordOpen },
	{0			,		0			}

	
};


PLUGIN_EXPORT int PLUGIN_CALL AmxLoad( AMX *amx )
{
    return amx_Register(amx, natives, -1); 
}


PLUGIN_EXPORT int PLUGIN_CALL AmxUnload( AMX *amx )
{
    return AMX_ERR_NONE;
}

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() 
{
    return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES | SUPPORTS_PROCESS_TICK;
}


PLUGIN_EXPORT bool PLUGIN_CALL Load( void **ppData ) 
{	
    pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
    logprintf = (logprintf_t) ppData[PLUGIN_DATA_LOGPRINTF];

	logprintf("\n\nPlugin INPC !\n\t\tVersão %d carregada.\n\tDesenvolvido por Bruno da Silva @ ipsbr.net\n\n ", PLUGIN_VERSION );

	return true;
}


PLUGIN_EXPORT void PLUGIN_CALL Unload( )
{
	
	logprintf("\n\n\t\tPlugin INPC !\n\t\tVersão %d descarregada.\n\tDesenvolvido por Bruno da Silva @ ipsbr.net\n\n ", PLUGIN_VERSION );
}



PLUGIN_EXPORT void PLUGIN_CALL ProcessTick()
{

	if (GetTickCount() % updateRate == 0) {

		for (int i = 0; i != 500; i++) {

			if (threadNPC[i] == 1) {

				int idx;

				if (!amx_FindPublic(amxGlobal, "OnCompleteRec", &idx))
				{
					cell retVal;

					amx_Push(amxGlobal, i);
					amx_Exec(amxGlobal, &retVal, idx);

				}

				threadNPC[i] = false;
			}
		}
	}
}
