//Copyright by Spertis

#include "Check.h"
#include "Time.h"

void show_vector( vector<int>&a)
{
  for (vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it)
    cout<<*it;
}

int main() {
  std::vector<int64_t> size;

  long i = 1;
  int k = 0;
  int length;
  std::cout << "Введите количество массивов: ";
  std::cin >> length;
  while (k < length) {
    printf("Укажите размер кэша номер %d: ", ++k);
    std::cin >> i;
    if (i <= 0) {
      printf("Размер массива %d некорректен\n",k--);
    }
    else size.push_back(i);
  }
//    show_vector(size);
  std::cout << size.size();
    Time front(_forward, size);
    front.print(std::cout);
    Time inv(_reverse, size);
    inv.print(std::cout);
    Time rand(_random, size);
    rand.print(std::cout);
}

