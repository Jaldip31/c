#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=50;i++){
        if(i%3==0 && i%5==0){
            printf("\tSkill Qode ,");
        }
        else if(i%3==0){
            printf("\tSkill,");
        }
        else if(i%5==0){
            printf("\tQode,");
        }
        else{
            printf("\t%d,",i);
        }
    }
}
/*
1,	2,	Skill,	4,	Qode,	Skill,	7,	8,	Skill,	Qode,	11,	Skill,	13,	14,	Skill Qode ,	16,	17,	Skill,	19,	Qode,	Skill,	22,	23,	Skill,	Qode,	26,	Skill,	28,	29,	Skill Qode ,	31,	32,	Skill,	34,	Qode,	Skill,	37,	38,	Skill,	Qode,	41,	Skill,	43,	44,	Skill Qode ,	46,	47,	Skill,	49,	Qode,
*/