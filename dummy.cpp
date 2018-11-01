#include <cstdlib>

struct A{
    int a;
};

struct B{
    int a;
    int b;
};

struct B* createA(){
    struct A* a = (A*)malloc(sizeof(struct A));
    return (B*)a;
}


int main(int argc, const char** args){
    B* a=createA();
    a->a=1;
    if(argc > 1){
        a->b=1;// fehler!
    }
}
