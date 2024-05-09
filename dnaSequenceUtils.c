#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "getCode.c"

#define SIZE 100
#define NUMPROTEINS 64

/*Function 1 Prototype
Checks if two nucleotides form a base pair.*/
bool isBasePair(char neu1, char neu2);

/*Function 2 Prototype
Checks if two strands form a valid DNA sequence.*/
bool isItaDnaSequence(char strand1[SIZE], char strand2[SIZE]);

/*Function 3 Prototype
Reverses a DNA strand.*/
void reverse(char aStrand[SIZE]);

/*Function 4 Prototype
Complements a DNA strand.*/
void complementIt(char aStrand[SIZE]);

/*Function 5 Prototype
Checks if a DNA strand is a palindrome.*/
bool isItPalindrome(char aStrand[SIZE]);

/*Function 6 Prototype
Checks if a DNA strand and its complement form a palindrome.*/
bool isStrandDnaPalindrome(char aStrand[SIZE]);

/*Function 7 Prototype
Counts occurrences of a nucleotide in a strand.*/
int howMany(char aStrand[SIZE], char neu);

/*Function 8 Prototype
Transcribes DNA to mRNA.*/
void dnaToMrna(char aSeq[SIZE], char mRNA[SIZE]);

/*Function 9 Prototype
Translates DNA to mRNA and then to proteins.*/
void translateDnaToMrnaProteins(char aSeq[SIZE]);

/*Function "10" Prototype*/
char getCode(char protein[3]);

// Function 1 Header
bool isBasePair(char neu1, char neu2) {
    // If statement used to check if it is a base pair
    if ((neu1 == 'A' && neu2 == 'T') || (neu1 == 'T' && neu2 == 'A') || (neu1 == 'C' && neu2 == 'G') ||
        (neu1 == 'G' && neu2 == 'C')) {
        return true;
    } else {
        return false;
    }
}

// Function 2 Header
bool isItaDnaSequence(char strand1[SIZE], char strand2[SIZE]) {
    int i;
    bool result;

    // Uses isBasePair to check if it is a dna sequence
    for (i = 0; i < (strlen(strand1)); i++) {
        result = isBasePair(strand1[i], strand2[i]);
        if (result == false) {
            break;
        }
    }
    return result;
}

// Function 3 Header
void reverse(char aStrand[SIZE]) {
    int i = 0;
    char reversedArray[(strlen(aStrand))];

    // For statement to reverse the array
    for (i = 0; i < (strlen(aStrand)); i++) {
        reversedArray[(((strlen(aStrand)) - 1) - i)] = aStrand[i];
    }
    // To apply parameter two to the first one
    strcpy(aStrand, reversedArray);
}

// Function 4 Header
void complementIt(char aStrand[SIZE]) {
    int i;

    // Goes through the array and complements the given element
    for (i = 0; i < (strlen(aStrand)); i++) {
        if (aStrand[i] == 'A') {
            aStrand[i] = 'T';
        } else if (aStrand[i] == 'T') {
            aStrand[i] = 'A';
        } else if (aStrand[i] == 'G') {
            aStrand[i] = 'C';
        } else if (aStrand[i] == 'C') {
            aStrand[i] = 'G';
        }
    }
}

// Function 5 Header
bool isItPalindrome(char aStrand[SIZE]) {
    int i;
    char palinArray[(strlen(aStrand))];
    // Turns the function around to later be compared
    for (i = 0; i < strlen(aStrand); i++) {
        palinArray[(((strlen(aStrand)) - 1) - i)] = aStrand[i];
    }
    // Compares the given array and the palindrome array
    for (i = 0; i < (strlen(aStrand)); i++) {
        if (aStrand[i] != palinArray[i]) {
            return false;
        }
    }
    return true;
}

// Function 6 Header
bool isStrandDnaPalindrome(char aStrand[SIZE]) {
    int i;
    char compStrand[strlen(aStrand)];
    char reversedArray[(strlen(aStrand))];

    // Goes through the array and complements the given element
    for (i = 0; i < (strlen(aStrand)); i++) {
        if (aStrand[i] == 'A') {
            compStrand[i] = 'T';
        } else if (aStrand[i] == 'T') {
            compStrand[i] = 'A';
        } else if (aStrand[i] == 'G') {
            compStrand[i] = 'C';
        } else if (aStrand[i] == 'C') {
            compStrand[i] = 'G';
        }
    }

    // To reverse the array given
    for (i = 0; i < (strlen(aStrand)); i++) {
        reversedArray[(((strlen(aStrand)) - 1) - i)] = compStrand[i];
    }

    // Used to reset incremental i
    i = 0;

    // To compare the given array to the reversed array
    while (i < (strlen(aStrand))) {
        if (aStrand[i] != reversedArray[i]) {
            return false;
        }
        i++;
    }
    return true;
}

// Function 7 Header
int howMany(char aStrand[SIZE], char neu) {
    int i;
    int arrayCount = 0;

    // Goes through the arrays elements and counts each one
    for (i = 0; i < (strlen(aStrand)); i++) {
        if (aStrand[i] == neu) {
            arrayCount++;
        }
    }
    return arrayCount++;
}

// Function 8 Header
void dnaToMrna(char aSeq[SIZE], char mRNA[SIZE]) {
    int i;

    // Goes through the array and complements the given element
    for (i = 0; i < (strlen(aSeq)); i++) {
        if (aSeq[i] == 'A') {
            mRNA[i] = 'U';
        } else if (aSeq[i] == 'T') {
            mRNA[i] = 'A';
        } else if (aSeq[i] == 'G') {
            mRNA[i] = 'C';
        } else if (aSeq[i] == 'C') {
            mRNA[i] = 'G';
        }
    }
}

// Function 9 Header
void translateDnaToMrnaProteins(char aSeq[SIZE]) {
    int i = 0;
    // int p = 0;
    char mRNA[SIZE];
    char codon[4];
    char letter;

    // Function from function 8
    for (i = 0; i < (strlen(aSeq)); i++) {
        if (aSeq[i] == 'A') {
            mRNA[i] = 'U';
        } else if (aSeq[i] == 'T') {
            mRNA[i] = 'A';
        } else if (aSeq[i] == 'G') {
            mRNA[i] = 'C';
        } else if (aSeq[i] == 'C') {
            mRNA[i] = 'G';
        }
    }

    mRNA[i] = '\0';  // Null-terminate the mRNA string

    printf("\nDNA: %s\nmRNA: %s, which translate to: ", aSeq, mRNA);

    // Translate mRNA to proteins
    for (i = 0; i < strlen(mRNA) - 2; i += 3) {
        strncpy(codon, &mRNA[i], 3);
        codon[3] = '\0';  // Null-terminate the codon string
        letter = getCode(codon);

        if (letter != 'Z') {
            printf("\n%s : %c", codon, letter);
        } else {
            printf("\n%s : %c", codon, letter);
            printf(" - The input sequence has an incorrect base");
        }
    }
}