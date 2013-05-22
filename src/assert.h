#ifndef ASSERT_H
#define ASSERT_H

#include "default_comparator.h"
#include <string>

template<class T, template<class> class Comparator = DefaultComparator >
class Assert
{
 public:
  static void Equals(const std::string& failMessage, const T& actual, const T& expected)
  {
    try
      {
	//	Comparator<T>::Compare(actual, expected);
      }
    catch (...)
      {
	throw failMessage;
      }
  }

  static void True(const std::string& failMessage, bool value)
  {
    if ( !value )
      throw failMessage;
  }

  static void False(const std::string& failMessage, bool value)
  {
    True(failMessage, !value);
  }
};

#endif
