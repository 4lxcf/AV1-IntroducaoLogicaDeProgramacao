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
#include <stdlib.h>

int main()
{
  // Declaração das variáveis
  char exec, response;
  char studentName[20], subject[12];
  int docId, studentId, subjectCount, selection;
  float subjectAverage = 0., totalAverage = 0., averageSum;

  // Inicio do loop do menu principal do programa
  do
  {
    // Limpa a tela a cada vez que inicializa o loop
   system("clear");
    // Menu inicial onde o usuario diz ao sistema se deseja continuar ou fechar o programa
    printf("##############################\n");
    printf("SISTEMA DE MEDIAS E MATRICULAS\n");
    printf("##############################\n\n");
    printf("Deseja iniciar um novo aluno? Digite 'c' para continuar e 's' para sair.\n");
    scanf(" %c", &exec);
    if (exec == 'S' || exec == 's') // Comparação lógica para continuar ou fechar o codigo
    {
      break;
    }
    
    // Limpa o menu do terminal
    system("clear");
    
    // Atribuicao das variaveis do usuario (aluno)
    printf("\nPara iniciar, digite o Nome do Aluno:\n");
    scanf(" %s", &studentName);
    printf("\nAgora digite o numero do Documento de Identificacao do aluno (somente numeros):\n");
    scanf(" %d", &docId);
    printf("\nPor fim, digite o Numero de Matricula do aluno (somente numeros):\n");
    scanf(" %d", &studentId);

    // Reiniciar contadores para novo aluno
    subjectCount = 0;
    averageSum = 0.;

    // Inicio do loop de registro das disciplinas cursadas e a media do aluno em cada disciplina
    do
    {
      // Limpa as atribuições a cada inicialização do loop
      system("clear");
      // Atribuicao das variaveis da disciplina
      printf("\nOtimo! Agora insira o Nome de uma Disciplina cursada:\n");
      printf("(Caso deseje parar, coloque uma nota negativa na media)\n");
      scanf("%s", &subject);
      printf("\nInsira a Media do Aluno nesta disciplina:\n");
      scanf(" %f", &subjectAverage);

      /*
      Se subjectAverage for maior que 0.0 e menor que 10.0, o contador de disciplinas aumenta e a soma das medias tambem.
      Porem, se for maior que 10, nada acontece e uma mensagem na tela mostra os valores corretos que devem ser digitados.
      */
      if (subjectAverage >= 0. && subjectAverage<=10.){
        subjectCount += 1;
        averageSum += subjectAverage;
      }else{
          printf("\n##########################################################\n");
          printf("Valor incorreto! Lembre-se, as notas sao entre 0.0 e 10.0!\n");
          printf("##########################################################\n");
        }
      
    } while (subjectAverage >= 0.);

    // Calculo da Media Geral do aluno e mostragem na tela
    totalAverage = averageSum / subjectCount;
    printf("\nMEDIA GERAL DO ALUNO: %.1f", totalAverage);

    // Verificacao se o aluno foi aprovado ou não, considerando media 7.0
    if (totalAverage >= 7.)
    {
      printf("\n\nAluno APROVADO. Escolha uma das 5 Disciplinas Avancadas para cursar (1~5):\n1-DISCIPLINA AVANCADA I\n2-DISCIPLINA AVANCADA II\n3-DISCIPLINA AVANCADA III\n4-DISCIPLINA AVANCADA IV\n5-DISCIPLINA AVANCADA V\n");
      scanf("%d", &selection);
    }
    else
    {
      // Caso o aluno tenha reprovado, ele escolhe se quer repetir a disciplina ou nao
      printf("\n\nAluno REPROVADO. Deseja repetir a Disciplina? (s/n)");
      scanf(" %c", &response);

      // Caso deseje repetir a disciplina, ele escolhe uma das outras 4 materias que deseja cursar
      if (response == 's')
      {
        printf("\n\nEscolha uma das 4 Disciplinas para cursar (1~4):\n1-DISCIPLINA BASICA I\n2-DISCIPLINA BASICA II\n3-DISCIPLINA BASICA III\n4-DISCIPLINA BASICA IV\n");
        scanf("%d", &selection);
      }
      // Caso não deseje repetir, ele escolhe uma das outras 5 materias para cursar
      else
      {
        printf("\n\nEscolha uma das 5 Disciplinas para cursar (1~5):\n1-DISCIPLINA ALTERNATIVA I\n2-DISCIPLINA ALTERNATIVA II\n3-DISCIPLINA ALTERNATIVA III\n4-DISCIPLINA ALTERNATIVA IV\n5-DISCIPLINA ALTERNATIVA V\n");
        scanf("%d", &selection);
      }
    }
    
    
  } while (exec != 'S' || exec != 's');

  return 0;
}