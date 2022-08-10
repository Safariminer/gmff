#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>

int main() {
    std::vector<std::string> originalfile;
    std::ifstream inputfile ("input.ppm");
    printf("Reading file\n");
    if (inputfile.is_open())
    {   
        std::string line;
        while ( std::getline (inputfile,line) ){
            //std::cout << line << '\n';
            originalfile.push_back(line);
        }
        inputfile.close();
    }
    else std::cout << "Unable to open file"; 

    // Right now, as this is a prototype, we'll assume it is 64x64. :/
    
    std::string fileout = "64x64\n";
    for(int i = 0; i < 64*64; i++){
        
        for(int j = 0; j < std::stoi(originalfile.at(i+3)); j++){
            fileout = fileout + "+";
            printf("Writing operation %i:%i\n", i, j);
        }

        fileout = fileout + ">";
        printf("Writing last operation of %i\n", i);
    }

	std::fstream brainfout;
	brainfout.open("out.bf", std::ios::out);
	if (!brainfout) {
		std::cout << "File not created!";
	}
	else {
		std::cout << "File created successfully!";
        brainfout << fileout;
		brainfout.close(); 
	}
	return 0;
}