#include <string>
#include <iostream>
#include "build.hpp"

void debug_log(std::string const& output_string)
{
  constexpr auto buildinfo = BuildInfo();
  if constexpr (buildinfo.debug) {
    std::cout << output_string << std::endl;
  }
}




