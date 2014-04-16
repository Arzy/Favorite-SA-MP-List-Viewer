#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// D�claration des defines
#define PATH                    "./USERDATA.DAT" // A modifier selon la position du fichier
#define MAX_LENGTH_HOSTNAME     512
#define MAX_LENGTH_SERV_NAME    50

// D�claration des types utilis�s
typedef struct {
    char fileIdentificator[4]; // Normalement "SAMP"
    unsigned int fileVersion; // Normalement 0x00000001
    unsigned int serversCount; // Nombre de serveurs dans la liste.
} USERDATA_HEADER;

typedef struct {
    unsigned int strlen_IP; //
    char IP[MAX_LENGTH_HOSTNAME]; //
    unsigned int port; // Port
    unsigned int strlen_ServName; //
    char servName[MAX_LENGTH_SERV_NAME]; //
    double theVoid; // 0x00000000, yeah, really.

} USERDATA_SERVER;

// D�claration des Prototypes
USERDATA_SERVER Extraction_InfoServ(FILE *);
USERDATA_HEADER Extraction_InfoHeader(FILE *);
void AffichageServer(USERDATA_SERVER);

#endif // MAIN_H_INCLUDED
