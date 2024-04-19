#include <iostream>;
#include "windows.h";
#include <string>;
# include "test_19_04_24.h";
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //1. Напишіть функцію, яка приймає два аргументи (цілі числа) і повертає їхню суму.
    cout << "1. Напишіть функцію, яка приймає два аргументи (цілі числа) і повертає їхню суму." << endl;
    int a, b;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;

    cout << "Сума " << a << " і " << b << ": " << sum(a, b) << endl << endl;

    //2. Створіть функцію, яка обчислює факторіал заданого цілого числа і повертає результат.
    cout << "2. Створіть функцію, яка обчислює факторіал заданого цілого числа і повертає результат." << endl;
    int n;
    cout << "Введіть число: ";
    cin >> n;
    cout << "Факторіал числа " << n << ": " << fact(n) << endl << endl;

    //3. Напишіть функцію, яка приймає рядок і повертає його довжину.
    cout << "3. Напишіть функцію, яка приймає рядок і повертає його довжину." << endl;
    string str;
    cout << "Введіть рядок: ";
    readln(str);
    cout << "Довжина рядка \"" << str << "\": " << stringLength(str) << endl << endl;

    //4. Розробіть функцію для перевірки, чи є задане ціле число простим.
    cout << "4. Розробіть функцію для перевірки, чи є задане ціле число простим." << endl;
    int c;
    cout << "Введіть число: ";
    cin >> c;
    bool d = isSimple(c);
    if (d) {
        cout << "Число " << c << " є простим" << endl << endl;
    }
    else {
        cout << "Число " << c << " не є простим" << endl << endl;
    }

    //5. Створіть функцію, яка приймає масив цілих чисел і повертає суму всіх елементів.
    cout << "5. Створіть функцію, яка приймає масив цілих чисел і повертає суму всіх елементів." << endl;
    int arrayCount;
    cout << "Введіть кількість елементів масиву: ";
    cin >> arrayCount;
    int *simpleArray = new int[arrayCount];
    srand(time(NULL));
    for (int i = 0; i < arrayCount; i++) {
        simpleArray[i] = rand() % 21;
        cout << simpleArray[i] << " ";
    }
    cout << endl << "Сума елементів масива: " << arraySum(simpleArray, arrayCount) << endl << endl;
    delete[] simpleArray;
    simpleArray = nullptr;

    //6. Напишіть функцію для перевертання рядка задом наперед.
    cout << "6. Напишіть функцію для перевертання рядка задом наперед." << endl;
    string someString;
    cout << "Введіть рядок: ";
    readln(someString);
    cout << "Перевернута строка: " << reversedString(someString) << endl << endl;

    //7. Розробіть функцію, яка приймає масив і його розмір, а потім сортує масив за зростанням.
    cout << "7. Розробіть функцію, яка приймає масив і його розмір, а потім сортує масив за зростанням." << endl;
    int arrayCount2;
    cout << "Введіть кількість елементів масиву: ";
    cin >> arrayCount2;
    int* simpleArray2 = new int[arrayCount2];
    for (int i = 0; i < arrayCount2; i++) {
        simpleArray2[i] = rand() % 21;
        cout << simpleArray2[i] << " ";
    }
    sortArray(simpleArray2, arrayCount2);
    cout << endl << "Відсортований масив: " << endl;
    for (int i = 0; i < arrayCount2; i++) cout << simpleArray2[i] << " ";
    cout << endl << endl;
    delete[] simpleArray2;
    simpleArray2 = nullptr;

    //8. Напишіть функцію, яка приймає два масиви цілих чисел та повертає новий масив, який містить елементи, що є спільними для обох масивів.
    cout << "8. Напишіть функцію, яка приймає два масиви цілих чисел та повертає новий масив, який містить елементи, що є спільними для обох масивів." << endl;
    int arrayCount3, arrayCount4;
    cout << "Введіть кількість елементів 1-го масиву: ";
    cin >> arrayCount3;
    cout << "Введіть кількість елементів 2-го масиву: ";
    cin >> arrayCount4;
    int* simpleArray3 = new int[arrayCount3];
    int* simpleArray4 = new int[arrayCount4];
    cout << "1-й масив: ";
    for (int i = 0; i < arrayCount3; i++) {
        simpleArray3[i] = rand() % 21;
        cout << simpleArray3[i] << " ";
    }
    cout << endl << "2-й масив: ";
    for (int i = 0; i < arrayCount4; i++) {
        simpleArray4[i] = rand() % 21;
        cout << simpleArray4[i] << " ";
    }
    cout << endl;
    DynArray tempArray = mutualElements(simpleArray3, arrayCount3, simpleArray4, arrayCount4);
    if (tempArray.count == 0) {
        cout << "У цих масивів нема спільних елементів" << endl << endl;
    }
    else {
        cout << "Спільні елементи цих масивів: ";
        for (int i = 0; i < tempArray.count; i++) cout << tempArray.array[i] << " ";
        cout << endl << endl;
    }

    delete[] simpleArray3;
    simpleArray3 = nullptr;
    delete[] simpleArray4;
    simpleArray4 = nullptr;

    //9. Створіть функцію, яка приймає довжину сторін прямокутника та повертає його площу.
    cout << "9. Створіть функцію, яка приймає довжину сторін прямокутника та повертає його площу." << endl;
    float x, y;
    cout << "Введіть довжину прямокутника: ";
    cin >> x;
    cout << "Введіть висоту прямокутника: ";
    cin >> y;
    cout << "Площа прямокутника: " << rectSquare(x, y) << endl << endl;

    //10. Напишіть функцію, яка приймає вік людини і повертає рядок з її категорією віку (дитина, підліток, дорослий і т.д.).
    cout << "10. Напишіть функцію, яка приймає вік людини і повертає рядок з її категорією віку (дитина, підліток, дорослий і т.д.)." << endl;
    unsigned int age;
    cout << "Введіть вік людини: ";
    cin >> age;
    cout << "Людина віком " << age << " " << ageToUkr(age) << " це " << ageTostring(age) << endl;
}

int sum(int a, int b) {
    return a + b;
}

long long fact(unsigned int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return fact(n - 1) * n;
    }
}

void readln(string& str) {
    string temp;
    while (temp == "") getline(cin, temp);
    str = temp;
}

int stringLength(string& str) {
    return str.length();
}

bool isSimple(int a) {
    for (int i = a / 2; i > 1; i--) if (a % i == 0) return false;
    return true;
}

int arraySum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return sum;
}

string reversedString(string inputString) {
    string outputString = inputString;
    int n = inputString.length();
    for (int i = 0; i < n; i++) outputString[i] = inputString[n - i - 1];
    return outputString;
}

void sortArray(int* a, int n) {
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int* addElement(int* a, int n, int e) {
    int* output = new int[n + 1];
    output[n] = e;
    if (n > 0) {
        for (int i = 0; i < n; i++) output[i] = a[i];
    }
    delete[] a;
    return output;
}

bool hasElement(int* a, int n, int e) {
    bool temp = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == e) {
            temp = true;
            break;
        }
    }
    return temp;
}

DynArray mutualElements(int* a1, int c1, int* a2, int c2) {
    int n = 0;
    int* output = new int[n];
    for (int i = 0; i < c1; i++) {
        if (hasElement(a2, c2, a1[i]) && !hasElement(output, n, a1[i])) {
            output = addElement(output, n, a1[i]);
            n++;
        }
    }
    if (n > 1) sortArray(output, n);
    DynArray dynArray;
    dynArray.array = output;
    dynArray.count = n;
    return dynArray;
}

float rectSquare(float x, float y) {
    return x * y;
}

string ageTostring(unsigned int n) {
    if (n < 10) return "дитина";
    else if (n < 20) return "підліток";
    else if (n < 60) return "доросла людина";
    else if (n <= 75) return "людина похилого віку";
    else if (n <= 90) return "людина старечого віку";
    else return "людина-довгожитель";
}

string ageToUkr(int n) {
    int a = n % 10;
    if (a == 1) return "рік";
    else if (a >= 2 && a < 5) return "роки";
    else return "років";
}