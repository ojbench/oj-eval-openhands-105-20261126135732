CXX = cc
CXXFLAGS = -O2
TARGET = code

all: $(TARGET)

$(TARGET): code.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) code.cpp

clean:
	rm -f $(TARGET)

.PHONY: all clean
