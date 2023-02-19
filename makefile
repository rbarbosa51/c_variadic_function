NAME := main
$(NAME): $(NAME).c
	gcc -o $@ $^
	./$(NAME)
.PHONY: clean
clean:
	rm $(NAME)

