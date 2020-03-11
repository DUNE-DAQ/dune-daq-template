#ifndef DUNE_DAQ_TEMPLATE_BAR_HPP
#define DUNE_DAQ_TEMPLATE_BAR_HPP

/** @file Bar.hh
 *  @brief This file is a simple illustration of DUNE DAQ coding style.
 *
 *  This file contains a simple class definition. Please pay attention to
 *  the following doxygen coding style:
 *   - comments for files;
 *   - comments for classes;
 *   - commnets for functions;
 *  A style guide can be found in the style guide repo under DNNE-DAQ
 *  organization at GitHub.
 *
 *  @author P.Ding
 *  @date March 2020
 *
 */

#include <string>

/** @brief Simple class definition with two member classes and one private
 *         data member.
 *  
 *  Detailed description follows here.
 *  @author P.Ding (if different from the file.
 *  @date March 2020
 */
class Bar {
 public:
  /** Constructor takes a string object.
   *
   * @param s string to be stored.
   * @see put()
   */	 
  Bar(std::string s);

  /** Get the stored string.
   *
   *  @return The stored string.
   */
  std::string get(); ///< Details come here. 

  /// Or use this single line style.
  void put(std::string&); ///< [in] Details come here. 

 private:
  std::string bar_; ///< a string object
};

#endif  // DUNE_DAQ_TEMPLATE_BAR_HPP
