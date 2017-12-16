namespace batterydischarge {
    
    Workers::Workers(string const &name, bool activate): wName(name), active
        (activate), next(NULL) {
        t = new thread(workerLoad());

    }

    Workers::~Workers() {
        delete t;
    }

    void Workers::workerLoad() {
        int i = 0;

        while(active) {
            ++i;
        }
    }

    void Workers::setNext(Workers *n) {
        next = n;
    }
    const Workers &Workers::getNext() {
        return next;
    }

    const string &Workers::getName() {
        return wName;
    }

    void Workers::setName(string const &name) {
        wName = name;
    }

    void Workers::start() {
        active = true;
    }

    void Workers::stop() {
        active = false;
    }

    void Workers::terminate() {
        active = false;
        delete this;
    }

}