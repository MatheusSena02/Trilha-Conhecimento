# Dicionário de Git 

* Comandos Iniciais (Cadastro do Usuário) : 
**git config** --global user.name "Nome do Usuário"
**git config** --global user.email "Email do Usuário"

* Comandos de Mudança de Estado :
* 
  **git add** : Staging Area

**git add*** : Coloca todos os arquivos na Staging Area

**git commit -m "Mensagem do commit"** 

**git commit * -m "Mensagem do commit"** : Commit em todos os arquivos do repositório

**git status**

* Gerenciamento de arquivos no repositório :
  
**touch nome-arquivo.extensão** : Criação de um arquivo no repositório
  
**echo arquivo > arquivo.extensão** : As informações do arquivo.extensão são subtituídas pelas informações contidas no arquivo

**echo arquivo >> arquivo.extensão** : O arquivo é acrescentado ao arquivo.extensão

**start code nome-arquivo.extensão** : Edição do arquivo no repositório 

**mv nome-arquivo.extensão novonome-arquivo.extensão** : Alteração do nome do arquivo


- Gerenciamento do repositório :
  
**rm -rf nome-repositório** : Exclusão imediata do repositório (sem pedido de permissão!!!)

**mkdir nome-repositórip** : Criação do repositório 

**git init** : Ativa o git dentro do repositório 


* Informações do repositório :
  
**git log**: Listagem dos commits realizados, contendo usuário, data e horário do commit e o id do commit

**git log nome-arquivo.extensão** : Listagem das informações dos commits daquele arquivo em específico 

**git log --oneline** : Exibe em linhas únicas os commits e a mensagem do commit 

**git show [nome-commit]** : Listagem detalhada das alterações realizadas no arquivo em relação ao commit anterior do arquivo (basta inserir os 4 primeiros caracteres do id do commit)

*@@ -1, +1, 3 @@* : A primeira linha foi retirada e houveram três alterações após a primeira linha 

**git diff** : Verificação das alterações realizadas nos arquivos no diretório de trabalho (comparação de versões do diretório de trabalho e arquivos consolidados)

**git diff nome-arquivo.extensão** : Comparação das diferenças entre as versões de um arquivo específico 

**git diff --staged** : Permite realizar a comparação dos arquivo que estejam na Stage Area, ou seja, foram preparados (git add), mas não consolidados (git commit)

**git rm nome-arquivo.txt** : Remoção de arquivo do diretório 

* Recuperação de arquivos :
  
**git log --diff-filter=D --sumary** : Traz um sumário dos commits dos arquivos que foram deletados (D = Deleted)

*filter=D* : Filtragem dos arquivos com status "deleted"

**git checkout [id do commit]~1 nome-arquivo.extensão** : Permite posicionar o HEAD para um commit específico (Nesse caso, para um commit anterior ao que o arquivo foi excluído)

*~1* : Indica a paternidade na hierarquia do commit específico. No caso de 1, indica que o acesso a uma versão do commit anterior ao commit especificado, caso fosse 2, seria a segunda verão anterior do commit

* Retornar o arquivo a um estado anterior :
  
**git revert [id do commit]**: Realiza um novo commit, sem as alterações feitas naquele commit em específico *em relação ao commit anterior ao especificado*

**git revert HEAD** : Realiza um novo commit, excluindo as alterações feitas no último commit feito 

**git revert --abort** : Cancela uma operação de gi revert

**git reset [modo] nome-arquivo.extensão**: Possibilita remover ou excluir commits, além de permitir retirar arquivos da Staging Area

**git reset --soft nome-arquivo.extensão|id commit** : Apenas reseta a HEAD para o commit específico. Muda os arquivos para o estado de "Change to be commited", mas sem alterar as mudanças no diretório de trabalho

**git reset --mixed nome-arquivo.extensão|id commit** : Remove o arquivo da Staging Area, mas sem alterar as mudanças no diretório de trabalho 

**git reset -- hard nome-arquivo.extensão|id commit** : Quaisquer mudanças em arquivos rastreados, desde o commit até a área de trabalho serão descartadas

* Ignorar arquivos no commit : *Recomenda-se a criação de um arquivo global para o gitignore*
  
**touch .gitignore**: Criação de um arquivo de gitignore (arquivo oculto)
  
*ls -a* : Impressão de todos os arquivos, incluindo os arquivos ocultos
