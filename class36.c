#include <stdio.h>

int main (){

    int index;

    char * nomesAlunos[3][3] = 
    {
        {"Aluno 0", "Ptg: 30", "Mat: 90\n"},
        {"Aluno 1", "Ptg: 60", "Mat: 60\n"},
        {"Aluno 2", "Ptg: 90", "Mat: 30\n"}
    };

    printf("\nDigite o número dos alunos que queira ver as notas... \n");
    printf("\nPara o aluno 0, digite 0");
    printf("\nPara o aluno 1, digite 1");
    printf("\nPara o aluno 2, digite 2");
    printf("\n\nAluno: ");
    scanf("%d", &index);
    printf("As notas do %s são: %s, %s ... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    
}