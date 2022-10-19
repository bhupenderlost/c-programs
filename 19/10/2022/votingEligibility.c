#include <stdio.h>

int main() {
    int ageOfCandidate;
    printf("Enter the age of the candidate:");
    scanf("%d", &ageOfCandidate);
    if(ageOfCandidate >= 18) {
        printf("Candidate can cast the vote");
    }else {
        printf("Candidate can't cast the vote");
    }
    return 0;
}
