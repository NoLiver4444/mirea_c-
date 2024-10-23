CXX = g++
CXXFLAGS = -Wall -Werror -Wextra

all: QUEST_1 QUEST_2 QUEST_3 QUEST_4 QUEST_5 QUEST_6 QUEST_7 QUEST_8 QUEST_9

BUILD_DIR_CREATE:
	mkdir -p build

QUEST_1: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_1 prac_5_1.cpp

QUEST_2: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_2 prac_5_2.cpp $(BUILD_DIR)

QUEST_3: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_3 prac_5_3_1.cpp $(BUILD_DIR)

QUEST_4: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_4 prac_5_3_2.cpp $(BUILD_DIR)

QUEST_5: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_5 prac_5_4_1.cpp $(BUILD_DIR)

QUEST_6: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_6 prac_5_4_2.cpp $(BUILD_DIR)

QUEST_7: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_7 prac_5_7.cpp $(BUILD_DIR)

QUEST_8: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_8 prac_5_8.cpp $(BUILD_DIR)

QUEST_9: 
	$(CXX) $(CXXFLAGS) -o build/QUEST_9 prac_5_9.cpp $(BUILD_DIR)

clean:
	rm -f build/*.exe

.PHONY: all clean