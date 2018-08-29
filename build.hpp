struct BuildInfo {
#ifdef DEBUG
  bool debug{true};
#else
  bool debug{false};
#endif
};

void debug_log(std::string const& output_string);
