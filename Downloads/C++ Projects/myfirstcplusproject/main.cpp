#include <iostream>
#include <cmath>
#include <string>

using namespace std;

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


    return 0;
}
