SRC = unity/unity.c\
src/Calculator.c\
test/test_file.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = Calculate.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -f $(PROJECT_NAME) 
