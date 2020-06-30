#define PORT port
class People
{
public:
    int field;
    virtual void method() const = 0;
    static const int static_feld;
    static int static_method();
};