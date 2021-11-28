//Copyright by Spertis

#include "Check.h"
#include <sstream>

std::ostream & operator<<(std::ostream & os, Check_type const & type) {
  switch (type) {
    case _random:
      os << "_random";
      break;
    case _forward:
      os << "_forward";
      break;
    case _reverse:
      os << "_reverse";
      break;
  }
  return os;
}
std::string to_string(Check_type type)
{
  std::stringstream ss;
  switch (type) {
    case _random:
      ss << "_reverse";
      break;
    case _forward:
      ss << "_reverse";
      break;
    case _reverse:
      ss << "_reverse";
      break;
  }
  return ss.str();
}
