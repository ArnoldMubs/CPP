CXXFLAGS = -g -std=c++14 -Wall -Wextra `pkg-config --cflags eigen3`
LIBS = `pkg-config --libs eigen3` 

all: regression.out

%.out: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LIBS)

