//Copyright by Spertis

#include "Check.h"
#include "Time.h"

int main() {
  std::vector<int64_t> size;

  long i = 1;
  int k = 0;

  int length;
  std::cout << "Введите количество массивов: ";
  std::cin >> length;
  while (k < length) {
    printf("Укажите размер массива номер %d: ", ++k);
    std::cin >> i;
    if (i <= 0) {
      printf("Размер массива %d некорректен\n",k--);
    }
    if (k >= length - 1) size.push_back(i);
  }
    Time inv(_reverse, size);
    inv.print(std::cout);
}