# Padronização de Commits 
```
!type(?scope): !subject     ! = Atributos obrigatórios   ? = Atributos não obrigatórios
```
* **type** : Se refere ao tipo daquele commit, indicando qual o tipo de atividade que foi feita. Existe varíos exemplos de *type*, entre eles :
  
    **test** : Indica qualquer tipo de criação ou alteração de códigos de teste.
      
    **feat** : Indica o desenvolvimento de uma nova *feature* ao projeto.
    
    **style** : Usado em casos em que há mudanças na formatação e estilo do código que não alteram o sistema de nenhuma forma (estilística)
    
    **refactor** : Usado quando houver uma refatoração de código que não tenha qualquer tipo de impacto na lógica/regras de negócio do sistema
    
    **fix** : Usado quando há correções de erros que estão causando bugs no sistemas
    
    **chore** : São mudanças de desenvolvimento, ou seja, mudanças que não afetam o sistema ou arquivos de testes
    
    **docs** : Usada quando há mudanças na documentação do projeto
    
    **build** : Usada para indicar mudanças que afetam o processo de build do projeto ou dependências externas
    
    **perf** : Indica uma alteração de melhorou a performance do sistema
    
    **ci** : Utilizada para mudanças nos arquivos de configuração de CI
    
    **revert** : Indica a reversão de um commit anterior


* **scope** : Contextualização do commit, deve ser curta e concisa, auxilia na indicação do projeto

* **subject** : O assunto/ mensagem do commit, deve se encontrar no imperativo, de tal forma que se enquadre na notação "Se aplicado, esse commit irá *mensagem*" 
  <br>

**Exemplo** :
```
feat(login): Implementa nova funcionalidade de login
```
