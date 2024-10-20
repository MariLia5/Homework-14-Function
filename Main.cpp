#include <iostream>

 // Задача 1
int Rectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == K - 1) {
                std::cout << "*";
            } else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
    return (N,K);
}

// Задача 2
int Truth(int T) {
	if (T > 1) {
		std::cout << "Ваше число " << T << " истина.";
		std::cout << "\n";
	}
	if (T < - 1) {
		std::cout << "Ваше число " << T << " ложь.";
		std::cout << "\n";
	}
	if (T == 0) {
		std::cout << "Ваше число " << T << " ноль.";
		std::cout << "\n";
	}
	return(T);
}

// Задача 3
int Lucky_number(int number) {
	int n1, n2, n3, n4, n5, n6;
	n1 = number / 100000;
	n2 = (number / 10000) % 10;
	n3 = (number / 1000) % 10;
	n4 = (number / 100) % 10;
	n5 = (number / 10) % 10;
	n6 = number % 10;
	int sum1, sum2;
	sum1 = n1 + n2 + n3;
	sum2 = n4 + n5 + n6;

	if ((number < 100000) || (number > 999999)) {
		std::cout << "Ваше число не шестизначное.\n";
	}
	else {
		if (sum1 == sum2) {
			std::cout << "Ваше число счастливое.\n";
		}
		else {
			std::cout << "Ваше число не счастливое.\n";
		}
	}
	return(number);
}

// Задача 4
long long Factorial(int F) {
	long long result = 1;

	for (int i = 1; i <= F; ++i) {
		result *= i;
	}
	return result;
}

// Задача 5
long long Cube(int C) {
	long long res = 1;
	res = C * C * C;
	return res;
}

int main()
{
    setlocale(LC_ALL, "rus");
	// Задача 1
    int n1, n2;
	std::cout << "Задача 1.\n";
    std::cout << "Введите высоту и ширину: " << std::endl;
    std::cin >> n1 >> n2;
    Rectangle(n1, n2);
	std::cout << "\n";

	// Задача 2
	std::cout << "Задача 2.\n";
	std::cout << "Введите число. Программа возвращает истину, если передаваемое значение положительное и ложь, если отрицательное.\n";
	int У;
	std::cin >> У;
	Truth(У);
	std::cout << "\n";

	// Задача 3
	std::cout << "Задача 3.\n";
	std::cout << "Введите шестизначное число. Программа подскажет счастливое ли оно.\n";
	int N;
	std::cin >> N;
	Lucky_number(N);
	std::cout << "\n";

	// Задача 4
	std::cout << "Задача 4.\n";
	std::cout << "Введите число. Программа вычислит факториал переданного ей числа\n";
	int Q;
	std::cin >> Q;
	Factorial(Q);
	std::cout << "Факториал числа " << Q << " равен " << Factorial(Q);
	std::cout << "\n\n";

	// Задача 5
	std::cout << "Задача 5.\n";
	std::cout << "Введите число. Программа вычислит куб переданного ей числа\n";
	int W;
	std::cin >> W;
	Cube(W);
	std::cout << "Факториал числа " << W << " равен " << Cube(W);
	std::cout << "\n";

    return 0;
}
