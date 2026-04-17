#include <stdio.h>

int main(){
  char exec = 'E', response;
  char studentName[20], subject[12];
  int docId, studentId, subjectCount = 0;
  float subjectAverage = 0., totalAverage = 0., averageSum = 0.;

  while (exec != 'S' || exec != 's'){
    printf("#################################################\n");
    printf("SEJA BEM-VINDO AO SISTEMAS DE MEDIAS E MATRICULAS\n");
    printf("#################################################\n\n");

    printf("Para iniciar, digite o nome do aluno:\n");
    scanf("%s", &studentName);
    printf("\nAgora digite o numero do Documento de Identificacao do aluno (somente numeros):\n");
    scanf(" %d", &docId);
    printf("\nPor fim, digite o numero de matricula do aluno (somente numeros):\n");
    scanf(" %d", &studentId);

    do
    {
      printf("\nOK! Agora insira o nome da disciplina cursada:\n");
      scanf("%s", &subject);
      printf("\nInsira a media do aluno nesta disciplina:\n");
      scanf(" %f", &subjectAverage);

      if(subjectAverage >= 0){
        subjectCount += 1;
        averageSum += subjectAverage;
      }
    } while (subjectAverage >= 0);
    
    totalAverage = averageSum / subjectCount;
    printf("\nMEDIA GERAL DO ALUNO: %.1f", totalAverage);

    if(totalAverage >= 7){
      printf("\n\nO aluno foi APROVADO. Escolha uma das 5 disciplinas avancadas para cursar:\n1-DISCIPLINA AVANÇADA I\n2-DISCIPLINA AVANÇADA II\n3-DISCIPLINA AVANÇADA III\n4-DISCIPLINA AVANÇADA IV\n5-DISCIPLINA AVANÇADA V\n");
    }else{
      printf("\n\nO aluno foi REPROVADO. O aluno deseja repetir a disciplina? (s/n)");
      scanf(" %c", &response);
      if (response == 's')
      {
        printf("\n\nEscolha uma das 4 disciplinas para cursar:\n1-DISCIPLINA BASICA I\n2-DISCIPLINA BASICA II\n3-DISCIPLINA BASICA III\n4-DISCIPLINA BASICA IV\n");
      } else {
        printf("\n\nEscolha uma das 5 disciplinas para cursar:\n1-DISCIPLINA ALTERNATIVA I\n2-DISCIPLINA ALTERNATIVA II\n3-DISCIPLINA ALTERNATIVA III\n4-DISCIPLINA ALTERNATIVA IV\n5-DISCIPLINA ALTERNATIVA V\n");
      }
    }

    exec = 'S';
    printf(" %c\n", exec);

  }

  return 0;
}
