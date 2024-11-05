# Structs (*typedef*)
*Tratam-se de estrutura de dados, como uma coleção de variáveis, que permitem agrupar dados de diferentes tipagens, denominados dados compostos dentro de uma mesma variável* 

* Sintaxe de Definição : 
```
struct nome_tipo
{
  tipo nome_variável;
  tipo nome_variável;
}
```
<br>

* Comando *typedef* : Maneira de otimizar a declaração de uma variável struct, renomeando o identificador
```
typedef struct nome_tipo novo_nometipo;  //nome_tipo é o mesmo nome atribuído na declaração da struct
```
<br>

* Declaração Struct :
```
struct nome_variável nome_variável;  //declaração sem utilizar o typedef

novo_nometipo nome_variável;  //declaração utilizando o typedef 
```
<br> 

* Acessando os membros de uma struct
```
nome_variável.membro da estrutura
```
