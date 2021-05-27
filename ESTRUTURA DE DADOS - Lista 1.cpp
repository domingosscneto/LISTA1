//Domingos Soares do Carmo Neto
//TIA: 32032889
#include <iostream>
using namespace std;

void Ex1() {
	int valor1, valor2, a;
	cout << "Digite o número 1: ";
	cin >> valor1;
	cout << "Digite o número 2: ";
	cin >> valor2;
	a = valor2;
	valor2 = valor1;
	valor1 = a;
	cout << "Número 1: " << valor1 << "\n";
	cout << "Número 2: " << valor2;
}
void Ex2() {
	int distancia, tempo, vm;
	cout << "Digite a distância: ";
	cin >> distancia;
	cout << "Digite o tempo 2: ";
	cin >> tempo;
	vm = distancia / tempo;
	cout << "Velocidade Média: " << vm << "km/h \n";
	if (vm > 90) {
		cout << "Velocidade média ficou acima de 90km/h";
	}
}
void Ex3() {
	string letra;
	cout << "Digite uma letra: ";
	cin >> letra;
	if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u" || letra == "A" || letra == "E" || letra == "I" || letra == "O" || letra == "U") {
		cout << "A letra digitada é uma vogal.";
	}
	else {
		cout << "A letra digitada é consoante.";
	}
}
void Ex4() {
	int numero;
	cout << "Digite um número: ";
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "O número digitado é par";
	}
	else {
		cout << "O número digitado é ímpar";
	}
}
void Ex5() {
	int valorX, valorY;
	cout << "Digite o valor de X: ";
	cin >> valorX;
	cout << "Digite o valor de Y: ";
	cin >> valorY;
	if (3 * valorX + valorY == 8) {
		cout << "Os pontos X e Y pertencem a reta.\n";
	}
	else {
		cout << "Os pontos X e Y não pertencem a reta.\n";
	}
}
void Ex6() {
	int number, variavel, i = 1;
	cout << "Digite um número: ";
	cin >> number;
	for (variavel = number; variavel >= 1; variavel--) {
		i = i * variavel;
	}
	cout << number << "! = " << i;
}
void Ex7() {
	int x[10];
	int maior;
	int menor;
	cout << "Digite 10 números : ";

	for (int i = 0; i < 10; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < 10; i++) {
		cout << x[i];
	}

	maior = x[0];
	for (int i = 0; i < 10; i++) {
		if (x[i] > maior) {
			maior = x[i];
		}
	}

	menor = x[0];
	for (int i = 0; i < 10; i++) {
		if (x[i] < menor) {
			menor = x[i];
		}
	}
	cout << "\n" << "Maior número: " << maior;
	cout << "\n" << "Menor número: " << menor;
}
void Ex8() {
	int n, x = 0, y = 1, prox;
	cout << "Diite a quantidade de termos Fibonacci: \n";
	cin >> n;
	cout << "Sequência Fibonacci: " << x << " " << y << " ";
	prox = x + y;

	while (prox <= n) {
		cout << prox << " ";
		x = y;
		y = prox;
		prox = x + y;
	}
}
void Ex9() {
	int x[10];
	int temp;
	cout << "Digite 10 números inteiros: \n";

	for (int i = 0; i < 10; i++) {
		cin >> x[i];
	}

	cout << "\n";

	for (int i = 9; i >= 0; i--) {
		cout << x[i] << " ";
	}
}
void Ex10() {
	int x[6];
	cout << "Digite 6 números inteiros: \n";
	for (int i = 0; i < 6; ++i)
	{
		cin >> x[i];
	}

	cout << "\n";

	cout << "Ordem crescente: ";

	int temp = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (x[i] < x[j]) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << x[i] << " ";
	}
}
void Ex11() {
	float real, temp;
	int inteiro;

	cout << "Digite o número inteiro da multiplicação: ";
	cin >> inteiro;
	cout << "Digite o número real da multiplicação: ";
	cin >> real;

	temp = real;
	for (int i = inteiro; i > 1; i--) {
		temp = real + temp;
	}

	cout << temp;
}
void Ex12() {
	int x[4];
	int y[4];

	cout << "Digite 4 valores: ";
	for (int i = 0; i < 4; i++) {
		cin >> x[i];
	}

	cout << "Digite outros 4 valores: ";
	for (int i = 0; i < 4; i++) {
		cin >> y[i];
	}

	int Menor1;
	Menor1 = x[0];

	for (int i = 0; i < 4; i++) {
		if (x[i] < Menor1) {
			Menor1 = x[i];
		}
	}
	int Menor2;
	Menor2 = y[0];
	for (int i = 0; i < 4; i++) {
		if (y[i] < Menor2) {
			Menor2 = y[i];
		}
	}
	if (Menor1 < Menor2) {
		cout << "Menor valor : " << Menor1;
	}
	else if (Menor2 < Menor1) {
		cout << "Menor valor : " << Menor2;
	}
	else {
		cout << "Menor Valor igual nos dois parâmetros : " << Menor1;
	}
}
void Ex13() {
	{
		int x[4];
		int y[4];

		cout << "Digite 4 valores: ";
		for (int i = 0; i < 4; i++) {
			cin >> x[i];
		}

		cout << "Digite outros 4 valores: ";
		for (int i = 0; i < 4; i++) {
			cin >> y[i];
		}

		int Maior1;
		Maior1 = x[0];

		for (int i = 0; i < 5; i++) {
			if (x[i] > Maior1) {
				Maior1 = x[i];
			}
		}
		int Maior2;
		Maior2 = y[0];
		for (int i = 0; i < 5; i++) {
			if (y[i] > Maior2) {
				Maior2 = y[i];
			}
		}
		if (Maior1 > Maior2) {
			cout << "Maior valor : " << Maior1;
		}
		else if (Maior2 > Maior1) {
			cout << "Maior valor : " << Maior2;
		}
		else {
			cout << "Maior Valor igual nos dois parâmetros : " << Maior1;
		}
	}
}
void Ex14() {
	int i, tamanho, totalvogais;
	int lA, lE, lI, lO, lU;
	char string[100];
	lA = lE = lI = lO = lU = 0;

	cout << "Insira a frase (string) de no máximo 99 caracteres: ";
	cin >> string;
	tamanho = strlen(string);

	for (i = 0; i <= tamanho - 1; i++) {
		if (string[i] == 'a' || string[i] == 'A') {
			lA++;
		}

		else if (string[i] == 'e' || string[i] == 'E') {
			lE++;
		}

		else if (string[i] == 'i' || string[i] == 'I') {
			lI++;
		}

		else if (string[i] == 'o' || string[i] == 'O') {
			lO++;
		}

		else if (string[i] == 'u' || string[i] == 'U') {
			lU++;
		}

	}
	totalvogais = lA + lE + lI + lO + lU;
	cout << "A frase " << string << " tem " << totalvogais << " vogais!";
}


int main() {
	setlocale(LC_ALL, "pt_BR");
	Ex1();
}