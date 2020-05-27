cacu:add_int.o add_float.o sub_int.o sub_float.o main.o
	g++ -o cacu add/add_int.o add/add_float.o \
		sub/sub_int.o sub/sub_float.o main.o

add_int.o:add/add_int.cc add/add.h
	g++ -c add/add_int.cc -o add/add_int.o

add_float.o:add/add_float.cc add/add.h
	g++ -c add/add_float.cc -o add/add_float.o

sub_int.o:sub/sub_int.cc sub/sub.h
	g++ -c sub/sub_int.cc -o sub/sub_int.o

sub_float.o:sub/sub_float.cc sub/sub.h
	g++ -c sub/sub_float.cc -o sub/sub_float.o

main.o:main.cc add/add.h sub/sub.h
	g++ -o main.o -c main.cc  -Iadd -Isub

clean:
	rm -f cacu add/add_int.o add/add_float.o \
			sub/sub_int.o sub/sub_float.o main.o
