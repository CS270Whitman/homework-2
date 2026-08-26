CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
LDFLAGS = -L/usr/local/lib -lgtest -lgtest_main -pthread

# Target to build the test executable
all: caesar_test

caesar_test: caesar_test.cpp Caesar.cpp Caesar.h
	$(CXX) $(CXXFLAGS) -o caesar_test caesar_test.cpp Caesar.cpp $(LDFLAGS)

# Target to run tests
test: caesar_test
	./caesar_test

# Clean target to remove build artifacts
clean:
	rm -f caesar_test