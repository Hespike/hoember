class Hoember {
    unsigned int meret;

public:
    Hoember(unsigned int meret): meret(meret) {}

    Hoember& operator++() {
        meret++;
        return *this;
    }

    Hoember& operator--() {
        if (meret>0) {
            meret--;
            return *this;
        }
        else {
            return *this;
        }
    }

};
