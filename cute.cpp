#include<iostream>
#include<unistd.h>
#include<cstdlib>
#include<fstream> 
#include<cstring>
#include<string> 

//globals 

const std::string error_message_usage = "Usage: cute filename speed"; 
int const_speed = 10000;
int speed = 6*const_speed; 
std::string filename =""; 
std::string source_code="";

void parse_command(int count, char** arguments){

    if (count == 1 || count > 3) { std::cerr<<error_message_usage<<std::endl; exit(1); } 

    else if (count == 2) {filename = arguments[1];} 

    else if (count == 3) {filename = arguments[1]; speed = atoi(arguments[2])*const_speed;} 
    
}

void read_source_code(std::string filename){
    
    std::ifstream reader(filename, std::ios::in); 

    if (!reader) {std::cerr<<filename<<":Can not access the file!"<<std::endl;exit(1);}

    while (!reader.eof()){

        source_code+=reader.get(); 
    }

    reader.close();

}


void animate_source_code(){

    for (auto i=0; i<source_code.size(); i++){

        std::cout<<source_code[i]; 

        std::cout.flush();

        usleep(speed);

    }

}

int main (int argc, char** argv){

    parse_command(argc, argv); 

    read_source_code(filename);

    system("clear;"); //clear the screen before animating.

    animate_source_code(); 

    return 0;

}
