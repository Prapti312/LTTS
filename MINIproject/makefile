PROJECT_NAME = Conversion.exe

SRC = main.c\
src\Binary_to_Decimal.c\
src\Binary_to_Octal.c\
src\Binary_to_Hexadecimal.c

INC = inc
$(PROJECT_NAME):$(SRC)
	gcc -I $(INC) $(SRC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	$(PROJECT_NAME)

clean:
	del /q *.exe