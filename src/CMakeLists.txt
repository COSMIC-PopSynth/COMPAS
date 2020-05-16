## add library
#add_executable(COMPAS main.cpp utils.cpp Options.cpp Log.cpp Rand.cpp Errors.cpp BaseStar.cpp Star.cpp MainSequence.cpp MS_lte_07.cpp MS_gt_07.cpp CH.cpp GiantBranch.cpp HG.cpp FGB.cpp CHeB.cpp EAGB.cpp TPAGB.cpp HeMS.cpp HeHG.cpp HeGB.cpp HeWD.cpp COWD.cpp ONeWD.cpp NS.cpp BH.cpp MR.cpp AIS.cpp BinaryConstituentStar.cpp BaseBinaryStar.cpp BinaryStar.cpp)
#
## Include paths to headers
#include_directories ("${PROJECT_SOURCE_DIR}/include/")
#include_directories(SYSTEM ${GSL_INCLUDE_DIRS})
#include_directories(SYSTEM ${ZLIB_INCLUDE_DIRS})
#include_directories(SYSTEM ${Boost_INCLUDE_DIRS})
#
## link library to executable
#target_link_libraries(COMPAS m)
#target_link_libraries(COMPAS ${ZLIB_LIBRARIES})
#target_link_libraries(COMPAS ${GSL_CBLAS_LIBRARY})
#target_link_libraries(COMPAS ${GSL_LIBRARIES})
#target_link_libraries(COMPAS ${Boost_LIBRARIES})
#
#install(TARGETS COMPAS DESTINATION bin)
#
# Wrap C++ code in Python with pybind11
pybind11_add_module(pycompas main.cpp utils.cpp Options.cpp Log.cpp Rand.cpp Errors.cpp BaseStar.cpp Star.cpp MainSequence.cpp MS_lte_07.cpp MS_gt_07.cpp CH.cpp GiantBranch.cpp HG.cpp FGB.cpp CHeB.cpp EAGB.cpp TPAGB.cpp HeMS.cpp HeHG.cpp HeGB.cpp HeWD.cpp COWD.cpp ONeWD.cpp NS.cpp BH.cpp MR.cpp AIS.cpp BinaryConstituentStar.cpp BaseBinaryStar.cpp BinaryStar.cpp)

# Include paths to headers
include_directories ("${PROJECT_SOURCE_DIR}/include/")
include_directories(SYSTEM ${GSL_INCLUDE_DIRS})
include_directories(SYSTEM ${ZLIB_INCLUDE_DIRS})
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})

# link library to executable
target_link_libraries(pycompas PRIVATE ${ZLIB_LIBRARIES})
target_link_libraries(pycompas PRIVATE ${GSL_LIBRARIES})
target_link_libraries(pycompas PRIVATE ${Boost_LIBRARIES})
target_link_libraries(pycompas PRIVATE gslcblas)
