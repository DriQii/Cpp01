#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "args : [filename] [s1] [s2]" << std::endl;
		return(1);
	}
	std::string	tmp;
	std::string	newfile = argv[1];
	std::ifstream ifs(argv[1]);
	newfile.append(".replace");
	std::ofstream ofs(newfile);
	while (std::getline(ifs, tmp))
	{
		while(tmp.find(argv[2]) != std::string::npos)
		{
			tmp.insert(tmp.find(argv[2]), argv[3]);
			tmp.erase(tmp.find(argv[2]), strlen(argv[2]));
		}
		ofs.write(tmp.c_str(), tmp.size());
		ofs.put('\n');
	}
	ifs.close();
	ofs.close();
}
