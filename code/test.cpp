#include <iostream>
#include <string>

//#include <opencv2/core/core.hpp>  
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/highgui/highgui.hpp> 

int main()
{
	std::string path = "E:/YUsStudio/Research__2_Background_Modeling/dataset/1/";
	char buffer[100];
	sprintf_s(buffer, "%05d%s", 5, ".png");
	std::string file = buffer;

	std::cout << path + file << std::endl;
	while (1);

	std::cout << "Hello World!";
	return 0;
}
