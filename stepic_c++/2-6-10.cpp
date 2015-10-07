// Реализуйте функцию getline, которая считывает поток ввода посимвольно, пока не достигнет конца потока или не встретит символ переноса строки ('\n'), и возвращает C-style строку с прочитанными символами.

// Обратите внимание, что так как размер ввода заранее неизвестен, то вам нужно будет перевыделять память в процессе чтения, если в потоке ввода оказалось больше символов, чем вы ожидали.

// Память, возвращенная из функции будет освобождена оператором delete[]. Символ переноса строки ('\n') добавлять в строку не нужно, но не забудьте, что в конце C-style строки должен быть завершающий нулевой символ.

// Требования к реализации: при выполнении данного задания вы можете определять любые вспомогательные функции, если они вам нужны. Определять функцию main не нужно.


#include <iostream>

using namespace std;

char *getline() {

    int i = 0;
    char c;
    char * tmp = new char[1];
    while (cin.get(c) && (c != '\n')) {
        i++;
        tmp[i-1] = c;
        char * new_tmp = new char[i+1];
        for (int n=0;n<i;n++) new_tmp[n] = tmp[n];
        delete [] tmp;
        tmp = new_tmp;
    }
    tmp[i] = '\0';
    return tmp;
}