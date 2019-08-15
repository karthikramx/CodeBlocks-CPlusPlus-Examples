#ifndef MOTHER_H
#define MOTHER_H


class Mother
{
    public: //full access
        Mother();
        void print();
        int publicv;

    protected: //combination of both,
        //access inside the class
        //any friend has access to it
        //any derived class of this class has access
        int protectedv;

    private: //access only inside the class
        int privatev;
};

#endif // MOTHER_H
