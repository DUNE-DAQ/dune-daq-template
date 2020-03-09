#ifndef DUNE_DAQ_TEMPLATE_BAR_HPP
#define DUNE_DAQ_TEMPLATE_BAR_HPP

#include <string>

class Bar {
 public:
  Bar(std::string s);

  std::string get();
  void put(std::string&);

 private:
  std::string bar_;
};

#endif  // DUNE_DAQ_TEMPLATE_BAR_HPP
