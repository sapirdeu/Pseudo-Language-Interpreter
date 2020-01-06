#ifndef EX3_NEW_EXPRESSION_H
#define EX3_NEW_EXPRESSION_H


using namespace std;
/**
 * Expression Interface
 */
class Expression {

public:
    virtual double calculate() = 0;
    virtual ~Expression() {}
};


#endif //EX3_NEW_EXPRESSION_H
