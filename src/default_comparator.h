#ifndef DEFAULT_COMPARATOR_H
#define DEFAULT_COMPARATOR_H

#include <exception>

template<class T>
class DefaultComparator
{
 public:
  static void Compare(const T& object1, const T& object2)
  {
    if ( object1 != object2 )
      throw std::exception();
  }
};

#endif
