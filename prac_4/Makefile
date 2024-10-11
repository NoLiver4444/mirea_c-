CXX = g++
CXXFLAGS = -Wall -Werror -Wextra

all: QUEST_1 QUEST_2 QUEST_3 QUEST_4 QUEST_5 QUEST_6

BUILD_DIR_CREATE:
	mkdir -p build

QUEST_1: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_1 prac_4_1.cpp

QUEST_2: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_2 prac_4_2.cpp $(BUILD_DIR)

QUEST_3: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_3 prac_4_3.cpp $(BUILD_DIR)

QUEST_4: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_4 prac_4_4.cpp $(BUILD_DIR)

QUEST_5: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_5 prac_4_5.cpp $(BUILD_DIR)

QUEST_6: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_6 prac_4_6.cpp $(BUILD_DIR)

clean:
	rm -f build/*.exe

.PHONY: all clean