# to_numeric

Converts a string value to numeric type

## Dependencies

*C++11*

## Installation

```
git clone git@github.com:monolithed/to_numeric.git
```

Place the to_numeric.hpp into the working directory and include like:

```c++
#inclide "to_numeric.hpp"
```

## Using

```c++
#include <iostream>
#include "../to_numeric.hpp"

int main()
{
	// std::string -> unsigned long long
	std::cout << nott::to_numeric<unsigned long long>("100000000000000ULL") << std::endl;

	// float -> int
	std::cout << nott::to_numeric<float>(10.0001f) << std::endl;

	// char -> int
	std::cout << nott::to_numeric<int>('1') << std::endl;

	return 0;
}
```

## Supported operations

```
std::string / char *  ->  int
std::string / char *  ->  short
std::string / char *  ->  signed
std::string / char *  ->  signed int
std::string / char *  ->  unsigned int
std::string / char *  ->  unsigned short
std::string / char *  ->  long
std::string / char *  ->  long int
std::string / char *  ->  long long
std::string / char *  ->  long long int
std::string / char *  ->  unsigned long
std::string / char *  ->  unsigned long int
std::string / char *  ->  unsigned long long
std::string / char *  ->  unsigned long long int
std::string / char *  ->  float
std::string / char *  ->  double
std::string / char *  ->  long double
int                   ->  int
float                 ->  double
```

##.

* to_numeric library is licensed under the MIT (MIT_LICENSE.txt) license

* Copyright (c) 2012 [Alexander Guinness] (https://github.com/monolithed)
