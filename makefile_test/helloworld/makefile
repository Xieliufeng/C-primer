#INCLUDE
INC = -I ./inc

#C++ SOURCE
CPP_SRC = ./src/hello.cpp \
	      ./src/world.cpp

#LIBRARY
LIB = -lhelloworld

#LIB_PATH
RPATH_SEARCH_PATH = -Wl,-rpath ./

LIB_SEARCH_PATH = -L ./

#C++ FLAGS
CXXFLAGS = -c -Wall -g -fPIC

#-fPIC 是 g++ 编译器的选项，用于生成位置无关代码（Position Independent Code）。
#LINK FLAGS
LKFLAGS = -fPIC -shared

#CXX
CXX = g++

#TARGET
TARGET = libhelloworld.so 

#TARGET_TEST
TARGET_TEST = helloworld

#C++ OBJECT
OBJS = $(CPP_SRC:.cpp=.o)

$(TARGET) : $(OBJS)
	$(CXX) $(LKFLAGS) $(INC) $^ -o $@

%.o : %.cpp	
	$(CXX) $(CXXFLAGS) $(INC) $< -o $@

.PHONY: $(TARGET_TEST)

$(TARGET_TEST): ./test/main.cpp
	$(CXX) $(INC) $< $(RPATH_SEARCH_PATH) $(LIB_SEARCH_PATH) $(LIB) -o $@	

clean :
	rm -rf $(OBJS) $(TARGET) $(TARGET_TEST)