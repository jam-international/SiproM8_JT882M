// =========================================================
// SIPRO - M32
//
//  Definizione delle variabili
//
// File DefVar.h
// =========================================================


// ============================================================================
//      INCLUDE
// ============================================================================

#include "DefCuci.h"


// ============================================================================
//      COSTANTI
// ============================================================================

    // codifica pagine HMI
#define     MAIN    	1001    // [INT]
#define     TOOLS    	1002    // [INT]
#define     MOD_PROG   	1003    // [INT]


// Definizioni bit
#define     ON    		1       // [INT]
#define     OFF    		0       // [INT]

// Definizione di asse inesistente
#define     AX_NULL     0       // [INT]

// Definizioni assi
///////////////////////////////////////////////////////////////////////
// NOTA: per escludere l'asse C di rotazione bisogna definire:
#define     C1_AsseC    0
#define     C1_AsseC_DW 0
#define     C2_AsseC    0
#define     C2_AsseC_DW 0
//////////////////////////////////////////////////////////////////////
#define     C1_AsseX    1       // [INT] Cucitrice 1 - Asse X
#define     C1_AsseY    2       // [INT] Cucitrice 1 - Asse Y
#define     C1_AsseAGO  3       // [INT] Cucitrice 1 - Asse AGO
#define     C1_AsseCRO  4       // [INT] Cucitrice 1 - Asse CROCHET
#define     C1_AsseCAR  5       // [INT] Cucitrice 1 - Asse CARICATORE

#define     C2_AsseX    6       // [INT] Cucitrice 2 - Asse X
#define     C2_AsseY    7       // [INT] Cucitrice 2 - Asse Y
#define     C2_AsseAGO  8       // [INT] Cucitrice 2 - Asse AGO
#define     C2_AsseCRO  9       // [INT] Cucitrice 2 - Asse CROCHET
#define     C2_AsseCAR  10      // [INT] Cucitrice 2 - Asse CARICATORE



// Definizioni canali contesti e matrici
#define     C1_CHN              1       // [INT] Cucitrice 1 - canale 1
#define     C2_CHN              2       // [INT] Cucitrice 2 - canale 2
#define     SUP_CHN             3       // [INT] Supervisore - canale 3


// Definizioni per camme
#define     CAM_MODULE          360     // [INT] Modulo per il calcolo delle camme

#define     C1_ID_CAM_FUORI_ING 1       // [INT] Id camma fuori ingombro ( senza anticipi )
#define     C1_MODE_FUORI_ING   101     // [INT] Mode camma fuori ingombro - uscita su VB

#define     C1_ID_CAM_AGO_ALTO  2       // [INT] Id camma per stop ago alto
#define     C1_MODE_AGO_ALTO    101     // [INT] Mode camma fuori ingombro - uscita su VB

#define   	C1_ID_APRITENS      5       // [INT] Id camma apitensione
#define   	C1_MODE_APRITENS    101     // [INT] Mode camma apritensione
#define   	C1_VB_APRITENS      2      // [INT] VB apritensione
#define   	C1_ENA_APRITENS     1001    // [INT] Indice VB abilitazione camma apritensione ( vb1001 )

#define     C1_ID_COLTELLO      6       // [INT] Id camma coltello
#define     C1_MODE_COLTELLO    1       // [INT] Mode camma coltello
#define     C1_OUT_COLTELLO     9      // [INT] DigOut coltello
#define     C1_ENA_COLTELLO     1001    // [INT] Indice VB abilitazione camma coltello ( vb1001 )

#define   	C1_ID_BLOCCO_FILO_INI      7       	// [INT] Id camma blocco filo durante primo giro
#define   	C1_MODE_BLOCCO_FILO_INI    101     	// [INT] Mode camma blocco filo durante primo giro
#define   	C1_VB_BLOCCO_FILO_INI      13      	// [INT] VB blocco filo durante primo giro
#define   	C1_ENA_BLOCCO_FILO_INI     1039    	// [INT] Indice VB abilitazione camma blocco filo durante primo giro ( vb1001 )

#define   	C1_ID_BLOCCO_FILO_END      8       	// [INT] Id camma blocco filo durante primo giro
#define   	C1_MODE_BLOCCO_FILO_END    101     	// [INT] Mode camma blocco filo durante primo giro
#define   	C1_VB_BLOCCO_FILO_END      14      	// [INT] VB blocco filo durante primo giro
#define   	C1_ENA_BLOCCO_FILO_END     1001    	// [INT] Indice VB abilitazione camma blocco filo durante primo giro ( vb1001 )


#define     C2_ID_CAM_FUORI_ING 11      // [INT] Id camma fuori ingombro ( senza anticipi )
#define     C2_MODE_FUORI_ING   101     // [INT] Mode camma fuori ingombro - uscita su VB

#define     C2_ID_CAM_AGO_ALTO  12      // [INT] Id camma per stop ago alto
#define     C2_MODE_AGO_ALTO    101     // [INT] Mode camma fuori ingombro - uscita su VB

#define   	C2_ID_APRITENS      15      // [INT] Id camma apitensione
#define   	C2_MODE_APRITENS    101     // [INT] Mode camma apritensione
#define   	C2_VB_APRITENS      3     	// [INT] DigOut apritensione
#define   	C2_ENA_APRITENS     2001    // [INT] Indice VB abilitazione camma apritensione ( vb2001 )

#define     C2_ID_COLTELLO      16      // [INT] Id camma coltello
#define     C2_MODE_COLTELLO    1       // [INT] Mode camma coltello
#define     C2_OUT_COLTELLO     41    // [INT] DigOut coltello
#define     C2_ENA_COLTELLO     2001    // [INT] Indice VB abilitazione camma coltello ( vb2001 )

#define   	C2_ID_BLOCCO_FILO_INI      17       // [INT] Id camma blocco filo durante primo giro
#define   	C2_MODE_BLOCCO_FILO_INI    101     	// [INT] Mode camma blocco filo durante primo giro
#define   	C2_VB_BLOCCO_FILO_INI      15      	// [INT] VB blocco filo durante primo giro
#define   	C2_ENA_BLOCCO_FILO_INI     2039    	// [INT] Indice VB abilitazione camma blocco filo durante primo giro ( vb1001 )

#define   	C2_ID_BLOCCO_FILO_END      18       // [INT] Id camma blocco filo durante primo giro
#define   	C2_MODE_BLOCCO_FILO_END    101     	// [INT] Mode camma blocco filo durante primo giro
#define   	C2_VB_BLOCCO_FILO_END      16      	// [INT] VB blocco filo durante primo giro
#define   	C2_ENA_BLOCCO_FILO_END     2001    	// [INT] Indice VB abilitazione camma blocco filo durante primo giro ( vb1001 )

// Definizioni costanti
#define     C1_NumPuntiRottFilo        14000    // [DINT] punti impostati rottura filo

// Funzioni PLC
#define     PLC_VN_TO_VB        15      // [DINT] Copia una vn su 16 vb consecutive
#define     PLC_READ_FORK_VAR   28      // [DINT] Lettura variabile fork
#define     PLC_WRITE_FORK_VAR  29      // [DINT] Scrittura variabile fork
#define     PLC_READ_AX_QUOTE   70      // [DINT] Lettura quota asse
#define     PLC_WRITE_AX_QUOTE  71      // [DINT] Set quota asse
#define     PLC_ROLLOVER_AX     72      // [DINT] Rollover asse
#define     PLC_MOVE_AX_TONDO   73      // [DINT] Movimento asse tondo
#define     PLC_MOVE_AX         74      // [DINT] Movimento asse
#define     PLC_STOP_AX         75      // [DINT] Stop asse
#define     PLC_CHG_QUO_OBJ_AX  78      // [DINT] Modifica quota obiettivo asse
#define     PLC_SET_EMERGENZA   90      // [DINT] Set emergenza
#define     PLC_ENABLE_FOLLOW   105     // [DINT]  Abilitazione inseguimento
#define     PLC_DISABLE_FOLLOW  106     // [DINT]  Disabilitazione inseguimento
#define     PLC_RESET_ALL_CAM   120     // [DINT] Reset di tutte le camme digitali
#define     PLC_INIT_ONE_CAM    121     // [DINT] Inizializzazione di una camma digitale
#define     PLC_DISABLE_ONE_CAM 122     // [DINT] Disabilitazione di una camma digitale
#define     PLC_ANTICIPO_CAM    123     // [DINT] Set anticipo di una camma digitale
#define     PLC_IO_CTL_CAM      124     // [DINT] IoCtl camma digitale
#define     PLC_AN_OUT_NUM		140     // [DINT] imposta uscita analogica
#define     PLC_AN_OUT_READ		141     // [DINT] legge uscita analogica
#define     PLC_VCD_TO_VD       168     // [DINT] copia una Vcd in una Vd
#define     PLC_VD_TO_VCD       169     // [DINT] copia una Vd in una Vcd
#define     PLC_SET_UDT_CMD     191     // [DINT] Set comandi udt e udf
#define     PLC_ENABLE_IRQ      200     // [DINT] Abilitazione interrupt
#define     PLC_DISABLE_IRQ     201     // [DINT] Disabilitazione interrupt
#define     PLC_ADD_FUN_IRQ     202     // [DINT] Inserimento di una funzione di interrupt
#define     PLC_REMOVE_FUN_IRQ  203     // [DINT] Rimozione di una funzione di interrupt
#define     PLC_READ_AX_PARAM   210     // [DINT] Lettura parametri assi
#define     PLC_WRITE_AX_PARAM  211     // [DINT] Scrittura parametri assi
#define     PLC_SPA_ACC_DEC     216     // [DINT] Calcolo spazio acc e dec
#define     PLC_FORCE_ZEROED    218     // [DINT] Forzatura assi azzerati
#define     PLC_CUCI_SET_PARAM  280     // [DINT] Impostazione parametri di cucitura
#define     PLC_CUCI_CMD        281     // [DINT] Comandi per la cucitrice
#define     PLC_ECAT_SDO_WR     300     // [DINT] Ethercat SDO write
#define     PLC_ECAT_SDO_RD     301     // [DINT] Ethercat SDO read
#define     PLC_ECAT_INFO       302     // [DINT] Ethercat info


// ============================================================================
//      ASSEGNAZIONE VB
// ============================================================================

//------------------------------------------------------------------------
// Vb1 - Vb1000 Variabili di uso generale

#define ENABLE_CAMME_IDX        	1           // [INT]
#define VbEnableCamme           	vb1         // Comando di abilitazione camme ( globale )
#define Vb2_C1_Apritensione     	vb2         // Vb attivazione apritenzione cucitrice 1
#define Vb3_C2_Apritensione     	vb3         // Vb attivazione apritenzione cucitrice 2
#define Vb4_C1_InCucitura	   	 	vb4         // Vb a On quando sono in cucitura e gira l'ago
#define Vb5_C2_InCucitura	    	vb5         // Vb a On quando sono in cucitura e gira l'ago
#define Vb6_PinzeOkTestManut    	vb6         // Vb a On quando le pinze dei caricatori e cucitrici sono posizionate bene per manutenzione
#define Vb7_TestManutRun	    	vb7         // Vb a On quando sono in ciclo manutenzione
#define Vb8_ExitAutomatico	    	vb8         // Vb a On quando sono fermo con tutti i programmi e posso uscire dall'automatico per liberare l'hmi
#define Vb9_ChiudePiegatore4    	vb9         // chiudo il piegatore 4 prima che arrivi la pinza del caricatore va a sbattere
#define Vb10_StepResetCanale3   	vb10        // fatto per gestire lo stop nella macchina a stati canale 3

#define Vb11_StepResetCanale3_1 	vb11        // fatto per gestire lo stop nella macchina a stati canale 3 messa a on per gestire lo step piegatore
#define Vb12_StepResetCanale3_2 	vb12        // fatto per gestire lo stop nella macchina a stati canale 3 messa a on per gestire lo step traslatore
#define Vb13_C1_BloccoFiloINI   	vb13         // Vb attivazione blocco filo inizio cucitura cucitrice 1
#define Vb14_C1_BloccoFiloEND   	vb14         // Vb attivazione blocco filo fine cucitura cucitrice 1
#define Vb15_C2_BloccoFiloINI   	vb15         // Vb attivazione blocco filo inizio cucitura cucitrice 2
#define Vb16_C2_BloccoFiloEND   	vb16         // Vb attivazione blocco filo fine cucitura cucitrice 2

#define Vb20_ResetContapezziUser  	vb20         // Vb reset contatore pezzi
#define Vb21_Tasca_dx_sx			vb21		// ON = Attiva alternanza programma Dx e Sx	
#define Vb22_device_lentezza_tasca	vb22		// ON = attivo
#define Vb23_CmdRaffreddamentoAgo_C1   vb23         // Vb comando raffreddamento ago
#define Vb24_CmdRaffreddamentoAgo_C2   vb24         // Vb comando raffreddamento ago

#define Vb30_C1_InCucitura			vb30		//=1 sono all'iterno di una cucitura (anche se sono in HOLD)
#define Vb31_C2_InCucitura			vb31		//=1 sono all'iterno di una cucitura (anche se sono in HOLD)
#define Vb32_C1_StopCucitura		vb32		//=1 è stata fermata la cucitura (Stop o rottura filo)
#define Vb33_C2_StopCucitura		vb33		//=1 è stata fermata la cucitura (Stop o rottura filo)
#define	Vb34_FinitoCucitura_C1		vb34		//=1 è finita la cucitura
#define	Vb35_FinitoCucitura_C2		vb35		//=1 è finita la cucitura
#define Vb36_Clear_OPT1				vb36		//=1 clear uscita OPT1 (retrattile)
#define Vb37_Clear_OPT2				vb37		//=1 clear uscita OPT2 (ranocchia)
#define Vb38_Clear_OPT3				vb38		//=1 clear uscita OPT3 (salto piedino)


    // Ciclo Automatico
#define MacchinaAzzerata        	vb50        // Flag macchina azzerata
#define RichiestaStartCuci2     	vb51        // Richiesta di start cucitrice 2
#define Vb52RichiestaZeroAxDaHmiC1  vb52        // Richiesta di azzeramento pinza X + Y da parte dell'interfaccia C1
#define Vb53RichiestaZeroAxDaHmiC2  vb53        // Richiesta di azzeramento pinza X + Y da parte dell'interfaccia C2
#define Vb54HmiDiag_XP_YP_C1		vb54        // Richiesta di diagonale hmi X POSITIVO Y POSITIVO C1
#define Vb55HmiDiag_XP_YM_C1		vb55        // Richiesta di diagonale hmi X POSITIVO Y NEGATIVO C1
#define Vb56HmiDiag_XM_YP_C1		vb56        // Richiesta di diagonale hmi X NEGATIVO Y POSITIVO C1
#define Vb57HmiDiag_XM_YM_C1		vb57        // Richiesta di diagonale hmi X NEGATIVO Y NEGATIVO C1
#define Vb58HmiDiag_XP_YP_C2		vb58        // Richiesta di diagonale hmi X POSITIVO Y POSITIVO C2
#define Vb59HmiDiag_XP_YM_C2		vb59        // Richiesta di diagonale hmi X POSITIVO Y NEGATIVO C2
#define Vb60HmiDiag_XM_YP_C2		vb60        // Richiesta di diagonale hmi X NEGATIVO Y POSITIVO C2
#define Vb61HmiDiag_XM_YM_C2		vb61        // Richiesta di diagonale hmi X NEGATIVO Y NEGATIVO C2
#define Vb62HmiJogXP_C1				vb62		// Richiesta jog + asse X C1
#define Vb63HmiJogXM_C1				vb63		// Richiesta jog - asse X C1
#define Vb64HmiJogYP_C1				vb64		// Richiesta jog + asse Y C1
#define Vb65HmiJogYM_C1				vb65		// Richiesta jog - asse Y C1
#define Vb66HmiJogXP_C2				vb66		// Richiesta jog + asse X C2
#define Vb67HmiJogXM_C2				vb67		// Richiesta jog - asse X C2
#define Vb68HmiJogYP_C2				vb68		// Richiesta jog + asse Y C2
#define Vb69HmiJogYM_C2				vb69		// Richiesta jog - asse Y C2

#define Vb72HmiMoveXY_C1			vb72		// Richiesta di spostamento assi XY da Modifica_programmi.java
#define Vb73HmiMoveXY_C2			vb73		// Richiesta di spostamento assi XY da Modifica_programmi.java
#define Vb74HmiMoveXY_PieAlto_C1	vb74		// Richiesta di spostamento assi XY da Modifica_programmi.java con piedino alto
#define Vb75HmiMoveXY_PieAlto_C2	vb75		// Richiesta di spostamento assi XY da Modifica_programmi.java con piedino alto
#define Vb76EnableCucitureInfinite_C1	vb76	// =1 fa cuciture infinite
#define Vb77EnableCucitureInfinite_C2	vb77	// =1 fa cuciture infinite
#define Vb78SetVelManualeAsseAgo_C1		vb78	// =1 setta la velocità manuale nei parametri assi dell'ago
#define Vb79SetVelManualeAsseAgo_C2		vb79	// =1 setta la velocità manuale nei parametri assi dell'ago
#define Vb80ShowIconaTools			vb80		// =1 permette a HMI di mostrare l'icona per andare alla pagina tools
#define Vb81PremutoResetAccensione	vb81		// =1 se premo il verde mentre il pulsante reset piegatore è premuto
#define Vb82FaiFuoriIngombroY_C1	vb82		// = 1 durante azzeramento la pinza prima si muove in Y in dietro 
#define Vb83FaiFuoriIngombroY_C2	vb83		// = 1 durante azzeramento la pinza prima si muove in Y in dietro 
#define Vb84PiegatoreRisalito		vb84		// =1 il sensore nuovo ha rilevato che il piegatore si è sollevato abbastanza per far avanzare il caricatore
#define Vb85AbilitaSensAltoPieg		vb85		// =1 abilitia la lettura sel sensore alto piegatore
#define Vb86In_Azzeramento_C1		vb86		// =1 sto facendo azzeramento C1
#define Vb87In_Azzeramento_C2		vb87		// =1 sto facendo azzeramento C2


#define	VbTest					    vb99		// per test

    // Debugger
#define VbSimulaDbg                 vb100       // Cucitrice simulata ( per debugger )
#define VbSyncDbg                   vb101       // Variabile di sync ( per debugger )
#define	VbSimulazionePedanaC1	    vb102		// alza e abbassa le pinze tramite vb come se premessi la pedana
#define	VbSimulazionePedanaC2	    vb103		// alza e abbassa le pinze tramite vb come se premessi la pedana

//------------------------------------------------------------------------
//
// #######################################
//  ATTENZIONE: NON USARE VB1001 - VB2999
// #######################################
//
// Vb1001 - Vb1999 Variabili per la cucitrice 1
// Vb2001 - Vb2999 Variabili per la cucitrice 2
//
// definizioni in DefCuci.h
//
//------------------------------------------------------------------------


//------------------------------------------------------------------------
// VB da utilizzare per il ciclo automatico Vb4000-Vb4999
//------------------------------------------------------------------------
#define Vb4000_Automatico           Vb4000 				///// messa a ON da HMI sono in automatico
#define Vb4001_StepPiegatore        Vb4001 				///// messa a ON da HMI il piegatore è passo passo
#define Vb4002_StepPiegatoreStop    Vb4002 				///// punto di stop piegatore
#define Vb4003_RqsStopPiegatore     Vb4003 				///// richiesta di stop piegatore al CN
#define Vb4004_AvvioPiegatore	    Vb4004 				///// avvio il piegatore da plc
#define Vb4005_AvvioCaricatore	    Vb4005 				///// avvio il caricatore da plc
#define Vb4006_StepTraslatore       Vb4006 				///// messa a ON da HMI il traslatore è passo passo
#define Vb4007_MemoriaAvviaCaric    Vb4007 				///// memorizzo che ho premuto start e quindi appena possibile il caricatore può avanzare
#define Vb4008_AgoSu_C1				Vb4008 				///// riporta l'ago C1 nella posizione alta
#define Vb4009_AgoSu_C2				Vb4009 				///// riporta l'ago C2 nella posizione alta
#define	Vb4010_PrgPiegatoreRun		Vb4010				//finchè gira il ciclo piegatore nel cn questa vb = ON
#define	Vb4011_TascaOk				Vb4011
#define Vb4012_FlagTascaPronta		Vb4012				// a ON tasca pronta per caricare
#define	Vb4013_DisableLancia		Vb4013				//finchè è a ON Blocco il pedale della lancia
#define Vb4014JogFastSlow			vb4014				// hmi = 0 Jog normale(fast) =1 Jog Lento
#define	Vb4015_PrgCaricatoreRun		Vb4015				//finchè gira il ciclo caricatore nel cn questa vb = ON
#define	Vb4016_PrgTraslatoreRun		Vb4016				//se il traslatore è in una fase di movimento questa vb = ON
#define	Vb4017_AttesaTascaIsRunning	Vb4017				//il ciclo di attesa tasca in CicloAutomatico sta girando




#define	Vb4021_Piegatore1_ON			Vb4021				// Primo piegatore attivato
#define	Vb4022_Piegatore2_ON			Vb4022				// Secondo piegatore attivato
#define	Vb4023_Piegatore3_ON			Vb4023				// Terzo piegatore attivato
#define	Vb4024_Piegatore4_ON			Vb4024				// Quarto piegatore attivato
#define	Vb4025_Piegatore1_OFF			Vb4025				// Primo piegatore disattivato
#define	Vb4026_Piegatore2_OFF			Vb4026				// Secondo piegatore disattivato
#define	Vb4027_Piegatore3_OFF			Vb4027				// Terzo piegatore disattivato
#define	Vb4028_Piegatore4_OFF			Vb4028				// Quarto piegatore disattivato

// scaricatore
#define	Vb4031_AppScaricatoreInPos			Vb4031				//dopo un tempo che la valvola o64_Scaric_dx_sx è a ON
#define	Vb4032_AppScaricatoreStrBarre		Vb4032				//avvio le barre insieme alla pinza alta
#define	Vb4033_RitardoAvanzataCaricatore	Vb4033				//finchè è ad 1 il caricatore non può avanzare (ritardo dopo la barra2 on)
#define	Vb4034_ScaricOnSuRasafilo			Vb4034				//se On la prima barra parte sul rasafilo finale, se off dopo che le pinze solo alte

//scartafilo/pinza filo da udf
#define	Vb4035_Sync_scartafilo				vb4035		// Nell'udf G275 alza vb4035 e quando la rimetto a false la cucitura riparte (G283.0 fermata temporanea)
#define	Vb4036_Enable_Sync_scartafilo		vb4036		// HMI abilita il ciclo scartafilo sincronizzato con udf

#define	Vb4038_Scatena_scartafilo           vb4038		// Scatena macchine a stati scartafilo 

// varie assi fermo
#define	Vb4045_C1_AxXFermo					Vb4045				// Flag segnalazione asse  fermo
#define	Vb4046_C1_AxYFermo					Vb4046				// Flag segnalazione asse  fermo
#define	Vb4047_C1_AxAgoFermo				Vb4047				// Flag segnalazione asse  fermo
#define	Vb4048_C1_AxCroFermo				Vb4048				// Flag segnalazione asse  fermo
#define	Vb4049_C1_AsseCARFermo				Vb4049				// Flag segnalazione asse  fermo
#define	Vb4050_C2_AxXFermo					Vb4050				// Flag segnalazione asse  fermo
#define	Vb4051_C2_AxYFermo					Vb4051				// Flag segnalazione asse  fermo
#define	Vb4052_C2_AxAgoFermo				Vb4052				// Flag segnalazione asse  fermo
#define	Vb4053_C2_AxCroFermo				Vb4053				// Flag segnalazione asse  fermo
#define	Vb4054_C2_AsseCARFermo				Vb4054				// Flag segnalazione asse  fermo


#define	Vb4058_C1_AsseX_YFermo				Vb4058				// Flag segnalazione asse  fermo
#define	Vb4059_C2_AsseX_YFermo				Vb4059				// Flag segnalazione asse  fermo



#define	Vb4060_HMISaveUdfFile				Vb4060				//hmi salva udf
// Conmandi tensione testa 1 e 2
#define	Vb4061_AppTensAumentaTesta1			Vb4061				//hmi tasto aumenta tensione testa 1
#define	Vb4062_AppTensDiminuisceTesta1		Vb4062				//hmi tasto diminuisce tensione testa 1
#define	Vb4063_AppTensAumentaTesta2			Vb4063				//hmi tasto aumenta tensione testa 2
#define	Vb4064_AppTensDiminuisceTesta2		Vb4064				//hmi tasto diminuisce tensione testa 2


// Conmandi tensione Magnete sopra e sotto
#define	Vb4065_AppTensAumentaSotto			Vb4065				//hmi tasto aumenta tensione piegatore sopra
#define	Vb4066_AppTensDiminuisceSotto		Vb4066				//hmi tasto diminuisce tensione piegatore sopra
#define	Vb4067_AppTensAumentaSopra			Vb4067				//hmi tasto aumenta tensione piegatore sotto
#define	Vb4068_AppTensDiminuisceSopra		Vb4068				//hmi tasto diminuisce tensione piegatore sotto
#define	Vb4069_AppTensOnSopra				Vb4069				//hmi tasto attiva tensione piegatore sopra
#define	Vb4070_AppTensOnSotto				Vb4070				//hmi tasto attiva tensione piegatore sotto

//	contaspola
#define Vb4071_AbilitaContSpolaC1			Vb4071 				///// HMI utilizzato per abilitare il conteggio della spola C1 ( OFF funziona )
#define Vb4072_AllarmeContSpolaC1			Vb4072 				///// HMI utilizzato per abilitare il conteggio della spola C1 ( OFF funziona )
#define Vb4073_AbilitaContSpolaC2			Vb4073 				///// HMI utilizzato per abilitare il conteggio della spola C2 ( OFF funziona )
#define Vb4074_AllarmeContSpolaC2			Vb4074 				///// HMI utilizzato per abilitare il conteggio della spola C2 ( OFF funziona )

//fai spola
#define Vb4075_GiraAgoFaiSpolaC1				Vb4075 				///// HMI utilizzato per far girare la testa C1 per fare la spola
#define Vb4076_GiraAgoFaiSpolaC2				Vb4076 				///// HMI utilizzato per far girare la testa C2 per fare la spola

// test manutenzione
#define Vb4078_TestHomeC1				    Vb4078 				///// HMI utilizzato per centrare i sensori di zero su dima cucitrice 1
#define Vb4079_TestHomeC2			    	Vb4079 				///// HMI utilizzato per centrare i sensori di zero su dima cucitrice 2
#define Vb4080_TestFcZeroC1				    Vb4080 				///// HMI utilizzato per centrare i sensori di zero su dima cucitrice 1
#define Vb4081_TestCaricatorePinzaC1	    Vb4081 				///// HMI utilizzato per centrare la pinza del caricatore sulla pinza cucitrice
#define Vb4082_TestCaricatoreLanciaC1	    Vb4082 				///// HMI utilizzato per centrare la pinza del caricatore sulla lancia
#define Vb4083_TestCaricatoreC2CaricoC1	    Vb4083 				///// HMI utilizzato per centrare la pinza del caricatore C2 carico su C1
#define Vb4084_TestCaricatoreC2ScaricoC2    Vb4084 				///// HMI utilizzato per centrare la pinza del caricatore C2 culla pinza C2
#define Vb4085_TestFcZeroC2			    	Vb4085 				///// HMI utilizzato per centrare i sensori di zero su dima cucitrice 2
#define Vb4086_SavePosizioni    			Vb4086 				///// HMI in base al test scelto salva i punti
#define Vb4087_TestLiberaPinzaCaricatore	Vb4087 				///// HMI utilizzato per gestire l'anticipo tra pinza caricatore e C1
#define Vb4088_TestDisableRiposizionaAgo	Vb4088 				///// HMI utilizzato per non riposizionare l'ago al punto ago alto
#define Vb4089_TestDisableRiposizionaAgoC2	Vb4089 				///// HMI utilizzato per non riposizionare l'ago al punto ago alto



// rottura filo
#define Vb4090_EnableRotturaFiloC1			Vb4090 				///// HMI utilizzato per abilitare la rottura filo C1 ( OFF funziona )
#define Vb4091_EnableRotturaFiloC2			Vb4091 				///// HMI utilizzato per abilitare la rottura filo C2 ( OFF funziona )
#define EnbCountRotturaFiloC1_IDX			4092 				///// [INT] HMI utilizzato per abilitare il conteggio della rottura filo C1
#define Vb4092_EnbCountRotturaFiloC1		Vb4092 				///// HMI utilizzato per abilitare  abilitare il conteggio della rottura filo C1
#define EnbCountRotturaFiloC2_IDX			4093 				///// [INT] HMI utilizzato per abilitare  abilitare il conteggio della rottura filo C2
#define Vb4093_EnbCountRotturaFiloC2		Vb4093 				///// HMI utilizzato per abilitare  abilitare il conteggio della rottura filo C2

// scartafilo
#define Vb4094_EnbScartafiloC1				Vb4094 				///// HMI utilizzato per abilitare scartafilo C1
#define Vb4095_EnbScartafiloC2				Vb4095 				///// HMI utilizzato per abilitare scartafilo C2
#define Vb4096_AppOnScartafiloC1			Vb4096 				///// utilizzato da cn per abilitare scartafilo C1
#define Vb4097_AppOnScartafiloC2			Vb4097 				///// utilizzato da cn per abilitare scartafilo C2
#define Vb4098_OnSeqScartafiloC1			Vb4098 				///// utilizzato da plc per abilitare scartafilo C1
#define Vb4099_OnSeqScartafiloC2			Vb4099 				///// utilizzato da plc per abilitare scartafilo C2


//------------------------------------------------------------------------
// VB movimenti manuali Vb4100-Vb4299
//------------------------------------------------------------------------
#define Vb4100_											Vb4100


#define Vb4133_AppMan_o1_Enable_AssiXY_C1C2				Vb4133	//ex Vb4175	
#define	Vb4134_o2										Vb4134
#define Vb4135_AppMan_o3_C1_Pinza_int					Vb4135	//exVb4166
#define Vb4136_AppMan_o4_C1_Pinza_est					Vb4136	//ex Vb4167
#define Vb4137_AppMan_o5_C1_Ranocchia_retrat			Vb4137	//ex Vb4173
#define Vb4138_AppMan_o6_Pinza_carico_Su_Giu			Vb4138	//ex Vb4170
#define Vb4139_AppMan_o7_C1_Cambio_Pinze				Vb4139	//ex Vb4171
#define Vb4140_AppMan_o8_C1_Retrattile_AC				Vb4140	//ex Vb4168
#define Vb4141_AppMan_o9_C1_rasafilo					Vb4141	//ex Vb4174
#define Vb4142_AppMan_o10_Lancia_AD						Vb4142	//ex Vb4139
#define	Vb4143_AppMan_o11_Lentezza_Tasca_AD				Vb4143
#define Vb4144_AppMan_o12_Cambio_Lamelle_4_5			Vb4144	//ex Vb4144
#define Vb4145_AppMan_o13_C1_Piedino					Vb4145	//ex Vb4165
#define Vb4146_AppMan_o14_C1_Scalino_Piedino			Vb4146	//ex Vb4172
#define Vb4147_AppMan_o15_C1_RaffreddamentoAgo			Vb4147	//ex Vb4169
#define Vb4148_AppMan_o16_Piegatore_AD					Vb4148	//ex Vb4140
#define Vb4149_AppMan_o17_Piegatore_Su_Giu				Vb4149	//ex Vb4141
#define	Vb4150_o18										Vb4150
#define Vb4151_AppMan_o19_Bilanciere_Su_Giu				Vb4151	//ex Vb4142
#define Vb4152_AppMan_o20_Piegatore_4					Vb4152	//ex Vb4143
#define Vb4153_AppMan_o21_Piegatore_1					Vb4153	//ex Vb4133
#define Vb4154_AppMan_o22_Piegatore_2					Vb4154	//ex Vb4134
#define Vb4155_AppMan_o23_Piegatore_3					Vb4155	//ex Vb4135
#define Vb4156_AppMan_o24_Cambio_lame_lateral			Vb4156	//ex Vb4136
#define Vb4157_AppMan_o25_Cambio_lama_front				Vb4157	//ex Vb4137
#define Vb4158_AppMan_o26_Cambio_corpo					Vb4158	//ex Vb4138
#define Vb4159_AppMan_o27_EvAspiratore					Vb4159	//ex Vb4145
#define Vb4160_AppMan_o28_Valvolone						Vb4160	//ex Vb4207
#define Vb4161_AppMan_o29_Prima_barra					Vb4161	//ex Vb4204
#define Vb4162_AppMan_o30_Seconda_barra					Vb4162	//ex Vb4205
#define	Vb4163_o31										Vb4163
#define Vb4164_AppMan_o32_Scaric_dx_sx					Vb4164	//ex Vb4203

#define	Vb4165_o33										Vb4165
#define	Vb4166_o34										Vb4166
#define	Vb4167_AppMan_o35_C2_Pinza_int					Vb4167	//ex Vb4198
#define	Vb4168_o36										Vb4168
#define	Vb4169_o37										Vb4169
#define	Vb4170_o38										Vb4170
#define	Vb4171_AppMan_o39_C2_Cambio_Pinze				Vb4171 //ex b4200
#define	Vb4172_o40										Vb4172
#define	Vb4173_AppMan_o41_C2_rasafilo					Vb4173 //ex Vb4206
#define	Vb4174_o42										Vb4174
#define	Vb4175_AppMan_o43_C2_RaffreddamentoAgo			Vb4175 //ex4203
#define	Vb4176_o44										Vb4176
#define	Vb4177_AppMan_o45_C2_Piedino					Vb4177 //exvb4197
#define	Vb4178_o46										Vb4178
#define	Vb4179_o47										Vb4179
#define	Vb4180_o48										Vb4180
#define	Vb4181_o49										Vb4181
#define	Vb4182_o50										Vb4182
#define	Vb4183_o51										Vb4183
#define	Vb4184_o52										Vb4184
#define	Vb4185_AppMan_o53_C2_Scalino_Piedino			Vb4185 //ex Vb4201
#define	Vb4186_o54										Vb4186
#define	Vb4187_o55										Vb4187
#define	Vb4188_o56										Vb4188
#define	Vb4189_o57										Vb4189
#define	Vb4190_o58										Vb4190
#define	Vb4191_o59										Vb4191
#define	Vb4192_o60										Vb4192
#define	Vb4193_o61										Vb4193
#define	Vb4194_AppMan_o62_Piza_tras_su_giu				Vb4194 //ex Vb4202_
#define	Vb4195_o63										Vb4195
#define	Vb4196_o64										Vb4196







#define Vb4208_AppMagneteTensione						Vb4208
#define Vb4209_AppMagneteTensioneT2						Vb4209
#define Vb4210_AppMagneteSopraPiegatore					Vb4210
#define Vb4211_AppMagneteSottoPiegatore					Vb4211


//------------------------------------------------------------------------
// VB movimenti automatici Vb4300-Vb4499
//------------------------------------------------------------------------
#define Vb4333_AppAut_o21_Piegatore_1  					Vb4333
#define Vb4334_AppAut_o22_Piegatore_2     				Vb4334
#define Vb4335_AppAut_o23_Piegatore_3      				Vb4335
#define Vb4336_AppAut_o24_Cambio_lame_lateral     		Vb4336
#define Vb4337_AppAut_o25_Cambio_lama_front       		Vb4337
#define Vb4338_AppAut_o26_Cambio_corpo          		Vb4338
#define Vb4339_AppAut_o10_Lancia_AD             		Vb4339
#define Vb4340_AppAut_o16_Piegatore_AD          		Vb4340
#define Vb4341_AppAut_o17_Piegatore_Su_Giu       		Vb4341
#define Vb4342_AppAut_o19_Bilanciere_Su_Giu       		Vb4342
#define Vb4343_AppAut_o20_Piegatore_4    	      		Vb4343
#define Vb4344_AppAut_o12_Cambio_Lamelle_4_5      		Vb4344
#define Vb4345_AppAut_o27_EvAspiratore					Vb4345
#define Vb4346_AppAut_o11_Lentezza_Tasca_AD				Vb4346

#define Vb4365_AppAut_o13_C1_Piedino         			Vb4365
#define Vb4366_AppAut_o3_C1_Pinza_int        			Vb4366
#define Vb4367_AppAut_o4_C1_Pinza_est          			Vb4367
#define Vb4368_AppAut_o8_C1_Retrattile_AC        		Vb4368
#define Vb4369_AppAut_o15_C1_RaffreddamentoAgo    		Vb4369
#define Vb4370_AppAut_o6_Pinza_carico_Su_Giu        	Vb4370
#define Vb4371_AppAut_o7_C1_Cambio_Pinze            	Vb4371
#define Vb4372_AppAut_o14_C1_Scalino_Piedino         	Vb4372
#define Vb4373_AppAut_o5_C1_Ranocchia_retrat        	Vb4373
#define Vb4374_AppAut_o9_C1_rasafilo                	Vb4374

#define Vb4397_AppAut_o45_C2_Piedino                 	Vb4397
#define Vb4398_AppAut_o35_C2_Pinza_int                	Vb4398
#define Vb4399_AppAut_o99_C2_scartafilo               	Vb4399
#define Vb4400_AppAut_o39_C2_Cambio_Pinze              Vb4400
#define Vb4401_AppAut_o53_C2_Scalino_Piedino           Vb4401
#define Vb4402_AppAut_o62_Piza_tras_su_giu             Vb4402
#define Vb4403_AppAut_o32_Scaric_dx_sx                 Vb4403
#define Vb4404_AppAut_o29_Prima_barra					Vb4404
#define Vb4405_AppAut_o30_Seconda_barra					Vb4405
#define Vb4406_AppAut_o41_C2_rasafilo                  Vb4406
#define Vb4407_AppAut_o28_Valvolone                   	Vb4407
#define Vb4408_AppAut_o43_C2_RaffreddamentoAgo    		Vb4408





//-------------------------------------------------------------------------
//	VB appoggio da utilizzare per il ciclo automatico Vb4500-Vb4549
//-------------------------------------------------------------------------
#define Vb4501_AppVbChn3StartHMI           			 vb4501      // app pulsante hmi start
#define Vb4502_AppPosMacchinaPerZero       			 vb4502      // a ON tutte i cilindri sono posizionati correttamente per azzeramento
#define Vb4503_CN_Allarme							 vb4503      // CN in allarme
#define Vb4504_AppPosMacchinaPerAutomatico 			 vb4504      // a ON tutte i cilindri sono posizionati correttamente per automatico
#define Vb4505_AppEnbCambioPinze					 vb4505		 // a ON abilito i pulsanti cambio pinza
#define Vb4506_AppCambioPinzeRun					 vb4506		 // a ON ho un cambio pinza attivo disabilito Start e automatico
#define Vb4507_AppManAuto							 vb4507		 // a ON sono in automatico a OFF in manuale
#define Vb4508_AppHmiPiegatore						 vb4508		 // a tasto hmi piegatore
#define Vb4509_AppEnbPiegatore						 vb4509		 // a ON abilito il piegatore
#define Vb4510_AppHmiCaricatore						 vb4510		 // a tasto hmi  caricatore
#define Vb4511_AppEnbCaricatore						 vb4511		 // a ON abilito il caricatore
#define Vb4512_AppHmiCucitrice2						 vb4512		 // a tasto hmi cucitrice 2
#define Vb4513_AppEnbCucitrice2						 vb4513		 // a ON abilito la cucitrice 2
#define Vb4514_AppHmiScaricatore					 vb4514		 // a tasto hmi  scaricatore
#define Vb4515_AppEnbScaricatore					 vb4515		 // a ON abilito lo scaricatore
#define Vb4516_AppHmiScambioPinzeC1_Car2			 vb4516		 // a tasto hmi tipo scambio pinza tra cucitrice 1 e caricatore 2
#define Vb4518_EnbQuartoXL							 vb4518		 // a ON abilito quarto XL
#define Vb4519_AppScaricoCortiConPinza				 vb4519		 // a ON abilitolo scarico dei pezzi piccoli con la pinza
#define Vb4520_AppScaricoCortiConPinzaRunning		 vb4520		 // a ON mentre sta girando il ciclo scaricatore pezzi piccoli
#define Vb4521_AppHmiTestPiegatore					 vb4521		 // a tasto hmi test piegatore 
#define Vb4522_AppHmiTestTrasl						 vb4522		 // a tasto hmi test traslatore
#define Vb4523_C2_PinzaDietroUnaTesta				 vb4523		 // a ON la pinza cucitura è nella posizione distro perchè ho Solo una testa

////// JT 350
#define Vb4580_EnbSgancioPinzaDopoZero				 vb4580		 // a ON sgancia le pinze alla fine dell'azzeramento
#define Vb4581_EnbAggancioPinzaAutomatico			 vb4581		 // a ON aggancia le pinze in automatico
#define Vb4582_EnbSgancioPinzaFineCucitura			 vb4582		 // a ON sgancia le pinze alla fine della cucitura
#define Vb4583_EnbStartAutomatico			 		 vb4583		 // a ON si avvia dopo l'aggancio delle pinze
#define Vb4584_EnbPinzeInManuale					 vb4584		 // a ON esclude l'aggancio e lo start in  automatico

//-------------------------------------------------------------------------
//	VB appoggio ritardi sensori da utilizzare per il ciclo automatico C1 Vb4600-Vb4699
//-------------------------------------------------------------------------
#define Vb4601_AppRit_i14_C1_PinzaEstAlta   			vb4601      // ritardo pinza esterna C1
#define Vb4602_AppRit_i49_FcPinzaTraslBassa   		 	vb4602      // ritardo pinza traslatore bassa
#define Vb4603_AppRit_i13_C1_PinzaIntBassa   			vb4603      // ritardo pinza interna alta C1


//-------------------------------------------------------------------------
//	VB appoggio ritardi sensori da utilizzare per il ciclo automatico C2 Vb4700-Vb4799
//-------------------------------------------------------------------------
#define Vb4701_AppRit	   			 vb4701      // ritardo

//-------------------------------------------------------------------------
//	VB appoggio varie  C1 Vb4800-Vb4899
//-------------------------------------------------------------------------
#define Vb4801_PulsStartHmiC1	   			 vb4801      // pulsante su hmi per start cucitrice 1
#define Vb4802_PulsResetHmiC1	   			 vb4802      // pulsante su hmi per reset cucitrice 1
#define Vb4803_AppResetHmiC1	   			 vb4803      // memorizzo reset cucitrice 1

#define Vb4805_AppStartCaricatoreC1 		 vb4805      // a on sto spostando le pinze cucitrice a punto di carico dopo la cucitura
#define Vb4806_AppPinzaAltaC1	   			 vb4806      // a On con pinza alta
#define Vb4807_PinzeAlteDopoPC	   			 vb4807      // a On alza le pinze dopo aver raggiunto Punti Carico

//-------------------------------------------------------------------------
//	VB appoggio varie  C2 Vb4900-Vb4999
//-------------------------------------------------------------------------
#define Vb4901_PulsStartHmiC2	   			 vb4901      // pulsante su hmi per start cucitrice 2
#define Vb4902_PulsResetHmiC2	   			 vb4902      // pulsante su hmi per reset cucitrice 2
#define Vb4903_AppResetHmiC2	   			 vb4903      // memorizzo reset cucitrice 2
#define Vb4904_AppPedaleHmiC2	   			 vb4904      // pedale singolo testa 2

#define Vb4906_AppPinzaIntAltaC2	   			 vb4906      // a On con pinza alta
#define Vb4907_PinzeAlteDopoPCC2	   			 vb4907      // a On alza le pinze dopo aver raggiunto Punti Carico
//------------------------------------------------------------------------
// VB da utilizzare per il ciclo automatico Vb4000-Vb4999
//------------------------------------------------------------------------

//------------------------------------------------------------------------

#define VbDbg                   vb5000

//---------------------------------------------------------
    // Variabili VB di sistema

#define VbCmdAzzAx1             vb7006      // Asse 1 - Comando azzeramento asse
#define VbFlgAzzAx1             vb7013      // Asse 1 - Flag asse azzerato
#define VbFlgPosAx1             vb7014      // Asse 1 - Flag asse in posizione

#define VbCmdAzzAx2             vb7026      // Asse 2 - Comando azzeramento asse
#define VbFlgAzzAx2             vb7033      // Asse 2 - Flag asse azzerato
#define VbFlgPosAx2             vb7034      // Asse 2 - Flag asse in posizione

#define VbCmdAzzAx3             vb7046      // Asse 3 - Comando azzeramento asse
#define VbFlgAzzAx3             vb7053      // Asse 3 - Flag asse azzerato
#define VbFlgPosAx3             vb7054      // Asse 3 - Flag asse in posizione

#define VbCmdAzzAx4             vb7066      // Asse 4 - Comando azzeramento asse
#define VbFlgAzzAx4             vb7073      // Asse 4 - Flag asse azzerato
#define VbFlgPosAx4             vb7074      // Asse 4 - Flag asse in posizione

#define VbCmdAzzAx5             vb7086      // Asse 5 - Comando azzeramento asse
#define VbFlgAzzAx5             vb7093      // Asse 5 - Flag asse azzerato
#define VbFlgPosAx5             vb7094      // Asse 5 - Flag asse in posizione

#define VbCmdAzzAx6             vb7106      // Asse 6 - Comando azzeramento asse
#define VbFlgAzzAx6             vb7113      // Asse 6 - Flag asse azzerato
#define VbFlgPosAx6             vb7114      // Asse 6 - Flag asse in posizione

#define VbCmdAzzAx7             vb7126      // Asse 7 - Comando azzeramento asse
#define VbFlgAzzAx7             vb7133      // Asse 7 - Flag asse azzerato
#define VbFlgPosAx7             vb7134      // Asse 7 - Flag asse in posizione

#define VbCmdAzzAx8             vb7146      // Asse 8 - Comando azzeramento asse
#define VbFlgAzzAx8             vb7153      // Asse 8 - Flag asse azzerato
#define VbFlgPosAx8             vb7154      // Asse 8 - Flag asse in posizione

#define VbCmdAzzAx9             vb7166      // Asse 9 - Comando azzeramento asse
#define VbFlgAzzAx9             vb7173      // Asse 9 - Flag asse azzerato
#define VbFlgPosAx9             vb7174      // Asse 9 - Flag asse in posizione

#define VbCmdAzzAx10            vb7186      // Asse 10 - Comando azzeramento asse
#define VbFlgAzzAx10            vb7193      // Asse 10 - Flag asse azzerato
#define VbFlgPosAx10            vb7194      // Asse 10 - Flag asse in posizione

#define VbChn1Start             vb7901      // VB START canale 1
#define VbChn1Reset             vb7903      // VB RESET canale 1
#define VbChn1AutoRun           vb7908      // VB Auto Running canale 1

#define VbChn2Start             vb7921      // VB START canale 2
#define VbChn2Reset             vb7923      // VB RESET canale 2
#define VbChn2AutoRun           vb7928      // VB Auto Running canale 2

#define VbChn3Start             vb7941      // VB START canale 3
#define VbChn3Reset             vb7943      // VB RESET canale 3
#define VbChn3AutoRun           vb7948      // VB Auto Running canale 3



// ============================================================================
//      ASSEGNAZIONE VN
// ============================================================================

//------------------------------------------------------------------------
// Vn1 - Vn1000 Variabili di uso generale

#define ERR_CODE_CAMME_IDX      1           // [INT]
#define VnErrCodeCamme          vn1         // Codice di erore delle funzioni di camme
#define	Vn2CodiceAllarmeXHmi	vn2			// codice allarme da visualizzare su HMI
#define	Vn3CodiceAllarmeUdf		vn3			// codice allarme lettura udf
#define	Vn4CodiceWarning		vn4			// codice warning inviato dal PLC al HMI

#define Vn10MemoStatoCuci1      vn10        // Memorizzo lo stato cuci 1 quando sono in step o reset piegatore ( macchina a stati canale 3 )
#define VnStatoCuci1            vn11        // Stato cuci 1 ( macchina a stati canale 3 )
#define VnStatoCuci2            vn12        // Stato cuci 2 ( macchina a stati canale 3 )
#define Vn13MemoStatoCuci2      vn13        // Memorizzo lo stato cuci 1 quando sono in step traslatore ( macchina a stati canale 3 )
#define Vn14TipoScartafiloC1	vn14		// 0 = no scartafilo, 1 = scartafilo dopo ritorno punto carico 2 = scartafilo ogni rasafilo
#define Vn15TipoScartafiloC2	vn15		// 0 = no scartafilo, 1 = scartafilo dopo ritorno punto carico 2 = scartafilo ogni rasafilo
#define Vn16GoCuci				vn16		// =1 C1_ExeCucitura può partire a cucire,=2 abort C1_ExeCucitura
#define Vn17GoCuci_C2			vn17		// =1 C1_ExeCucitura può partire a cucire,=2 abort C1_ExeCucitura


//Funzione 202:  interrupt FUN 202
#define Fun202VnParIndx_0		vn20		// Codice della funzione
#define Fun202VnParIndx_1		vn21		// FunId – identificativo della funzione
#define Fun202VnParIndx_2		vn22		// Indice vb abilitazione della funzione
#define Fun202VnParIndx_3		vn23		// Indice vq contatore



//------------------------------------------------------------------------
// VN da utilizzare per il ciclo automatico Vn100-Vn999
//------------------------------------------------------------------------
//// vn piegatore
#define	Vn101_Piegatore1_CH			Vn101				// Numero Primo piegatore attivato
#define	Vn102_Piegatore2_CH			Vn102				// Numero Secondo piegatore attivato
#define	Vn103_Piegatore3_CH			Vn103				// Numero Terzo piegatore attivato
#define	Vn104_Piegatore4_CH			Vn104				// Numero Quarto piegatore attivato
#define	Vn105_Piegatore1_AP			Vn105				// Numero Primo piegatore disattivato
#define	Vn106_Piegatore2_AP			Vn106				// Numero Secondo piegatore disattivato
#define	Vn107_Piegatore3_AP			Vn107				// Numero Terzo piegatore disattivato
#define	Vn108_Piegatore4_AP			Vn108				// Numero Quarto piegatore disattivato

#define	Vn109_OrdinePiegCH			Vn109				// ordine chiusura piegatori memorizzato su programma
#define	Vn110_OrdinePiegAP			Vn110				// ordine apertura piegatori memorizzato su programma

//// etichetta
#define Vn111_EnbEtichetta			vn111				///// a ON abilito la pausa per mettere l'etichetta ( 1 = tutte) ( 2 = 1 si 1 no )
#define Vn112_AppEtichettaMod_2		vn112				///// utilizzata come appoggio modo 2 ( se serve mettere reset )

#define Vn115_CopiaSeqPiegFree		vn115			//copia sequenza piegatura Free per pagina touch

//// tipologia scambio pinze
#define Vn120_AppEnbScambioPinzeC1_Car2			vn120		 // a 1 abilito tipo scambio pinza tra cucitrice 1 e caricatore 2

//// vn debug
#define	Vn131_Debug					vn131		//debug su pagina AUTO touch
#define	Vn132_DebugPie				vn132		//debug su pagina AUTO touch
#define	Vn133_DebugAuto				vn133		//debug su pagina AUTO touch

//// vn velocità jog assi pinza comandati da HMI
#define	Vn151_SpeedStep1			vn151		//vn velocità jog assi pinza comandati da HMI step 1
#define	Vn152_SpeedStep2			vn152		//vn velocità jog assi pinza comandati da HMI step 2
#define	Vn153_SpeedStep3			vn153		//vn velocità jog assi pinza comandati da HMI step 3

#define mc_stati_PiuMenoTensione		vn160	//indice macchina stati per gestione tasti + - del valore tensione filo
#define mc_stati_PiuMenoTensioneT2		vn161	//indice macchina stati per gestione tasti + - del valore tensione filo

#define	Vn162_Read_anaout99				vn162
#define	Vn163_Read_anaout100			vn163


#define	Vn196_Tasca_DX_C1				vn196
#define	Vn197_Tasca_SX_C1				vn197
#define	Vn198_Tasca_DX_C2				vn198
#define	Vn199_Tasca_SX_C2				vn199
#define	Vn200_Tipo_DXSX_Ultima_cucita_su_C1				vn200   //1 = la tasca prelevata dal traslatore dalla testa 1 era DX,2 = la tasca prelevata dal traslatore dalla testa 1 era SX 
///////// vn programmi fork
#define Vn201PrgForkPiegatore					vn201
#define Vn202PrgForkCaricatoreMan				vn202
#define Vn203PrgForkResetFolder					vn203


#define CodiceDeviceOptional				vn236

#define Vn240AnnoOrologioPLC		vn240
#define Vn241MeseOrologioPLC		vn241
#define Vn242giornoOrologioPLC		vn242
#define Vn243OraOrologioPLC			vn243
#define Vn244MinutiOrologioPLC		vn244
#define Vn245secondiOrologioPLC		vn245
#define Vn246LimiteAnno				vn246
#define Vn247LimiteMese				vn247
#define Vn248LimiteGiorno			vn248

#define Vn_ID_macchina							vn320   //vn numero identificatore macchina,  

#define v_ntest						vn777
#define vntest1						vn778
#define vntest2						vn779
#define vntest3						vn780

//------------------------------------------------------------------------
//
// #######################################
//  ATTENZIONE: NON USARE VN1001 - VN2999
// #######################################
//
// Vn1001 - Vn1999 Variabili per la cucitrice 1
// Vn2001 - Vn2999 Variabili per la cucitrice 2
//
// definizioni in DefCuci.h
//
//------------------------------------------------------------------------


//---------------------------------------------------------
    // Variabili VN di sistema

#define VnOvdAx1                vn3001      // Asse 1 - Override indipendente
#define VnFaseZeroAx1           vn3011      // Asse 1 - Fase azzeramento
#define VnStatoAx1              vn3013      // Asse 1 - Status asse

#define VnOvdAx2                vn3021      // Asse 2 - Override indipendente
#define VnFaseZeroAx2           vn3031      // Asse 2 - Fase azzeramento
#define VnStatoAx2              vn3033      // Asse 2 - Status asse

#define VnOvdAx3                vn3041      // Asse 3 - Override indipendente
#define VnVelJogAx3				vn3042
#define VnVelSemiAutoAx3		vn3049
#define VnFaseZeroAx3           vn3051      // Asse 3 - Fase azzeramento
#define VnStatoAx3           	vn3053      // Asse 3 - Status asse

#define VnOvdAx4                vn3061      // Asse 4 - Override indipendente
#define VnFaseZeroAx4           vn3071      // Asse 4 - Fase azzeramento
#define VnStatoAx4              vn3073      // Asse 4 - Status asse

#define VnOvdAx5                vn3081      // Asse 5 - Override indipendente
#define VnVelJogAx5				vn3082
#define VnVelSemiAutoAx5		vn3089
#define VnFaseZeroAx5           vn3091      // Asse 5 - Fase azzeramento
#define VnStatoAx5              vn3093      // Asse 5 - Status asse

#define VnOvdAx6                vn3101      // Asse 6 - Override indipendente
#define VnFaseZeroAx6           vn3111      // Asse 6 - Fase azzeramento
#define VnStatoAx6              vn3113      // Asse 6 - Status asse

#define VnOvdAx7                vn3121      // Asse 7 - Override indipendente
#define VnFaseZeroAx7           vn3131      // Asse 7 - Fase azzeramento
#define VnStatoAx7              vn3133      // Asse 7 - Status asse

#define VnOvdAx8                vn3141      // Asse 8 - Override indipendente
#define VnVelJogAx8				vn3142
#define VnVelSemiAutoAx8		vn3149
#define VnFaseZeroAx8           vn3151      // Asse 8 - Fase azzeramento
#define VnStatoAx8              vn3153      // Asse 8 - Status asse

#define VnOvdAx9                vn3161      // Asse 9 - Override indipendente
#define VnFaseZeroAx9           vn3171      // Asse 9 - Fase azzeramento
#define VnStatoAx9              vn3173      // Asse 9 - Status asse

#define VnOvdAx10               vn3181      // Asse 10 - Override indipendente
#define VnVelJogAx10			vn3182
#define VnVelSemiAutoAx10		vn3189
#define VnFaseZeroAx10          vn3191      // Asse 10 - Fase azzeramento
#define VnStatoAx10             vn3193      // Asse 10 - Status asse

#define Vn3804_PageID			vn3804		// Pagina in esecuzione

// ============================================================================
//      ASSEGNAZIONE VQ
// ============================================================================

//------------------------------------------------------------------------
// Vq1 - Vq1000 Variabili di uso generale

    // Variabili usate per la programmazione delle camme
#define INIT_CAM_VQ_IDX         1           // [INT]
#define CamMode                 vq1         // Camme: modo operativo
#define CamAxNum                vq2         // Camme: numero dell'asse
#define CamDigOut               vq3         // Camme: n. uscita digitale o indice VB
#define CamStart                vq4         // Camme: soglia start
#define CamStop                 vq5         // Camme: soglia stop
#define CamModule               vq6         // Camme: modulo

#define IO_CTL_CAM_VQ_IDX       10          // [INT]
#define CamCmd                  vq10        // Camme: comando
#define CamPar1                 vq11        // Camme: parametro 1
#define CamPar2                 vq12        // Camme: parametro 2
#define CamPar3                 vq13        // Camme: parametro 3
#define CamPar4                 vq14        // Camme: parametro 4
#define CamPar5                 vq15        // Camme: parametro 5

    // Variabili per il rollover dell'asse ago da PLC
#define ROLL_PLC_AGO_IDX        20          // [INT]
#define RollPlcAgoModule        vq20        // Rollover asse ago - Modulo
#define RollPlcAgoQuo           vq21        // Rollover asse ago - Quota dopo il rollover

    // Variabili per il movimento e lo stop dell'asse ago da PLC
#define GOAX_PLC_AGO_IDX        22          // [INT] GOAX_PLC_AGO_IDX
#define GoAxPlcAgoErrCode       vq22        // GoAx asse ago - ErrorCode
#define GoAxPlcAgoModule        vq23        // GoAx asse ago - Modulo per asse tondo
#define GoAxPlcAgoVel           vq24        // GoAx asse ago - Velocita'

#define STOP_PLC_AGO_IDX        25          // [INT] STOP_PLC_AGO_IDX
#define StopPlcAgoErrCode       vq25        // Stop asse ago - ErrorCode
#define StopPlcAgoQuoObj        vq26        // Stop asse ago - Quota obiettivo
#define StopPlcAgoFuture        vq27        // Stop asse ago - future espansioni

#define MOVE_PLC_AGO_IDX        28          // [INT] MOVE_PLC_AGO_IDX
#define MovePlcAgoErrCode       vq28        // Mov. asse ago - ErrorCode
#define MovePlcAgoQuoObj        vq29        // Mov. asse ago - Quota obiettivo
#define MovePlcAgoVel           vq30        // Mov. asse ago - Velocita'
#define MovePlcAgoFuture        vq31        // Mov. asse ago - future espansioni

#define POS_AX_VQ_BASE_IDX      50          // [INT] Indice prima VQ posizione assi ( PLC )
#define PosAx_C1_AsseX          vq51        // Cucitrice 1 - Asse X
#define PosAx_C1_AsseY          vq52        // Cucitrice 1 - Asse Y
#define PosAx_C1_AsseAGO        vq53        // Cucitrice 1 - Asse AGO
#define PosAx_C1_AsseCRO        vq54        // Cucitrice 1 - Asse CROCHET
#define PosAx_C1_AsseCAR        vq55        // Cucitrice 1 - Asse CARICATORE
#define PosAx_C2_AsseX          vq56        // Cucitrice 2 - Asse X
#define PosAx_C2_AsseY          vq57        // Cucitrice 2 - Asse Y
#define PosAx_C2_AsseAGO        vq58        // Cucitrice 2 - Asse AGO
#define PosAx_C2_AsseCRO        vq59        // Cucitrice 2 - Asse CROCHET
#define PosAx_C2_AsseCAR        vq60        // Cucitrice 2 - Asse CARICATORE
#define PosAx11                 vq61        // Posizione asse 11
#define PosAx12                 vq62        // Posizione asse 12
#define PosAx13                 vq63        // Posizione asse 13
#define PosAx14                 vq64        // Posizione asse 14
#define PosAx15                 vq65        // Posizione asse 15
#define PosAx16                 vq66        // Posizione asse 16


    //variabili per scrittura parametri asse
#define Vq_100_WRITE_FC_ind_X       vq100      // Vq scrittura fine corsa indietro asse X
#define Vq_101_WRITE_FC_ava_X       vq101      // Vq scrittura fine corsa avanti asse X
#define Vq_102_WRITE_FC_ind_Y       vq102      // Vq scrittura fine corsa indietro asse Y
#define Vq_103_WRITE_FC_ava_Y       vq103      // Vq scrittura fine corsa avanti asse Y

#define Vq_104_READ_FC_ind_X        vq104      // Vq lettura fine corsa indietro asse X
#define Vq_105_READ_FC_ava_X        vq105      // Vq lettura fine corsa avanti asse X
#define Vq_106_READ_FC_ind_Y        vq106      // Vq lettura fine corsa indietro asse Y
#define Vq_107_READ_FC_ava_Y        vq107      // Vq lettura fine corsa avanti asse Y
#define	Vq108_WRITE_Vel_manualeAgo_C1	vq108	//Vq da inserire nel parametro asse velocità manuale asse Ago
#define	Vq109_WRITE_Vel_manualeAgo_C2	vq109	//Vq da inserire nel parametro asse velocità manuale asse Ago
#define Vq_110_READ_FC_ind_CARIC        vq110      // Vq lettura fine corsa dietro caricatore
#define Vq_111_READ_FC_ava_CARIC        vq111      // Vq lettura fine corsa avanti caricatore

#define Vq_114_READ_FC_ind_X_C2        vq114      // Vq lettura fine corsa indietro asse X C2
#define Vq_115_READ_FC_ava_X_C2        vq115      // Vq lettura fine corsa avanti asse X C2
#define Vq_116_READ_FC_ind_Y_C2        vq116      // Vq lettura fine corsa indietro asse Y V"
#define Vq_117_READ_FC_ava_Y_C2        vq117      // Vq lettura fine corsa avanti asse Y C2
#define Vq_118_READ_FC_ind_CARIC_C2        vq118      // Vq lettura fine corsa indietro traslatore
#define Vq_119_READ_FC_ava_CARIC_C2        vq119      // Vq lettura fine corsa avanti traslatore
//------------------------------------------------------------------------
//
// #######################################
//  ATTENZIONE: NON USARE VQ1001 - VQ2999
// #######################################
//
// Vq1001 - Vq1999 Variabili per la cucitrice 1
// Vq2001 - Vq2999 Variabili per la cucitrice 2
//
// definizioni in DefCuci.h
//
//------------------------------------------------------------------------


//------------------------------------------------------------------------
// VQ da utilizzare per il ciclo automatico Vq3000-Vq3999
//------------------------------------------------------------------------
//------------------------------------------------------------------------
// VQ da utilizzare per il ciclo automatico timer Vq3000-Vq3499
//------------------------------------------------------------------------
//// vq ritardi piegatore
#define Vq3000_RitPiegatoreAD_ON		Vq3000
#define Vq3001_RitPiegatoreAD_OFF		Vq3001
#define Vq3002_RitPiegatoreAlto_ON		Vq3002
#define Vq3003_RitPiegatoreAlto_OFF		Vq3003
#define Vq3004_RitElettrocPerno_ON		Vq3004
#define Vq3005_RitElettrocPerno_OFF		Vq3005
#define Vq3006_RitPiegatore_1_ON		Vq3006
#define Vq3007_RitPiegatore_1_OFF		Vq3007
#define Vq3008_RitPiegatore_2_ON		Vq3008
#define Vq3009_RitPiegatore_2_OFF		Vq3009
#define Vq3010_RitPiegatore_3_ON		Vq3010
#define Vq3011_RitPiegatore_3_OFF		Vq3011
#define Vq3012_RitPiegatore_4_ON		Vq3012
#define Vq3013_RitPiegatore_4_OFF		Vq3013
#define Vq3014_RitBilancere_ON			Vq3014
#define Vq3015_RitBilancere_OFF			Vq3015
#define Vq3016_RitElettrocSotto_ON		Vq3016
#define Vq3017_RitElettrocSotto_OFF		Vq3017
#define Vq3018_RitPosCaricatoreCarico	Vq3018
#define Vq3019_RitPosCaricatoreScarico	Vq3019
#define Vq3020_RitPinzaCaricatore_ON	Vq3020
#define Vq3021_RitPinzaCaricatore_OFF	Vq3021
#define Vq3022_RitLancia_ON				Vq3022				//////// non utilizzato
#define Vq3023_RitLancia_OFF			Vq3023
#define Vq3024_RitCarSopraLancia		Vq3024
#define Vq3025_RitCarRispettoBarra2		Vq3025	


// cucitrice 1
#define Vq3050_RitC1_Pinza_est_ON			Vq3050				// non utilizzato
#define Vq3050_RitC1_Pinza_est_OFF			Vq3051				//
#define Vq3052_RitC1_Pinza_int_ON			Vq3052				//
#define Vq3053_Tim_C1_Scartafilo			Vq3053				//
#define Vq3054_C1_VelFeed_Reset				vq3054				// Velocità movimenti XY durante Reset chiamato da HMI

#define C1_SogliaVelRaffAgo					Vq3057				// soglia velocita' raffreddamento ago
#define C2_SogliaVelRaffAgo					Vq3058				// soglia velocita' raffreddamento ago

// Cucitrice 2
#define Vq3060_								Vq3060				// non utilizzato
#define Vq3063_Tim_C2_Scartafilo			Vq3063				//


// traslatore
#define Vq3070_RitPinzaTraslatore_ON		Vq3070				//
#define Vq3071_RitTras_Scaric				Vq3071	

// scaricatore
#define Vq3080_RitScaricatoreDxSx_ON_OK		Vq3080				//
#define Vq3081_RitScaricatoreDxSx_OFF		Vq3081				//
#define Vq3082_RitScaricatorePrimaBarra		Vq3082				//
#define Vq3083_RitScaricatoreSecondaBarra	Vq3083				//
#define Vq3084_SpostamentoPinzaPezziCorti	Vq3084				//
#define Vq3085_RitPrimaBarra_ScarSuRasafilo	Vq3085				//

//vari
#define	Vq3090_TimeoutSensori				vq3090

#define Vq3106_RitPiegatore_1_ON		Vq3106		//variabile per memorizzare tempo su sequenza Standard
#define Vq3107_RitPiegatore_1_OFF		Vq3107		//variabile per memorizzare tempo su sequenza Standard
#define Vq3108_RitPiegatore_2_ON		Vq3108		//variabile per memorizzare tempo su sequenza Standard
#define Vq3109_RitPiegatore_2_OFF		Vq3109		//variabile per memorizzare tempo su sequenza Standard
#define Vq3110_RitPiegatore_3_ON		Vq3110		//variabile per memorizzare tempo su sequenza Standard
#define Vq3111_RitPiegatore_3_OFF		Vq3111		//variabile per memorizzare tempo su sequenza Standard
#define Vq3112_RitPiegatore_4_ON		Vq3112		//variabile per memorizzare tempo su sequenza Standard
#define Vq3113_RitPiegatore_4_OFF		Vq3113		//variabile per memorizzare tempo su sequenza Standard

#define Vq3114_RitPiegatore_1_ON		Vq3114		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3115_RitPiegatore_1_OFF		Vq3115		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3116_RitPiegatore_2_ON		Vq3116		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3117_RitPiegatore_2_OFF		Vq3117		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3118_RitPiegatore_3_ON		Vq3118		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3119_RitPiegatore_3_OFF		Vq3119		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3120_RitPiegatore_4_ON		Vq3120		//variabile per memorizzare tempo su sequenza Curve3
#define Vq3121_RitPiegatore_4_OFF		Vq3121		//variabile per memorizzare tempo su sequenza Curve3

#define Vq3122_RitPiegatore_1_ON		Vq3122		//variabile per memorizzare tempo su sequenza Square
#define Vq3123_RitPiegatore_1_OFF		Vq3123		//variabile per memorizzare tempo su sequenza Square
#define Vq3124_RitPiegatore_2_ON		Vq3124		//variabile per memorizzare tempo su sequenza Square
#define Vq3125_RitPiegatore_2_OFF		Vq3125		//variabile per memorizzare tempo su sequenza Square
#define Vq3126_RitPiegatore_3_ON		Vq3126		//variabile per memorizzare tempo su sequenza Square
#define Vq3127_RitPiegatore_3_OFF		Vq3127		//variabile per memorizzare tempo su sequenza Square
#define Vq3128_RitPiegatore_4_ON		Vq3128		//variabile per memorizzare tempo su sequenza Square
#define Vq3129_RitPiegatore_4_OFF		Vq3129		//variabile per memorizzare tempo su sequenza Square

#define Vq3130_RitPiegatore_1_ON		Vq3130		//variabile per memorizzare tempo su sequenza Free
#define Vq3131_RitPiegatore_1_OFF		Vq3131		//variabile per memorizzare tempo su sequenza Free
#define Vq3132_RitPiegatore_2_ON		Vq3132		//variabile per memorizzare tempo su sequenza Free
#define Vq3133_RitPiegatore_2_OFF		Vq3133		//variabile per memorizzare tempo su sequenza Free
#define Vq3134_RitPiegatore_3_ON		Vq3134		//variabile per memorizzare tempo su sequenza Free
#define Vq3135_RitPiegatore_3_OFF		Vq3135		//variabile per memorizzare tempo su sequenza Free
#define Vq3136_RitPiegatore_4_ON		Vq3136		//variabile per memorizzare tempo su sequenza Free
#define Vq3137_RitPiegatore_4_OFF		Vq3137		//variabile per memorizzare tempo su sequenza Free

#define Vq3138_RitPiegatore_1_ON		Vq3138		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3139_RitPiegatore_1_OFF		Vq3139		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3140_RitPiegatore_2_ON		Vq3140		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3141_RitPiegatore_2_OFF		Vq3141		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3142_RitPiegatore_3_ON		Vq3142		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3143_RitPiegatore_3_OFF		Vq3143		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3144_RitPiegatore_4_ON		Vq3144		//variabile per memorizzare tempo su sequenza Curve5
#define Vq3145_RitPiegatore_4_OFF		Vq3145		//variabile per memorizzare tempo su sequenza Curve5


//------------------------------------------------------------------------
// VQ da utilizzare per il ciclo automatico pos ax Vq3500-Vq3599
//------------------------------------------------------------------------
//// vq posizioni asse caricatore
#define Vq3500_PosizioneCaricRiposo					Vq3500			// posizione caricatore a riposo fuori ingombro
#define Vq3501_PosizioneCaricCaricoTasca			Vq3501			// posizione caricatore carico tasca
#define Vq3502_PosizioneCaricScaricoTasca			Vq3502			// posizione caricatore scarico tasca
#define Vq3503_PosizioneCaricLiberaPinzaC1			Vq3503			// posizione caricatore dopo scarico per abbassare la pinza C1
#define Vq3504_AppPosizioneCaricLiberaPinzaC1		Vq3504			// posizione caricatore dopo scarico per abbassare la pinza C1 calcolata in base alla velocità
#define Vq3505_CoeffPosizioneCaricLiberaPinzaC1		Vq3505			// coefficente calcolo posizione caricatore dopo scarico per abbassare la pinza C1 calcolata in base alla velocità

//// vq velocità asse caricatore
#define Vq3510_VelocitaCaricRiposo					Vq3510			// Velocità  caricatore a vuoto %
#define Vq3511_VelocitaCaricLavoro					Vq3511			// Velocità  caricatore lavoro %
#define Vq3512_VelocitaCaricTastiPieCar				Vq3512			// Velocità  caricatore quando lo sposto con i tasti piegatore e caricatore %
//// vq posizioni asse traslatore
#define Vq3520_PosizioneTraslScaricaC2				Vq3520			// posizione traslatore scarico C2
#define Vq3521_PosizioneTraslAspCaricoTascaC1		Vq3521			// posizione traslatore aspetta carico tasca
#define Vq3522_PosizioneTraslCaricoTascaC1			Vq3522			// posizione traslatore carico tasca su cucitrice 1
#define Vq3523_PosizioneTraslAspScaricoC2			Vq3523			// posizione traslatore aspetta scarico su cucitrice 2
#define Vq3524_AppPosInizio							Vq3524			// appoggio
#define Vq3525_PosizioneTraslAspScaricoC2_XL		Vq3525			// posizione traslatore aspetta scarico su cucitrice 2 quarto XL

//// vq velocità asse traslatore
#define Vq3530_VelocitaTraslRiposo					Vq3530			// Velocità  traslatore a vuoto %
#define Vq3531_VelocitaTraslLavoro					Vq3531			// Velocità  traslatore lavoro %

//// vq posizioni taratura pinza ago
#define Vq3535_PosAsseX_TaraturaPinzaAgo			Vq3535			// posizione asse X taratura pinza ago
#define Vq3536_PosAsseY_TaraturaPinzaAgo			Vq3536			// posizione asse Y taratura pinza ago

//// scaricatore
#define Vq3540_PuntiAvvioDxSx						Vq3540			// numero punti avvicinamento scaricatore prima della fine cucitura

//// Cucitrice 2
#define Vq3550_PosAsseY_C2_OFF						Vq3550			// posizione asse Y cucitrice 2 selezionata

//// rottura filo
#define Vq3560_N_PuntiRottFiloC1						Vq3560 		// punti impostati rottura filo
#define ContPuntiRottFiloC1_IDX							3561 		// [INT]punti contati dalla molla rottura filo
#define Vq3561_ContPuntiRottFiloC1						Vq3561 		// punti contati dalla molla rottura filo
#define Vq3562_N_PuntiRottFiloC2						Vq3562 		// punti impostati rottura filo
#define ContPuntiRottFiloC2_IDX							3563 		// [INT]punti contati dalla molla rottura filo
#define Vq3563_ContPuntiRottFiloC2						Vq3563 		// punti contati dalla molla rottura filo

#define Vq3564_Debug											Vq3564
#define Vq3565_debug											Vq3565
#define Vq3566_debug											Vq3566

//// contatori
#define Vq3591_CNT_CicliAutomaticoUser					Vq3591		//  conteggio cicli automatico azzerabile da utente			valore 0.001
#define Vq3592_CNT_CicliAutomaticoVita					Vq3592		//  conteggio cicli automatico vita macchina				valore 0.001
#define Vq3593_CNT_CicliAutomaticoVitaX100K				Vq3593		//  conteggio cicli automatico vita macchina x 100000		a 100000 di vq3592 incrementa valore 0.001

//// contatori spole
#define Vq3596_ContPuntiSpolaC1							Vq3596 		//  conteggio punti fatti
#define Vq3597_ImpPuntiSpolaC1							Vq3597 		//  conteggio punti da fare
#define Vq3598_ContPuntiSpolaC2							Vq3598 		//  conteggio punti fatti
#define Vq3599_ImpPuntiSpolaC2							Vq3599 		//  conteggio punti da fare

//------------------------------------------------------------------------
// VQ da utilizzare per il ciclo automatico pos ax Vq3600-Vq3699
//------------------------------------------------------------------------
//// vq posizioni assi per movimenti da plc

    // Variabili per il movimento e lo stop dell'asse ago da PLC
#define GOAX_PLC_CARIC_IDX        	3600          // [INT] GOAX_PLC_CARIC_IDX
#define GoAxPlcCaricErrCode       	vq3600        // GoAx asse caricatore - ErrorCode
#define GoAxPlcCariObj          	vq3601        // GoAx asse caricatore - quota obbiettivo
#define GoAxPlcCaricVel           	vq3602        // GoAx asse caricatore - Velocita'
#define GoAxPlcCaric            	vq3603        // GoAx asse caricatore - Libera





// ============================================================================
//      ASSEGNAZIONE VD e VCD
// ============================================================================

#define VD_TMP_CALC_IDX         1           // [INT]
#define VdTmpCalc               vd1         // Usato per calcoli temporanei nel PLC
#define VD_TMP_CALC_T1_IDX      2           // [INT]
#define VdTmpCalcT1             vd2         // Usato per calcoli temporanei nel PLC
#define VD_TMP_CALC_T2_IDX      3           // [INT]
#define VdTmpCalcT2             vd3         // Usato per calcoli temporanei nel PLC
#define VD_TMP_OP_T1_IDX      	4           // [INT]
#define VdTmpOP_T1		        vd4         // Usato per calcoli temporanei nel PLC
#define VD_TMP_OP_T2_IDX      	5           // [INT]
#define VdTmpOP_T2		        vd5         // Usato per calcoli temporanei nel PLC
#define VD_TMP_OP_T3_IDX      	6           // [INT]
#define VdTmpOP_T3		        vd6         // Usato per calcoli temporanei nel PLC


#define VCD_RPM_AGO_IDX         1           // [INT]
#define VcdRpmAgo               vcd1        // Rpm ago impostato nel profilo ( codice 2863 )

#define VCD_TENSIONE_IDX        2           // [INT]
#define Vcd2_Tensione           vcd2        // tensine filo nel profilo ( codice 2863 )

	// Codici programma OP
#define VCD11_OP1_IDX        	11           // [INT]
#define Vcd11_OP1			    vcd11        // codice OP1		T1_o8_C1_Retrattile_AC
#define VCD12_OP2_IDX        	12           // [INT]
#define Vcd12_OP2			    vcd12        // codice OP2		T1_o5_C1_Ranocchia_retrat
#define VCD13_OP3_IDX        	13           // [INT]
#define Vcd13_OP3			    vcd13        // codice OP3		T1_o14_C1_Scalino_Piedino			T2_o101_C2_Scalino_Piedino
#define VCD14_OP4_IDX        	14           // [INT]
#define Vcd14_OP4			    vcd14        // codice OP4
#define VCD15_OP5_IDX        	15           // [INT]
#define Vcd15_OP5			    vcd15        // codice OP5
#define VCD16_OP6_IDX        	16           // [INT]
#define Vcd16_OP6			    vcd16        // codice OP6
#define VCD17_OP7_IDX        	17           // [INT]
#define Vcd17_OP7			    vcd17        // codice OP7
#define VCD18_OP8_IDX        	18           // [INT]
#define Vcd18_OP8			    vcd18        // codice OP8
#define VCD19_OP9_IDX        	19           // [INT]
#define Vcd19_OP9			    vcd19        // codice OP9
#define VCD20_OP10_IDX        	20           // [INT]
#define Vcd20_OP10			    vcd20        // codice OP10
'spianare allo start alla fine e all abort
'togliere il secondo valore di tensione filo


// ============================================================================
//      ASSEGNAZIONE VA
// ============================================================================

#define C1_PRG_NAME_IDX         1           // [INT]
#define C1_PrgName              va1         // Nome del programma CN da eseguire

#define C1_UDF_NAME_IDX         2           // [INT]
#define C1_UdfName              va2         // Nome UDF - ( parametri, tabellone, profilo )


#define C2_PRG_NAME_IDX         11          // [INT]
#define C2_PrgName              va11        // Nome del programma CN da eseguire

#define C2_UDF_NAME_IDX         12          // [INT]
#define C2_UdfName              va12        // Nome UDF - ( parametri, tabellone, profilo )


#define SUP_PRG_NAME_IDX        21          // [INT]
#define Sup_PrgName             va21        // Nome del programma CN del canale 3


//------------------------------------------------------------------------
// Va31 - Va64 Variabili di uso generale

#define App_Ver                  va31        // Versione applicativo


//******************************************************************
//----------------------- DEFINIZIONE  INGRESSI --------------------
//******************************************************************
#define i1_Pulsanti_start		din1	//i71_Pulsanti_start
#define i2_C1_Pedana			din2	//i69_C1_Pedana
#define i3_C1_PedanaPiegatore	din3	//i67_C1_PedanaPiegatore
#define i4_Pressostato			din4	//i106_Pressostato
#define i5_Emg					din5	//i75_Emg		
#define i6_ROtturaFilo			din6	
#define i7_C1_FcMinAsseX		din7	//i65_C1_FcMinAsseX
#define i8_C1_FcMaxAsseY		din8	//i66_C1_FcMaxAsseY
#define i9_C1_FcMinAsseY		din9	//i68_C1_FcMinAsseY 
#define i10						din10
#define i11_C1_FcZeroAgo		din11	//i70_C1_FcZeroAgo
#define i12_FcPinzaCaricoAlta	din12	//i34_FcPinzaCaricoAlta
#define i13_C1_PinzaIntBassa	din13	//i72_C1_PinzaIntBassa
#define i14_C1_PinzaEstAlta		din14	//i79_C1_PinzaEstAlta
#define i15_C1_FcZeroCrochet	din15	//i77_C1_FcZeroCrochet
#define i16_FcPiegatore_AV		din16	//i33_FcPiegatore_AV

#define i17_FcPiegatore_DI		din17	//i35_FcPiegatore_DI
#define i18_FcMinCaricatore1 	din18	//i36_FcMinCaricatore1
#define i19_FcPiegatoreBasso	din19	//i37_FcPiegatoreBasso
#define i20_FcLancia_DI			din20	//i39_FcLancia_DI
#define i21_PulsResetFolder		din21	//i73_PulsResetFolder
#define i22_C1_PulsStopTesta	din22	//i78_C1_PulsStopTesta
#define i23_Rinforzo_ready		din23
#define i24                     din24
#define i25_Rinforzo_Attivo		din25
#define i26_C1_ReadyAsseX		din26	//i76_C1_ReadyAsseX
#define i27                     din27
#define i28                     din28
#define i29                     din29
#define i30_C1_ReadyAsseY		din30	//i74_C1_ReadyAsseY
#define i31_Bilanciere_Alto     din31
#define i32_Bilanciere_Basso    din32
#define i33                     din33	//ex 1
#define i34_C2_Pedana			din34	//ex 2 i97_C2_Pedana
#define i35                     din35	//ex 3
#define i36                     din36	//ex 4
#define i37                     din37	//ex 5
#define i38_C2_RotturaFilo		din38	//ex 6
#define i39_C2_FcMinAsseX		din39	//ex 7 i101_C2_FcMinAsseX
#define i40_C2_FcMaxAsseY		din40	// ex 8 i103_C2_FcMaxAsseY
#define i41_C2_FcMinAsseY		din41	//ex 9 i98_C2_FcMinAsseY
#define i42						din42	//ex 10
#define	i43_C2_FcZeroAgo		din43	//ex11  i99_C2_FcZeroAgo
#define i44						din44	//ex 12
#define i45_C2_FcPinzaIntBassa	din45 //ex 13 i102_C2_FcPinzaIntBassa
#define i46						din46	//ex 14
#define i47_C2_FcZeroCrochet	din47	//ex 15 i100_C2_FcZeroCrochet
#define i48						din48	//ex 16
#define i49_FcPinzaTraslAlta	din49   //ex 17 i104_FcPinzaTraslAlta
#define	i50_FcMinCaricatore2	din50	//ex 18 i111_FcMinCaricatore2
#define i51						din51	//ex 19
#define i52						din52	//ex 20
#define i53						din53	//ex 21
#define i54_C2_PulsStopTesta	din54	//ex 22 i109_C2_PulsStopTesta
#define i55						din55	//ex 23
#define i56						din56	//ex 24
#define i57						din57	//ex 25
#define i58_C2_ReadyAsseX		din58	//ex 26 i107_C2_ReadyAsseX
#define i59						din59	//ex 27
#define i60						din60	//ex 28
#define i61						din61	//ex 29
#define i62_C2_ReadyAsseY		din62 	//ex 30     //i105_C2_ReadyAsseY
#define i63						din63	//ex 31
#define i64						din64	//ex 32
// ============================================================================
//      USCITE DIGITALI
// ============================================================================


#define o1_Enable_AssiXY_C1C2		dout1       // o75_Enable_AssiXY_C1C2
#define o2							dout2       // Output 2
#define o3_C1_Pinza_int				dout3       //o66_C1_Pinza_int
#define o4_C1_Pinza_est				dout4       // o67_C1_Pinza_est
#define o5_C1_Ranocchia_retrat		dout5       // o73_C1_Ranocchia_retrat
#define o6_Pinza_carico_Su_Giu		dout6       // o70_Pinza_carico_Su_Giu
#define o7_C1_Cambio_Pinze			dout7       // o71_C1_Cambio_Pinze
#define o8_C1_Retrattile_AC			dout8       // o68_C1_Retrattile_AC
#define o9_C1_rasafilo				dout9       // o74_C1_rasafilo 9
#define o10_Lancia_AD				dout10      // o39_Lancia_AD
#define o11_Lentezza_Tasca_AD		dout11      // Output 11
#define o12_Cambio_Lamelle_4_5		dout12      // o44_Cambio_Lamelle_4_5
#define o13_C1_Piedino				dout13      // o65_C1_Piedino
#define o14_C1_Scalino_Piedino		dout14      // o72_C1_Scalino_Piedino
#define o15_C1_RaffreddamentoAgo	dout15      // o69_C1_scartafilo
#define o16_Piegatore_AD			dout16      // o40_Piegatore_AD

#define o17_Piegatore_Su_Giu		dout17      // o41_Piegatore_Su_Giu
#define o18_C1_bloccaFiloMagente	dout18      // Output 18	
#define o19_Bilanciere_Su_Giu		dout19      // o42_Bilanciere_Su_Giu
#define o20_Piegatore_4				dout20      // o43_Piegatore_4 
#define o21_Piegatore_1				dout21      // o33_Piegatore_1	
#define o22_Piegatore_2				dout22      // o34_Piegatore_2
#define o23_Piegatore_3				dout23      // o35_Piegatore_3
#define o24_Cambio_lame_lateral		dout24	    // o36_Cambio_lame_lateral
#define o25_Cambio_lama_front		dout25      // o37_Cambio_lama_front
#define o26_Cambio_corpo			dout26      // o38_Cambio_corpo
#define o27_EvAspiratore			dout27      // o45_EvAspiratore
#define o28_Valvolone				dout28      // o107_Valvolone
#define o29							dout29      // o104_Prima_barra
#define o30							dout30      // o105_Seconda_barra
#define o31							dout31      // Output 31
#define o32						dout32      // o103_Scaric_dx_sx

#define o33							dout33		//ex 1
#define o34							dout34		//ex 2
#define o35_C2_Pinza_int			dout35		//ex 3 o98_C2_Pinza_int
#define o36							dout36		//ex 4
#define o37							dout37		//ex5
#define o38							dout38		//ex 6
#define o39_C2_Cambio_Pinze			dout39		//ex7  o100_C2_Cambio_Pinze
#define o40							dout40		//ex8
#define o41_C2_rasafilo				dout41		//ex 9 o106_C2_rasafilo
#define o42							dout42		//ex 10
#define o43_C2_RaffreddamentoAgo	dout43      //ex11  o15_C1_RaffreddamentoAgo
#define o44							dout44		//ex12
#define o45_C2_Piedino				dout45		//ex 13 o97_C2_Piedino
#define o46							dout46		//ex 14
#define o47							dout47		//ex 15
#define o48_Prima_barra				dout48		//ex 16 o104_Prima_barra
#define	o49_Seconda_barra			dout49		//ex 17 o105_Seconda_barra
#define o50							dout50		//ex 18
#define o51							dout51		//ex 19
#define o52							dout52		//ex 20
#define o53_C2_Scalino_Piedino		dout53		//ex 21 o101_C2_Scalino_Piedino
#define o54_C2_bloccaFiloMagente	dout54		// ex22	o18_C1_bloccaFiloMagente
#define o55							dout55		//ex 23
#define o56							dout56		//ex 24
#define o57							dout57		//ex 25
#define o58							dout58		//ex 26
#define o59							dout59		//ex 27
#define o60							dout60		//ex 28
#define o61							dout61		//ex 29
#define o62_Pinza_tras_su_giu		dout62		//ex 30 o102_Piza_tras_su_giu
#define o63							dout63		//ex 31
#define o64_Scaric_dx_sx			dout64		//ex 32 o103_Scaric_dx_sx




// ============================================================================
//      USCITE ANALOGICHE
// ============================================================================
#define	AO97_ValoreTensioneTesta1			97		//  [INT] valore scrittura analogica per elettrocalamita tensione testa 1 0-10000 mV
#define	AO98_ValoreTensioneTesta2			98		//  [INT] valore scrittura analogica per elettrocalamita blocca filo testa 1  0-10000 mV
#define	AO99_ValoreElettrocSotto			99		//  [INT] valore scrittura analogica per elettrocalamita 0-10000 mV
#define AO100_ValoreElettrocSopra          	100     	//  [INT] valore scrittura analogica per elettrocalamita perno 0-10000 mV

//ch1 tens master : AO97
//ch2 blocca filo master :  out 18
//ch3 magnete sotto : AO99
//ch4 magnete sopra : AO100
//ch5 tensione slave : AO98
//ch6 blocca filo slave : out54
