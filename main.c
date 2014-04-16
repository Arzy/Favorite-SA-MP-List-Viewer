#include <stdio.h>
#include "main.h"

int main (void) {
    unsigned int i;
    FILE* fic;
    USERDATA_HEADER header;
    USERDATA_SERVER server, server2;

    fic = fopen(PATH, "rb"); // Ouverture de USERDAT.DAT

    if (fic == NULL) // Fichier non ouvert
        return 1;

    else { // Fichier ouvert

        header = Extraction_InfoHeader(fic);

        for (i = 0; i < header.serversCount; i++) {
            server = Extraction_InfoServ(fic);
            AffichageServer(server);
        }

    }

    fclose (fic);
    return 0;
}


