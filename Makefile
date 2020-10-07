
SRC = unity/unity.c\
src/cloth_store.c\
test/test_cloth_management.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = CLOTH_STORE_MANAGEMENT_SYSTEM.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
