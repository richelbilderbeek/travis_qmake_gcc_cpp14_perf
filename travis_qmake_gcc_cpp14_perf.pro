SOURCES += main.cpp

# Compile with high warning levels, a warning is an error
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

# C++14
CONFIG += c++14
QMAKE_CXXFLAGS += -std=c++14

# Debug and release mode
CONFIG += console debug_and_release
CONFIG(release, debug|release) {
  DEFINES += NDEBUG
}

# perf
QMAKE_CXXFLAGS += -fno-omit-frame-pointer
QMAKE_LFLAGS += -fno-omit-frame-pointer
