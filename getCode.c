#define SIZE 100
#define NUMPROTEINS 64

char getCode(char protein[3]) {
    // array allProteins has a list of all 3-triplet amino acids required for this assignment

    char allProteins[NUMPROTEINS][SIZE] = {
        "GCA", "GCC", "GCG", "GCU", "AGA", "AGG", "CGA", "CGC", "CGG", "CGU", "GAC", "GAU", "AAC", "AAU", "UGC", "UGU",
        "GAA", "GAG", "CAA", "CAG", "GGA", "GGC", "GGG", "GGU", "CAC", "CAU", "AUA", "AUC", "AUU", "UUA", "UUG", "CUA",
        "CUC", "CUG", "CUU", "AAA", "AAG", "AUG", "UUC", "UUU", "CCA", "CCC", "CCG", "CCU", "AGC", "AGU", "UCA", "UCC",
        "UCG", "UCU", "ACA", "ACC", "ACG", "ACU", "UGG", "UAC", "UAU", "GUA", "GUC", "GUG", "GUU"};

    // array allCodes stores the single-letter code of each triplet given in the above array

    char allCodes[NUMPROTEINS] = {'A', 'A', 'A', 'A', 'R', 'R', 'R', 'R', 'R', 'R', 'D', 'D', 'N', 'N', 'C', 'C',
                                  'E', 'E', 'Q', 'Q', 'G', 'G', 'G', 'G', 'H', 'H', 'I', 'I', 'I', 'L', 'L', 'L',
                                  'L', 'L', 'L', 'K', 'K', 'M', 'F', 'F', 'P', 'P', 'P', 'P', 'S', 'S', 'S', 'S',
                                  'S', 'S', 'T', 'T', 'T', 'T', 'W', 'Y', 'Y', 'V', 'V', 'V', 'V'};

    for (int i = 0; i < NUMPROTEINS; i++) {
        if (strncmp(protein, allProteins[i], 3) == 0) {
            return allCodes[i];
        }
    }

    return 'Z';  // to indicate an incorrect code - code that doesn't exist in array allCodes
}
