#pragma once

#include <string>
#include "astnode.hpp"

class Mul : public ASTNode
{
public:
    Mul(ASTNode *lhs, ASTNode *rhs) : ASTNode("*", lhs, rhs) {}

    ~Mul()
    {
        // std::cout << "Mul destructor!";
    }
};