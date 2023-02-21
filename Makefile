# Programmer: Oz Rinkliff

COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Car.cpp Electric.cpp Employee.cpp Hybrid.cpp Invoice.cpp Motorcycle.cpp Student.cpp Utility.cpp Vendor.cpp Visitor.cpp
	$(COMPILER) $(OPTIONS) main.cpp Car.cpp Electric.cpp Employee.cpp Hybrid.cpp Invoice.cpp Motorcycle.cpp Student.cpp Utility.cpp Vendor.cpp Visitor.cpp -o $(PROGRAM)

clean:
	rm * .out