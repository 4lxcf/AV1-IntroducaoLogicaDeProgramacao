# AV1-IntroducaoLogicaDeProgramacao

## Equipe: Alexandre Carvalho, Erick Pablo, Jailton Santos, Messias Santiago, Rafael Vitor

### ATIVIDADE PROPOSTA
=> PROJETO I (Sistema de Medias e Matrıculas)
Sua equipe foi contratada como desenvolvedora em uma empresa de tecnologia educacional responsavel por modernizar o sistema academico de uma instituicao de ensino superior. O sistema atualmente utilizado apresenta diversas
limitacoes, tais como registros inconsistentes de alunos, dificuldades no calculo automatico de medias globais e ausencia de suporte a tomada de decisao academica, especialmente no que se refere a matrıcula em novas disciplinas e a repeticao de componentes curriculares. Diante desse cenario, a instituicao propoe o desenvolvimento de um novo modulo em linguagem C, capaz de gerenciar de forma eficiente o cadastro de alunos, o armazenamento de suas notas e o calculo de suas medias globais finais. Ademais, o sistema devera ser capaz de interpretar o desempenho academico dos estudantes, fornecendo suporte as decisoes relacionadas a sua trajetoria academica. Nesse contexto, espera-se que o sistema possibilite o registro de dados essenciais, tais como nome do aluno, documento de identificacao, numero de matrıcula, disciplinas cursadas e respectivas notas. A partir dessas informacoes, o programa devera calcular a media global final e classificar o aluno como aprovado ou reprovado, com base em criterios previamente estabelecidos pela instituicao. Para os alunos aprovados, o sistema devera disponibilizar a opcao de escolha de novas disciplinas para o perıodo letivo subsequente, contribuindo para a continuidade de sua formacao academica. Por outro lado, para os alunos reprovados, o sistema devera apresentar alternativas de continuidade, incluindo a possibilidade de repeticao da disciplina, bem como a escolha de novas disciplinas, conforme as regras estabelecidas. Diante do exposto, sua equipe devera propor uma solucao em linguagem C que integre, de forma consistente, logica de programacao, organizacao de dados e tomada de decisao automatizada, contribuindo para a melhoria da gestao academica e para o desempenho dos estudantes.

=> Requisitos do Programa
O programa a ser desenvolvido em linguagem C devera apresentar um menu principal que permaneca em execucao continua ate que o usuario digite S ou s para encerrar o sistema. No interior do laco de repeticao, o sistema devera solicitar as seguintes informacoes:  
• Nome do aluno;  
• Documento de identificacao;  
• Numero de matricula.  
Em seguida, o programa devera receber as disciplinas cursadas pelo aluno, contendo:  
• Nome da disciplina;  
• Media obtida na disciplina.  
A entrada das disciplinas e respectivas notas devera ocorrer de forma continua, sendo finalizada quando for informada uma nota negativa, a qual funcionara como criterio de parada. Durante o processo de insercao das notas, o programa devera:  
• Acumular a soma das medias informadas;  
• Contabilizar a quantidade de disciplinas registradas;  
• Calcular a media final do aluno ao termino da entrada de dados.  
Apos a insercao de uma nota negativa, o sistema devera exibir a media final das disciplinas cursadas e proceder a seguinte verificacao:  
• Caso a media seja maior ou igual a 7,0, o aluno devera ser considerado aprovado, podendo escolher entre cinco novas disciplinas que deverao ser apresentadas pelo sistema;  
• Caso a media seja inferior a 7,0, o aluno devera ser considerado reprovado. Nesse caso, o sistema devera questionar se o aluno deseja repetir a disciplina:  
– Em caso afirmativo, o aluno devera escolher entre quatro novas disciplinas;  
– Em caso negativo, o aluno devera escolher entre cinco disciplinas distintas daquelas oferecidas aos alunos aprovados.  
Adicionalmente, as estruturas utilizadas no desenvolvimento do programa deverao estar em conformidade com os conteudos apresentados em sala de aula, contemplando o uso adequado de variaveis, estruturas de decisao, estruturas de repeticao e organizacao logica do algoritmo.
