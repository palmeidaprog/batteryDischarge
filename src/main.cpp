#include <iostream>
#include <cstdlib>
#include <vector>
#include <thread>

using std::cout;
using std::endl;

void error(const std::string &msg);
void workerLoad(unsigned const &w, bool output = false);

int main(int argc, char *argv[]) {
    unsigned workersNum;
    std::vector<std::thread> workers;

    if(argc < 2) {
        error("few");
        return -1;
    }
    else if(argc > 2) {
        error("many");
        return -2;
        
    }

    workersNum = atoi(argv[1]) - 1;
    for(unsigned i = 0; i < workersNum; i++) {
        std::thread t(workerLoad, workersNum, false);
        workers.push_back(t);
    }
    workerLoad(workersNum, true);
    return 0;    
}

// print error message
void error(const std::string &msg) {
    cout << "Too " << msg << " arguments" << endl;
    cout << "\tUsage: bdisch [number of workers]\n" << 
            "\tNumber of workers should be the same as the number of cores " 
            << "your CPU has." << endl;
}

// worker's load
void workerLoad(unsigned const &w, bool output) {
    int i = 0;

    while(true) {
        ++i;
        if(output) {
            cout << "\rRunning " << w << " workers: " << i;
        }
    }
}