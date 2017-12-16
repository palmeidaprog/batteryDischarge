#ifndef _WORKERS_H_
#define _WORKERS_H_

#include <iostream>
#include <thread>
#include <cstdlib>

using std::thread;
using std::string;

namespace batterydischarge {

    class Workers {
        std::thread const t;
        string wName;
        bool active;
        Workers *next;

        void workerLoad();
        
    public:
        Workers(string const &name, bool activate);
        ~Workers();

        const string &getName();
        void setNext(Workers *n);
        Workers *getNext();
        void setName(string const &name);
        void start();
        void stop();
        void terminate();
    };

}

#endif // _WORKERS_H_