#include "unittest.h"
#include "editdistance.h"

UnitTest::UnitTest(){

}

void UnitTest::run(){
    bool passed = true;
    passed &= editdistance();
    printf("%s\n", passed?"PASSED":"FAILED");
}

bool UnitTest::editdistance(){
    char* str1[3] = {
        "CCTATCAGGGAGCTGTGGGCCAGCCAGGAGGCAGCACATGCCCAATCCCAGGCCCCTCCCGTTGTAAGTTCCCGTTCTACCCGACAGGGACCTGCTGACAAAAGACAGGGCTGGAGAGCCAGCCTGAAGGCCCTGGGACCCTTCTATCCAC",
        "ACTTATGTTTTTAAATGAGGATTATTGATAGTACTCTTGGTTTTTATACCATTCAGATCACTGAATTTATAAAGTACCCATCTAGTACTTCAAAAAGTAAAGTGTTCTGCCAGATCTTAGGTATAGAGGACCCTAACACAGTAAGATCGGA",
        "TAGGGGTATGAGTAGAGCTGAGCTGGGGGAAAAGAGGGAAATTCCCAGGGGTGGAGGAAGAGTCAAGTCCCCCTCTACACCTAGAGGATGAACTTAAGGAAGGAGTGAAGGTCATATGTGTTGTTCCTGAGGAAAAGGCCGCTGTAGAAAA",
        };
    char* str2[3] = {
        "CCTATCAGGGAGCTGTGGGCCAGCCAGGAGGCAGCACATGCCCAATCCCAGGCCCCTCCCGTTGTAAGTTCCCGTTCTACCCGACAGGGACCTGCTGACAAAAGACAGGGCTGGAGAGCCAGCCTGAAGGCCCTGGGACCCTTCTATCCAC",
        "ACTTATGTTTTTAAATGAGGATTATTGATAGTACTCTTGGTTTTTATACCATTCAGATCACTGAATTTATAAAGTACCCATCTAGTACTTGAAAAAGTAAAGTGTTCTGCCAGATCTTAGGTATAGAGGACCCTAACACAGTAAGATCGGA",
        "CCTGGGCCTGGCCCTTGTCTAAAACTGACTCTTTTGAGGGTGATTTTGGATGTTCTTAGTAGAGTCTCTCACCTGTACTTTCCTTGCCTAAGGTGCTGTCTTCTCTTGCAGGTTGCCTACACGTTCCTCACATGCCCTAAGAACCATGGGA",
        };
    int result[3] = {
        0,
        1,
        90,
        };

    for(int i=0;i<3;i++){
        int ret  = edit_distance(str1[i], strlen(str1[i]), str2[i], strlen(str2[i]));
        if(ret != result[i]){
            printf("Fail: (edit_distance_dp), expect %d, but got %d, \n%s\n%s\n", result[i], ret, str1[i], str2[i]);
            return false;
        }
    }
    return true;
}