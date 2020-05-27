#include <iostream>

int sum(int value);

struct inout{
	int value;
	int result;
};

int main(int argc, char *argv[])
{
	inout *io;
	try
	{
		io = new inout;
	}
	catch (bad_alloc& e){
		std::cout << e.what() << std::endl;
		return -1;
	}
	
	{
		std::cout << "申请内存失败!" << std::endl;
		return -1;
	}

	if (argc != 2)
	{
		std::cout << "参数输入错误!" << std::endl;
		return -1;
	}

	io->value = *argv[1] - '0';
	io->result = sum(io->value);
	std::cout << "你输入的值为: " << io->value << "，计算结果为：" << io->result << std::endl;
	delete io;
	return 0;
}

int sum(int value)
{
	int result = 0;
	int i = 0;

	for (i = 0; i < value; ++i)
		result += i;
	
	return result;
}
