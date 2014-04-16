#include <stdio.h>
#include "main.h"

USERDATA_HEADER Extraction_InfoHeader(FILE * fic) {
    USERDATA_HEADER info_header;

    fread(&info_header, sizeof (info_header), 1, fic);

    return info_header;
}

USERDATA_SERVER Extraction_InfoServ(FILE * fic) {
    USERDATA_SERVER info_serv;

    fread(&info_serv.strlen_IP, sizeof (info_serv.strlen_IP), 1, fic); // Fonctionne

    fread(&info_serv.IP, info_serv.strlen_IP, 1, fic); // Fonctionne
    info_serv.IP[info_serv.strlen_IP] = 0;

    fread(&info_serv.port, sizeof (info_serv.port), 1, fic); // Fonctionne

    fread(&info_serv.strlen_ServName, sizeof (info_serv.strlen_ServName), 1, fic); // Fonctionne

    fread(&info_serv.servName, info_serv.strlen_ServName, 1, fic); // Fonctionne
    info_serv.servName[info_serv.strlen_ServName] = 0;

    fread(&info_serv.theVoid, sizeof (info_serv.theVoid), 1, fic); // Fonctionne

    return info_serv;
}


void AffichageServer(USERDATA_SERVER server_information) {

    printf("\n%s:%d - %s", server_information.IP, server_information.port, server_information.servName);

    return;
}
