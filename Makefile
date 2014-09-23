#CC=/usr/local/bin/icc
CC=/usr/bin/g++
ext=cc
IFlags=-I./FCpp/1.5
filename=recursive

do:
	@$(CC) $(IFlags) -o $(filename)  $(filename).$(ext)
run:
	@./$(filename)
clean:
	@rm -f $(filename)
	@clean
