/*
O programa a ser desenvolvido em linguagem C devera apresentar um menu principal que permaneca em execucao contınua ate que o usuario digite S ou s para encerrar o sistema. No interior do laco de repeticao, o sistema devera solicitar as seguintes informacoes:
• Nome do aluno;
• Documento de identificacao;
• Numero de matrıcula.
Em seguida, o programa devera receber as disciplinas cursadas pelo aluno, contendo:
• Nome da disciplina;
• Media obtida na disciplina.
A entrada das disciplinas e respectivas notas devera ocorrer de forma contınua, sendo finalizada quando for informada uma nota negativa, a qual funcionara como criterio de parada. Durante o processo de insercao das notas, o programa devera:
• Acumular a soma das medias informadas;
• Contabilizar a quantidade de disciplinas registradas;
• Calcular a media final do aluno ao termino da entrada de dados.
Apos a insercao de uma nota negativa, o sistema devera exibir a media final das disciplinas cursadas e proceder a seguinte verificacao:
• Caso a media seja maior ou igual a 7,0, o aluno devera ser considerado aprovado, podendo escolher entre cinco novas disciplinas que deverao ser apresentadas pelo sistema;
• Caso a media seja inferior a 7,0, o aluno devera ser considerado reprovado. Nesse caso, o sistema devera questionar se o aluno deseja repetir a disciplina:
– Em caso afirmativo, o aluno devera escolher entre quatro novas disciplinas;
– Em caso negativo, o aluno devera escolher entre cinco disciplinas distintas daquelas oferecidas aos alunos aprovados.
Adicionalmente, as estruturas utilizadas no desenvolvimento do programa deverao estar em conformidade com os conteudos apresentados em sala de aula, contemplando o uso adequado de variaveis, estruturas de decisao, estruturas de repeticao e organizacao logica do algoritmo.
*/

#include <stdio.h>

int main(){
  char exec, response;
  char studentName[20], subject[12];
  int docId, studentId, subjectCount = 0;
  float subjectAverage = 0., totalAverage = 0., averageSum = 0.;

  do
  {
    printf("#################################################\n");
    printf("SEJA BEM-VINDO AO SISTEMAS DE MEDIAS E MATRICULAS\n");
    printf("#################################################\n\n");
    printf("Deseja iniciar um novo aluno? Digite C para continuar e S para sair.\n");
    scanf("%c", &exec);
    if (exec == 'S' || exec == 's')
    {
      break;
    }
    
    printf("Para iniciar, digite o Nome do Aluno:\n");
    scanf(" %s", &studentName);
    printf("\nAgora digite o numero do Documento de Identificacao do aluno (somente numeros):\n");
    scanf(" %d", &docId);
    printf("\nPor fim, digite o Numero de Matricula do aluno (somente numeros):\n");
    scanf(" %d", &studentId);

    do
    {
      printf("\nInsira o nome da Disciplina cursada:\n");
      scanf("%s", &subject);
      printf("\nInsira a Media do aluno nesta Disciplina:\n");
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
  } while (exec != 'S' || exec != 's');

  return 0;
}
