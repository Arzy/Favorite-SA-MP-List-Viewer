#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// Déclaration des defines
#define PATH                    "./USERDATA.DAT"
#define MAX_LENGTH_HOSTNAME     512
#define MAX_LENGTH_SERV_NAME    50

// Déclaration des types utilisés
typedef struct {
    char fileIdentificator[4]; // Normally "SAMP"
    unsigned int fileVersion; // Normally 0x00000001
    unsigned int serversCount; // Depends on your number of servers in your fav list.
} USERDATA_HEADER;

typedef struct {
    unsigned int strlen_IP; //
    char IP[MAX_LENGTH_HOSTNAME]; //
    unsigned int port; // Port
    unsigned int strlen_ServName; //
    char servName[MAX_LENGTH_SERV_NAME]; //
    double theVoid; // 0x00000000, yeah, really.

} USERDATA_SERVER;

// Déclaration des Prototypes
USERDATA_SERVER Extraction_InfoServ(FILE *);
USERDATA_HEADER Extraction_InfoHeader(FILE *);
void AffichageServer(USERDATA_SERVER);

#endif // MAIN_H_INCLUDED
