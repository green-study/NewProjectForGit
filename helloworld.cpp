/*#include <iostream>

int main() {
	std::cout << "Hello World" << std::endl;

	//system("pause");
	return 0;
}*/

#include <iostream>
class LetDebug
{
public:
	void printNum()
	{
		int s1 = 32767;
		int s2 = 1;
		int
			s3 = (int)s1 + s2;
		std::cout << s3 << std::endl;
	}
};
int main()
{
	LetDebug* ld = new LetDebug;
	ld->printNum();
	return 0;
}