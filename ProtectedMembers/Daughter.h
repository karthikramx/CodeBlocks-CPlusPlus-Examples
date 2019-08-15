#ifndef DAUGHTER_H
#define DAUGHTER_H

//class derived_class : type_inheritance base_class
class Daughter: public Mother
// public inheritance gets access to public and protected
{
    public:
        Daughter();
        void doSomething();

};

#endif // DAUGHTER_H
