# hadek
<p>Para executar os programas em C++ primeiro é necessário compilar os arquivos através do comando "g++ nome_do_arquivo.cpp -o nome_do_arquivo". Após compilar basta executar os arquivos através do comando "./nome_do_arquivo" (Linux).</p>

<p>Para executar as querys será necessário criar as tabelas, conforme o enunciado, em qualquer banco relacional.</p>

<h3>Comentários e observações</h3>

<h5>Exercício 1</h5>
<p>Até poderia ter feito com algumas linhas a menos, porém o impacto no desempenho seria praticamente nulo. Sendo assim, preferi prezar pela legibilidade do código.</p>

<h5>Exercício 2</h5>
<p>Acredito que o exemplo 2 está incorreto. Nele temos que tanto "s" como "t" tem o valor de "aba". Sendo assim, por que precisariamos de 7 passos para "converter" "s" em "t"? Resolvi este caso considerando que ele se resolve em apenas 1 passo. Outro ponto é que o exemplo do enunciado tem a mesma quantidade de caracteres, mas precisa de 1 passo a menos para ser convertido. O que reforça minha ideia de que o exemplo 2 está falho.</p>
<p> Sobre a solução vale a pena comentar que tratei os casos de "s" e "t" iguais com um "if" no início do programa para evitar processamento desnecessário. Apesar do ganho de performance ser praticamente nulo, não há sacrifícios na legibilidade do código.</p>

<h5>Exercício 3</h5>
<p>Acredito que haja um equívoco no exemplo de saída do exercício. No enunciado diz que quando alunos com notas maiores de 8 tiverem a mesma nota, a ordenação deverá ser feita pelo nome, em ordem alfabética. A saída mostra as alunas Marcela e Julia com a mesma nota, porém o nome da Marcela primeiro. Deveria estar ao contrário.</p>


<p>Obs.: Assumi que os dados utilizados nas querys estão normalizados e que não seria necessário fazer qualquer tratamento (UPPER, TRIM, etc). Também assumi que os dados de entrada dos demais programas não precisam de qualquer tratamento.</p>
