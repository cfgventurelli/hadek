SELECT CASE
         WHEN nt.nota < 8 THEN NULL
         ELSE al.nome
       END AS nome,
       nt.nota,
       al.valor
  FROM alunos al
  JOIN notas nt ON al.valor BETWEEN nt.valor_min AND nt.valor_max
 ORDER BY nota DESC,
 	      nome,
 	      CASE
            WHEN nota < 8 THEN valor
            ELSE 0
          END;
