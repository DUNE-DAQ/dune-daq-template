#ifndef DUNE_DAQ_TEMPLATE_FOO_HPP
#define DUNE_DAQ_TEMPLATE_FOO_HPP

class Foo {
 public:
  Foo(double = 0);

  double doubleValue();

 private:
  double foo_;
};

#endif  // DUNE_DAQ_TEMPLATE_FOO_HPP
