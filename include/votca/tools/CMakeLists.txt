file(GLOB_RECURSE VOTCA_HEADERS *.h)
if (NOT WITH_SQLITE3)
  file(GLOB_RECURSE NOT_VOTCA_HEADERS database.h statement.h)
  list(REMOVE_ITEM VOTCA_HEADERS ${NOT_VOTCA_HEADERS})
endif(NOT WITH_SQLITE3)
install(FILES ${VOTCA_HEADERS} DESTINATION include/votca/tools)
