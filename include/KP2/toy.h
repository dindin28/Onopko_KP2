#ifndef _KP2_INCLUDE_KP2_TOY_H_
#define _KP2_INCLUDE_KP2_TOY_H_

#include <KP2/classification.h>
#include <iostream>

class Toy
{
public:
  //Default constructor(with no parameters)
  Toy();

  //Constructor with parameters
  Toy(const char *name_of_toy, const char *manufacturer_name, Classififcation classififcation);

  //Copy constructor
  Toy(const Toy &copy);

  //operator =
  Toy &operator=(const Toy &copy);

  //Destructor
  ~Toy();

  //Setters
  Toy &SetNameOfToy(const char *name_of_toy);
  Toy &SetManufacturerName(const char *manufacturer_name);
  Toy &SetClassification(Classififcation classififcation);

  //Getters
  const char *GetNameOfToy() const;
  const char *GetManufacturerName() const;
  Classififcation GetClassification() const;

  //Function to print class info
  void Print();

  //Operators
  bool operator==(const Toy &copy);
  bool operator!=(const Toy &copy);

  friend std::ostream &operator<<(std::ostream &out, const Toy &copy);
  friend std::istream &operator>>(std::istream &in, Toy &copy);

private:
  char *name_of_toy_;
  char *manufacturer_name_;
  Classififcation classififcation_;
}; //Class(Toy)

#endif //Header Guard