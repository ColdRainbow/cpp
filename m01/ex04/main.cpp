#include <exception>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

void fill_buffer_1_byte(std::string & buffer, std::ifstream & stream){
        buffer += (char)stream.get();
}

void flush(std::string & buffer, std::ifstream & instream,std::ofstream & outstream){
                buffer.erase(buffer.size()-1,1);//handling eof
                outstream << buffer;
                outstream.flush();
                outstream.close();
                instream.close();
}

void try_fill_buffer(std::string & buffer, 
                std::ifstream & instream,
                std::ofstream & outstream,
                uint target_size){
        for (uint i = 0; i<target_size-1; i++){
                fill_buffer_1_byte(buffer, instream);
        }
        if (buffer.size() < target_size - 1){
                flush(buffer, instream, outstream);
                std::exit(0);

        }

}

int main (int argc, char** argv){
        if (argc != 4){
                std::cout<<"Need 3 arguments!"<<"\n";
                return 1;
        }
        std::string filename(argv[1]);
        std::string s1 (argv[2]);
        std::string s2 (argv[3]);

        //std::cout<<"filename "<<filename<< "serching for "<< s1<< "replacing with "<< s2 << '\n';

        std::ifstream file;

        try {
                file.open(filename.c_str());
        } catch (std::exception &e) {
                std::cout<<"cannot open file!"<<"\n";
                return 1;
        }

        std::string output_path = filename + ".replace";
        std::ofstream output;

        try {
                output.open(output_path.c_str());
        } catch (std::exception &e) {
                std::cout<<"cannot open file!"<<"\n";
                return 1;
        }

        std::string buffer;

        //initial fill

        try_fill_buffer(buffer, file, output, s1.size());
        // rotation

        while (!file.eof()){
              fill_buffer_1_byte(buffer, file);
              //std::cout<< buffer << " | " << s1 << "\n";

              if (buffer != s1){
                      output<<buffer[0];
                      buffer.erase(0,1);
                      output.flush();
              } else {
                      std::cout<<"found!"<<"\n";
                      output<<s2;
                      output.flush();
                      buffer.clear();
                      try_fill_buffer(buffer, file, output, s1.size());
              }

        }
        flush(buffer, file, output);
        return 0;
}


