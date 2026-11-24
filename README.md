## pequena pasta de estudos sobre alocação dinamica de mémoria

inicialmente fiz pequenos programas de alocação de ponteiros com a função malloc e calloc, posterioremente dei uma olhada 
na manipulação de strings, usando funções como *fgets*  *strcmp* e entre outras.

aí após compreender de forma bassilar os ponteiros e as funções de alocação dinamica, descidi iniciar um projeto simples, mas muito interessante para a compreenção do baixo nivel.

## Implementando arrays dinâmicos;

diferente de linguagens de alto nivel como o Javascript e python, a linguagem C, tem arrays dinâmicos, ou lists embutidas
o C não possui uma abstração para utilizar arrays dinâmicos voçê precisar do it yourself, o codígo tem cerca de 50-60 linhas, e tem como principais libs o stdlib,
pra alocação dinamica de mémoria, onde utilizei duas funções, o malloc/calloc - (atualização 23/11/26, mudei pra calloc pra evitar memory garbage)
além disso usei a stdargs, pois queria passar mais argumentos, mas acho que foi meio zuado, já que eu tenho que passar o numero de argumentos antes passa-los propiamente, e isso meio que torna o código inutil kkkkk.

talvez eu pense numa forma de melhorar isso....

