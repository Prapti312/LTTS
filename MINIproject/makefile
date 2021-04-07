PROJECT_NAME = Conversion.exe

SRC = main.c\
src\Binary_to_Decimal.c\
src\Binary_to_Octal.c\
src\Binary_to_Hexadecimal.c

TEST_SRC = test\test_conversion.c\
src\Binary_to_Decimal.c\
src\Binary_to_Octal.c\
src\Binary_to_Hexadecimal.c\
unity\unity.c

TEST_INC = -Iinc\
-Iunity

INC = inc

$(PROJECT_NAME):$(SRC)
	gcc -I $(INC) $(SRC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	$(PROJECT_NAME)

test:$(SRC) $(TEST_SRC)
	gcc $(TEST_INC)  $(TEST_SRC) -o $(PROJECT_NAME)

clean:
	del /q *.exe