/*AI generated*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "dnaSequenceUtils.c"

void test_isBasePair() {
    printf("Testing isBasePair...\n");
    printf("A and T: %s\n", isBasePair('A', 'T') ? "true" : "false");
    printf("G and C: %s\n", isBasePair('G', 'C') ? "true" : "false");
    printf("A and G: %s\n", isBasePair('A', 'G') ? "true" : "false");
}

void test_isItaDnaSequence() {
    printf("Testing isItaDnaSequence...\n");
    char strand1[SIZE] = "ATCG";
    char strand2[SIZE] = "TAGC";
    printf("ATCG and TAGC: %s\n", isItaDnaSequence(strand1, strand2) ? "true" : "false");
    strcpy(strand2, "TACC");
    printf("ATCG and TACC: %s\n", isItaDnaSequence(strand1, strand2) ? "true" : "false");
}

void test_reverse() {
    printf("Testing reverse...\n");
    char strand[SIZE] = "ATCG";
    reverse(strand);
    printf("Reverse of ATCG: %s\n", strand);
}

void test_complementIt() {
    printf("Testing complementIt...\n");
    char strand[SIZE] = "ATCG";
    complementIt(strand);
    printf("Complement of ATCG: %s\n", strand);
}

void test_isItPalindrome() {
    printf("Testing isItPalindrome...\n");
    char strand[SIZE] = "ATCGCTA";
    printf("ATCGCTA: %s\n", isItPalindrome(strand) ? "true" : "false");
    strcpy(strand, "ATCGCTAG");
    printf("ATCGCTAG: %s\n", isItPalindrome(strand) ? "true" : "false");
}

void test_isStrandDnaPalindrome() {
    printf("Testing isStrandDnaPalindrome...\n");
    char strand[SIZE] = "ATCGCTA";
    printf("ATCGCTA: %s\n", isStrandDnaPalindrome(strand) ? "true" : "false");
    strcpy(strand, "ATCGCTAG");
    printf("ATCGCTAG: %s\n", isStrandDnaPalindrome(strand) ? "true" : "false");
}

void test_howMany() {
    printf("Testing howMany...\n");
    char strand[SIZE] = "ATCGATCG";
    printf("A in ATCGATCG: %d\n", howMany(strand, 'A'));
    printf("G in ATCGATCG: %d\n", howMany(strand, 'G'));
}

void test_dnaToMrna() {
    printf("Testing dnaToMrna...\n");
    char dna[SIZE] = "ATCG";
    char mrna[SIZE];
    dnaToMrna(dna, mrna);
    printf("mRNA of ATCG: %s\n", mrna);
}

void test_translateDnaToMrnaProteins() {
    printf("Testing translateDnaToMrnaProteins...\n");
    char dna[SIZE] = "CGTAGGCAT";
    translateDnaToMrnaProteins(dna);
}

int main() {
    test_isBasePair();
    printf("\n");
    test_isItaDnaSequence();
    printf("\n");
    test_reverse();
    printf("\n");
    test_complementIt();
    printf("\n");
    test_isItPalindrome();
    printf("\n");
    test_isStrandDnaPalindrome();
    printf("\n");
    test_howMany();
    printf("\n");
    test_dnaToMrna();
    printf("\n");
    test_translateDnaToMrnaProteins();
    return 0;
}
