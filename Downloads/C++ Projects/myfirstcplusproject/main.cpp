#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main()
{
    //imprime hello world! \n pula uma linha
    cout << "Hello world! \n" << "\n\n" << endl;

    // \t da um tab
    cout << "\t Have a good day!" << endl;
    cout << "\\t - da um tab" << endl;
    cout << "\"c++ é facil\"";

    //DIA 02

    /*esse comentário aqui
    pega várias linhas */

    //DECLARANDO VÁRIAVEIS
    int myNumber = 11; //cria o myNum como 11
    cout << myNumber << endl; //output no myNum

    double decimal = 8.99; //cria um número flutuante com decimais
    cout << decimal << endl;

    char letter = 'D'; //um caractere
    cout << letter << endl;

    string text = "OIE!!!!"; //texto
    cout << text << endl;

    bool booleano = true; //cria um booleano
    cout << booleano << endl;

    cout << "O que está escrito na variável texto é: " << text << endl;

    //EXERCICIO: crie uma variavel com o nome de "myNum" e atribua o valor 50 a ela
    int myNum = 50;
    cout << myNum << endl << "\n";

    //Mostre a soma de 5 + 10 usando as variaveis x e y
    /*int x = 5;
    int y = 10;
    int z = 5 + 10;
    cout << z << endl;*/

    //cria 3 variaveis do msm tipo usando comma-separated list
    /*int x = 5 , y = 6 , z = 50;
    cout << x + y + z << endl;*/

    //use o comando correto para coletar o input do usuário e armazena-lo no x
    /*int x;
    cout << "Digite um numero: ";
    cin >> x; //cin é o user input do usuario (scanner do java)*/

    /*int x , y;
    int sum;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite outro numero: ";
    cin >> y;
    sum = x + y;
    cout << "A soma disso é: " << sum; */

    //crie 2 variaveis, yay e nay e adcione o valor apropriado a elas
    /*bool yay = true;
    bool nay = false;*/

    const int myNum2 = 16; //declarar uma variavel como const significa que ela é constante e não pode ser mudada

    //EXEMPLO STUDENTS
    //Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    //Print variables
    cout << "Dados do estudante: \n";
    cout << "Studnet ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";

    //Calcular a area de um retangulo
    //criar variaveis inteiras
    int length = 4;
    int width = 6;
    int area;

    //calcular a area do retangulo
    area = length * width;

    //printar as variaveis
    cout << "\nArea de um Retangulo \n";
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";

    //Numeros Cientificos
    float f1 = 35e3; //um numero flutuante pode ser um numero cientifico usando "e" que indica o poder de 10, ou seja adiciona 0 no numero
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl; // 1 quer dizer true
    cout << isFishTasty << endl; //0 quer dizer false

    char a = 65 , b = 66 , c = 67; //tambem pode-se usar ASCII no char
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    //EXEMPLO CARRINHO DE COMPRAS
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    cout << "\nCarrinho de compras \n";
    cout << "Number os items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
    cout << "Total cost: " << total_cost << "" << currency << "\n";

    //Operadores de Comparação
    int val1 = 5;
    int val2 = 3;
    cout << (val1 > val2) << endl; //retorna 1 (true) por que 5 é maior que 3

    string txt = "Hello";
    cout << txt.length() << endl; //mostra o comprimento da string
    cout << txt[0] << endl; //pega o primeiro caractere de uma string e printa
    txt[0] = 'J'; //muda o caractere da primeira letra da string
    cout << txt << endl;

    /*string fullName;
    cout << "Digite seu nome completo: ";
    getline (cin , fullName); //le uma linha que foi inserida pelo user
    cout << "Seu nome é: " << fullName;*/

    cout << max (val1 , val2) << endl; //pega o maior numero dos valores inseridos entre os parenteses

    int val3 = 64;
    cout << sqrt(val3) << endl; //da a raiz quadrada do numero inserido (precisa da biblioteca cmath)

    //Append usa-se para concatenar strings
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;

    string texto = "ABCDEFG";
    cout << "O tamanho da string texto é: " << texto.length() << endl;

    string myString = "Hello";
    cout << myString[myString.length() -1] << endl; //pega a ultima letra da string (o)
    cout << myString[0] << endl;

    string vikings = "We are the so-called \"Vikings\" from the north.";

    //caso não queira usar o namespace std:
    //std::string greeting = "Hello";
    //std::cout << greeting;

    string greeting1 = "Hello";
    char greeting2[] = "Hello"; //cria uma array com os caracteres para criar uma string

    cout << max (5 , 10) << endl; //o maior dos valores
    cout << min(5 , 10) << endl; //o menor dos valores

    int boolval = 10;
    cout << (boolval == 10) << endl; //retorna 1 (true) pois boolval é igual a 10
    cout << (10 == 15) << endl; //retorna 0 (false) pois 10 nao é igual a 15

    //Exemplo idade para votar
    /*int myAge;
    int votingAge = 18;
    cout << "Qual a sua idade: ";
    cin >> myAge;
    if (myAge >= votingAge){
        cout << "Já pode votar";
    } else {
        cout << "Ainda não pode votar.";
    }*/

    cout << "\n";

    int time = 22;
    if (time < 10) {
        cout << "Bom dia!";
    } else if (time < 20) {
        cout << "Boa tarde!";
    } else {
        cout << "Boa noite!";
    }

    cout << "\n";

    string result = (time < 18) ? "Boa tarde!" : "Boa noite!"; //le-se "se time menor que 18 então boa tarde senao boa noite
    //variable = (condition) ? expressionTrue : expressionFalse;
    cout << result;

    cout << "\n";

    //EXEMPLO PORTA
    int doorCode = 1337;

    if (doorCode == 1337) {
        cout << "Correct code.\nThe door is now open.\n";
    } else {
        cout << "Wrong code.\nThe door remains closed.\n";
    }

    cout << "\n";

    //Exemplo num positivo ou negativo
    int myNumber1 = 10;

    if (myNumber1 > 0) {
        cout << "The value is a positive number.\n";
    } else if (myNumber1 < 0) {
        cout << "The value is a negative number.\n";
    } else {
        cout << "The value is 0.\n";
    }

    //Exemplo num par ou impar
    int myNumber2 = 5;

    if (myNumber2 % 2 == 0) {
        cout << myNumber2 << " is even.\n";
    } else {
        cout << myNumber2 << " is odd.\n";
    }

    cout << "\n";

    //Switch
    /*switch(expression) {
    case x:
        //code block
        break;
    case y:
        //code block
        break;
    default:
        //code block
    }*/

    int day = 4;
    switch(day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Satursday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default: //roda algum codigo caso nada tenha sido especificado
        cout << "Looking forward the Weekend";
    }

    //Loop While
    //roda um bloco de codigo enquanto uma condição for true
    /* while(condition){
        //code block to be executed
    }*/

    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    cout << "\n";

    //Loop do/while
    //ele executa o comando uma vez antes de verificar se a condição é verdadeira
    /* do {
            //code block to be executed
    }
    while (condition); */

    int d = 0;
    do{
        cout << d << "\n";
        d++;
    }
    while(d < 5);

    cout << "\n";

    //Exemplo contagem regressiva
    int countdown = 3;

    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }

    cout << "Happy New Year!!\n";

    cout << "\n";

    //Exemplo programa que imprime numeros pares de 0 a 10
    int n = 0;

    while (n <= 10) {
        cout << n << "\n";
        n += 2;
    }

    //Exemplo para reverter numeros
    //Uma variavel com alguns numeros especificos
    int numbers = 12;

    //Uma variavel para guardar os numeros reversos
    int revNumbers = 0;

    //Numeros reversos e reordenados
    while(numbers) {
        //pega o ultimo numero dos 'numbers' e adiciona no 'revNumbers'
        revNumbers = revNumbers * 10 + numbers % 10;
        //remove o ultimo numero de 'numbers'
        numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";

    //Exemplo jogo yatzy
    int dice = 1;

    while (dice <= 6) {
        if (dice < 6) {
            cout << "No Yatzy\n";
        } else {
            cout << "Yatzy!\n";
        }
        dice = dice + 1;
    }

    //DIA 03:
    //C++ Loops
    //quando se sabe exatamente quantas vezes se quer que o bloco de codigo fique em loop se usa o for
    /*for (statement 1; statement 2; statement 3) {
        //code block to be executed
    }

    - statement 1 é executado (uma vez) antes da execução do bloco de codigo
    - statement 2 define a condição para executar o bloco
    - statement 3 é executado (sempre) depois que o bloco for executado

    */

    //exemplo: printar do numero 0 ao 4
    for (int i = 0; i < 5; i++){
        cout << i << "\n";
    }

    /*explicação:
    - statement 1 seta uma variavel antes do loop começar (int i = 0)
    - statement 2 define a condição para o loop começar (i tem que ser menor que 5).
    se a condição for verdadeira, o loop começa de novo, se for falsa, o loop acaba
    - statement 3 adiciona um valor (i++) a cada vez que o bloco de codigo no loop é executado
    */

    //exemplo: printar apenas os numeros pares entre 0 e 10

    for (int i = 0; i <= 10; i = i + 2){
        cout << i << "\n";
    }

    cout << "\n";

    //Nested Loops
    //loops dentro de loops, o loop de dentro é o inner e o de fora outer

    for (int i = 1; i <= 2; ++i){
        cout << "Outer: " << i << "\n"; //executa 2 vezes

        for (int j = 1; j <= 3; ++j){
            cout << " Inner: " << j << "\n"; //executa 6 vezes (2 * 3)
         }
    }

    //ele lança o outer e dps lança um inner completo e dps mais um outer e mais um inner completo


    //Loop foreach
    //usado para loops em arrays

    /* for (type variableName : arrayName) {
        //code block to be executed
    }
    */
    //exemplo: output todos os elementos de uma array

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers){ //le-se para cara myNumbers roda o i
        cout << i << "\n";
    }

    cout << "\n";

    //EXEMPLO PROGRAMA QUE CONTA ATÉ 100 DE 10 EM 10
    for (int i = 0; i <= 100; i = i + 10){
        cout << i << "\n";
    }

    cout << "\n";

    //EXEMPLO PROGRAMA QUE PRINTA TODOS OS PARES NUMEROS ENTRE 0 E 10
    cout << "Programa que printa todos os numeros pares entre 0 e 10:\n";
    for (int i = 0; i <= 10; i = i + 2){
        cout << i << "\n";
    }

    cout << "\n";

    //EXEMPLO PROGRAMA QUE PRINTA TODOS OS NUMEROS IMPARES ENTRE 0 E 10
    cout << "Programa que printa todos os números impares entre 0 e 10:\n";
    for (int i = 1; i <= 10; i += 2){
        cout << i << "\n";
    }

    cout << "\n";

    //EXEMPLO PROGRAMA QUE VAI MULTIPLICANDO POR 2 ATE 512
    cout << "Programa que vai multiplicando a variavel por 2 até atingir 512:\n";
    for (int i = 2; i <= 512; i *= 2){
        cout << i << "\n";
    }

    cout << "\n";

    //EXEMPLO PROGRAMA QUE IMPRIME A TABELA DE MULTIPLICAÇÃO DE UM NUMERO INDICADO
    /*cout << "Programa tabela de multiplicação:\n";
    int numero;
    cout << "Digite o numero que voce quer conferir a tabela de multiplicaçao: ";
    cin >> numero;
    cout << "\n";
    for (int i = 1; i <= 10; i++){
        int resultado = i * numero;
        cout << numero << " x " << i << " = " << resultado << endl;
    } */


    cout << "\n";

    //Break em Loop
    //break pode ser usado em loop para saltar de um loop
    for (int i = 0; i < 10; i++){
        if (i == 4) {   //ele salta para fora do loop quando o valor é igual a 4
            break;
        }
        cout << i << "\n";
    }

    cout << "\n";

    //Continue em Loop
    //caso ocorra em um loop ele continua para a proxima interação do loop
    for (int i = 0; i < 10; i++){
        if (i == 4){   //ele passa pelo 4 e pula direto para o 5
            continue;
        }
        cout << i << "\n";
    }

    cout << "\n";

    //Break e Continue em Loop While
    int q = 0;
    while (q < 10) {
        cout << q << "\n";
        q++;
        if (q == 4) {
            break;
        }
    }

    cout << "\n";

    while (q < 10){
        if (q == 4) {
            q++;
            continue;
        }
        cout << q << "\n";
        q++;
    }

    cout << "\n";

    //ARRAYS
    //ACESSAR OS ELEMENTOS EM UM ARRAY

    cout << "\n";

    //ALTERAR O ELEMENTO DE UMA ARRAY


    //LOOP ATRAVES DE UMA ARRAY

    cout << "\n";

    //LOOP FOREACH - USADO EXCLUSIVAMENTE PARA ARRAYS
    int myNumbers2[5] = {10 , 20 , 30 , 40 , 50};

    for (int i : myNumbers2){
        cout << i << "\n";
    }

    cout << "\n";

    //OMITIR O TAMANHO DA ARRAY
    /* é possivel declarar uma array sem especificar o tamanho dela, ela
    se ajusta aos valores inseridos:

    string cars[] = {"Volvo" , "BMW" , "Ford"}; */

    //MATRIZES E VETORES
    /* Matrizes possuem valores fixos, o que quer dizer que não se pode add
    ou remover valores dps de criada. o c++ oferece vetores que são utilizados
    para operaçõs que exigem remoção e adição de elementos da matriz */

    //um vetor com 3 elementos
    vector<string> car = {"Volvo" , "BMW" , "Ford"};
    car.push_back("Tesla");

    cout << "\n";

    //OBTER O VALOR DE UMA ARRAY
    int myNumbers3[5] = {10, 20 , 30, 40, 50};
    cout << sizeof(myNumbers2); //retorna o tamanho da matriz em bytes

    cout << "\n\n";
    //para descobrir quantos elementos tem uma matriz tem que dividir o tamanho da matriz pelo tamanho do primeiro elemento

    int getArrayLength = sizeof(myNumbers3) / sizeof(myNumbers3[0]);
    cout << getArrayLength;

    cout << "\n\n";

    //MELHOR FORMA DE FAZER LOOP ATRAVES DE ARRAY
    for (int i = 0; i < sizeof(myNumbers3) / sizeof(myNumbers3[0]); i++){
        cout << myNumbers3[i] << "\n";
    }

    cout << "\n";

    //EXEMPLO CALCULO DE MEDIA DE IDADES
    cout << "Programa que calcula a média de diferentes idades:\n";
    int ages[8] = {20 , 22 , 18 , 35 , 48 , 26 , 87 , 70};

    float avg, sum = 0;
    int p;

    //get the length of the array
    int length2 = sizeof(ages) / sizeof(ages[0]);

    //loop pelos elementos da array
    for (int age : ages) {
        sum += age; //faz o que esta na soma + a idade e dps add na soma
    }

    //calcule a media dividindo a soma pelo tamanho
    avg = sum / length2;

    cout << "The average age is: " << avg << "\n";

    cout << "\n";

    //PROGRAMA QUE PEGA A MENOR IDADE
    cout << "Programa que identifica a menor idade inserida:\n";

    //criar uma variavel e colocar o valor como o primeiro elemento do array
    int lowestAge = ages[0];

    //fazer um loop entre os elementos do array para enconrtrar a menor idade
    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";

    cout << "\n";

    int l = 20 , g = 20;
    int x = l + g;

    cout << "X = " << x << endl;


    //DIA 04
    //Multidimensional Arrays
    //adiciona uma nova dimensão para um array
     string letters[2][4] = { //le se 1 array com 2 arrays dentro com 4 elementos dentro
        { "A" , "B" , "C" , "D"},
        { "E" , "F" , "G" , "H"}
     };

     string letters2[2][2][2] = {
         {
             { "A" , "B"},
             { "C" , "D"}
         },
         {
             { "E" , "F"},
             { "G" , "H"}
         }
     };

     //acessar elementos de uma arrays multidimensional
     cout << letters[0][2]; //acessa o elemento da primeira coluna (0) e na terceira coluna (2). sai C

     cout << "\n";

     //alterando elementos
     letters[0][0] = "Z";

     cout << letters[0][0]; //Agora sai Z ao inves de A

     cout << "\n";

     //loop em um array multidimensional

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            cout << letters[i][j] << "\n";
        }
    }

    cout << "\n";

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                cout << letters2[i][j][k] << "\n";
            }
        }
    }


    //POR QUE USAR ARRAYS MULTIDIMENSIONAIS?
    //elas são otimas para representar grids

    /*
    //EXEMPLO JOGO DE BATALHA NAVAL
    cout << "\nJogo Batalha Naval\n";
    //coloca 1 para indicar o navio
    bool ships[4][4] = {
    { 0 , 1 , 1 , 0},
    { 0 , 0 , 0 , 0},
    { 0 , 0 , 1 , 0},
    { 0 , 0 , 1 , 0}
    };

    //anotando quantos hits o player tem e quantos turnos ele jogou
    int hits = 0;
    int numberOfTurns = 0;

    //permita que o player continue até que ele tenha acertado os 4 navios
    while (hits < 4) {
        int row , column;

        cout << "Selecting coordinates\n";

        //pergunte ao player uma linha
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        //pergunte ao player uma coluna
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        //Cheque se existem navios nessas coordenadas
        if (ships[row][column]) {

            //se o player acertar um navio, troque pelo valor 0
            ships[row][column] = 0;

            //aumente o contador de hits
            hits++;

            //avise o player que ele acertou um navio e quantos restam
            cout << "Hit!" << (4-hits) << " left.\n\n";
        } else {
            //avise o player que ele errou
            cout << "Miss\n\n";
        }

        //conte quantos turnos o player jogou
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";

    */

    //Structures
    struct {                //declara a structure
        int myNum4;         //member (int variavel)
        string myString2;   //member (string variavel)
    } myStructure;          //structure variavel

    //acessando membros de structures
    myStructure.myNum4 = 1;
    myStructure.myString2 = "Hello World!";

    cout << myStructure.myNum4 << "\n";
    cout << myStructure.myString2 << "\n";

    cout << "\n";

    //uma structure com multiplas variaveis

    struct {
        string brand;
        string model;
        int year;
    } myCar1 , myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    //Structures Nomeadas
    //ao dar nomes a estruturas pode trata-las como dados. isso quer dizer que pode cirar varias variwaveis com essa estrutura em qualquer lugar do programa
    //deve criar antes da main()
    /* struct car {
        string brand;
        string model;
        int year;
    }; */

    car myCar4;
    myCar4.brand = "BMW";
    myCar4.model = "X5";
    myCar4.year = 1999;

    car myCar6;
    myCar6.brand = "Ford";
    myCar6.model = "Mustang";
    myCar6.year = 1969;

    cout << myCar4.brand << " " << myCar4.model << " " << myCar4.year << "\n";
    cout << myCar6.brand << " " << myCar6.model << " " << myCar6.year << "\n";

    return 0;
}
