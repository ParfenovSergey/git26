CXX       := g++
CXX_FLAGS := -std=c++20

BIN     := bin
SRC     := .
INCLUDE := .

LIBRARIES   := -lSDL3 -lSDL3_image
EXECUTABLE  := game.exe


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*