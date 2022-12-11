# TR3_535935
implementação de uma array de bits em c

## baixando o codigo.
#### na pagina do repositorio:
- para poder baixar o codigo, tenha certeza de ter o git instalado.
- copie o link do repositorio como mostrado na imagem do link a seguir.  
![copiando o link](https://i.imgur.com/ZqOvIFE.png)
- clique no botão verde "code" e em segida no icone de copiar.
#### no terminal:
- com o git instalado abra um novo terminal.
- no terminal digite, git clone e cole o link copiado.  
![clonando o repositorio](https://i.imgur.com/QvxFi84.png)
- agora você deve ter uma copia do repositorio  na pasta que estava aberta no terminal.
## compilando e executando o codigo.
- no diretorio em que vocẽ clonou o repositorio
- para compilar e executar copie e cole ou digite as seguintes linhas de codigo em seu terminal.
```bash
cd TR3_535935
gcc TR3_535935.c -o tr3
./tr3
```
- repositorio foi copiado para a pasta TR3_535935, a primeira linha leva o terminal para esse diretorio.
    - se o seu terminal ja estiver aberto nesse diretorio, a linha pode ser ignorada.
- a segunda linha compila o codigo em um arquivo chamado tr3.
    - se for rodar o programa por uma segunda vez, ja estiver no diretorio e não houver alterações no codigo, pode ignorar essa linha.
- a terceira e ultima linha executa o programa.   
*obs: o codigo funciona corretamente mesmo se você apenas copiar e colar tudo de novo toda vez que usar
## ultilização.
- o programa é de simples ultilização.
- o usuario digita um numero natural entre 0 e 5000 e preciona enter.
- ele faz isso para todos os numeros que deseja adiciona na array.
- quando todos os numeros desejados forem inseridos, digite -1 e o programa vai encerrar.
- o output sera todos os numeros digitados em ordem crescente.

