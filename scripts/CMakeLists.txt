option(WITH_RC_FILES "Install votca rc files, no need when installing under /usr" ON)
if (WITH_RC_FILES)
  if(APPLE)
    set(LD_LIBRARY_PATH "DYLD_LIBRARY_PATH")
  else(APPLE)
    include(CheckCSourceCompiles)
    check_c_source_compiles(
      "int main(void) {
      #ifndef _AIX
      #error
      #endif
      return 0;
      }" HAVE_AIX)
    if(HAVE_AIX)
      set(LD_LIBRARY_PATH "LIBPATH")
    else(HAVE_AIX)
      set(LD_LIBRARY_PATH "LD_LIBRARY_PATH")
    endif(HAVE_AIX)
  endif(APPLE)
  configure_file(VOTCARC.csh.in ${CMAKE_CURRENT_BINARY_DIR}/VOTCARC.csh @ONLY)
  configure_file(VOTCARC.bash.in ${CMAKE_CURRENT_BINARY_DIR}/VOTCARC.bash @ONLY)
  install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/VOTCARC.csh
    ${CMAKE_CURRENT_BINARY_DIR}/VOTCARC.bash DESTINATION bin)
endif (WITH_RC_FILES)
